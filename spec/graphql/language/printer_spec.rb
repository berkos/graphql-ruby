# frozen_string_literal: true
require "spec_helper"

describe GraphQL::Language::Printer do
  let(:document) { GraphQL.parse(query_string) }
  let(:query_string) {%|
    query getStuff($someVar: Int = 1, $anotherVar: [String!], $skipNested: Boolean! = false) @skip(if: false) {
      myField: someField(someArg: $someVar, ok: 1.4) @skip(if: $anotherVar) @thing(or: "Whatever")
      anotherField(someArg: [1, 2, 3]) {
        nestedField
        ...moreNestedFields @skip(if: $skipNested)
      }
      ... on OtherType @include(unless: false) {
        field(arg: [{key: "value", anotherKey: 0.9, anotherAnotherKey: WHATEVER}])
        anotherField
      }
      ... {
        id
      }
    }

    fragment moreNestedFields on NestedType @or(something: "ok") {
      anotherNestedField
    }
  |}

  let(:printer) { GraphQL::Language::Printer.new }

  describe "#print" do
    it "prints the query string" do
      assert_equal query_string.gsub(/^    /, "").strip, printer.print(document)
    end

    it "prints a truncated query string" do
      expected = query_string.gsub(/^    /, "").strip[0, 50 - GraphQL::Language::Printer::OMISSION.size]
      expected = "#{expected}#{GraphQL::Language::Printer::OMISSION}"

      assert_equal(
        expected,
        printer.print(document, truncate_size: 50),
      )
    end

    describe "inputs" do
      let(:query_string) {%|
        query {
          field(null_value: null, null_in_array: [1, null, 3], int: 3, float: 4.7e-24, bool: false, string: "☀︎🏆\\n escaped \\" unicode ¶ /", enum: ENUM_NAME, array: [7, 8, 9], object: {a: [1, 2, 3], b: {c: "4"}}, unicode_bom: "\xef\xbb\xbfquery")
        }
      |}

      it "prints the query string" do
        assert_equal query_string.gsub(/^        /, "").strip, printer.print(document)
      end
    end

    describe "schema" do
      describe "schema with convention names for root types" do
        let(:query_string) {<<-schema
          schema {
            query: Query
            mutation: Mutation
            subscription: Subscription
          }
        schema
        }

        it 'omits schema definition' do
          refute printer.print(document) =~ /schema/
        end
      end

      describe "schema with custom query root name" do
        let(:query_string) {<<-schema
          schema {
            query: MyQuery
            mutation: Mutation
            subscription: Subscription
          }
        schema
        }

        it 'includes schema definition' do
          assert_equal query_string.gsub(/^          /, "").strip, printer.print(document)
        end
      end

      describe "schema with custom mutation root name" do
        let(:query_string) {<<-schema
          schema {
            query: Query
            mutation: MyMutation
            subscription: Subscription
          }
        schema
        }

        it 'includes schema definition' do
          assert_equal query_string.gsub(/^          /, "").strip, printer.print(document)
        end
      end

      describe "schema with custom subscription root name" do
        let(:query_string) {<<-schema
          schema {
            query: Query
            mutation: Mutation
            subscription: MySubscription
          }
        schema
        }

        it 'includes schema definition' do
          assert_equal query_string.gsub(/^          /, "").strip, printer.print(document)
        end
      end

      describe "full featured schema" do
        # Based on: https://github.com/graphql/graphql-js/blob/bc96406ab44453a120da25a0bd6e2b0237119ddf/src/language/__tests__/schema-kitchen-sink.graphql
        let(:query_string) {<<-schema
          schema {
            query: QueryType
            mutation: MutationType
          }

          """
          Union description
          """
          union AnnotatedUnion @onUnion = A | B

          type Foo implements Bar & AnnotatedInterface {
            one: Type
            two(argument: InputType!): Type
            three(argument: InputType, other: String): Int
            four(argument: String = "string"): String
            five(argument: [String] = ["string", "string"]): String
            six(argument: InputType = {key: "value"}): Type
            seven(argument: String = null): Type
          }

          """
          Scalar description
          """
          scalar CustomScalar

          type AnnotatedObject implements Bar @onObject(arg: "value") {
            annotatedField(arg: Type = "default" @onArg): Type @onField
          }

          interface Bar {
            one: Type
            four(argument: String = "string"): String
          }

          """
          Enum description
          """
          enum Site {
            """
            Enum value description
            """
            DESKTOP
            MOBILE
          }

          interface AnnotatedInterface @onInterface {
            annotatedField(arg: Type @onArg): Type @onField
          }

          union Feed = Story | Article | Advert

          """
          Input description
          """
          input InputType {
            key: String!
            answer: Int = 42
          }

          union AnnotatedUnion @onUnion = A | B

          scalar CustomScalar

          """
          Directive description
          """
          directive @skip(if: Boolean!) on FIELD | FRAGMENT_SPREAD | INLINE_FRAGMENT

          scalar AnnotatedScalar @onScalar

          enum Site {
            DESKTOP
            MOBILE
          }

          enum AnnotatedEnum @onEnum {
            ANNOTATED_VALUE @onEnumValue
            OTHER_VALUE
          }

          input InputType {
            key: String!
            answer: Int = 42
          }

          input AnnotatedInput @onInputObjectType {
            annotatedField: Type @onField
          }

          directive @skip(if: Boolean!) on FIELD | FRAGMENT_SPREAD | INLINE_FRAGMENT

          directive @include(if: Boolean!) on FIELD | FRAGMENT_SPREAD | INLINE_FRAGMENT
        schema
        }

        it "generate" do
          assert_equal query_string.gsub(/^          /, "").strip, printer.print(document)
        end

        it "doesn't mutate the document" do
          assert_equal printer.print(document), printer.print(document)
        end
      end

      describe "schema extension" do
        let(:query_string) do
          <<-SCHEMA
          extend schema
            @onSchema
          {
            query: QueryType
            mutation: MutationType
          }

          extend union AnnotatedUnion @onUnion = A | B

          extend type Foo implements Bar @onType {
            one: Type
            two(argument: InputType!): Type
          }

          extend scalar CustomScalar @onScalar

          extend interface Bar @onInterface {
            one: Type
          }

          extend enum Site @onEnum {
            DESKTOP
            MOBILE
          }

          extend input InputType @onInputType {
            key: String!
            answer: Int = 42
          }
          SCHEMA
        end

        it "generates correctly" do
          assert_equal query_string.gsub(/^          /, "").strip, printer.print(document)
        end
      end
    end
  end
end
