#line 1 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"

#line 102 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"



#line 8 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
static const char _graphql_c_lexer_trans_keys[] = {
	4, 22, 4, 43, 14, 47, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 49, 4, 22,
	4, 4, 4, 4, 4, 22, 4, 4,
	4, 4, 14, 15, 14, 15, 10, 15,
	12, 12, 0, 49, 0, 0, 4, 22,
	4, 4, 4, 4, 4, 4, 4, 22,
	4, 4, 4, 4, 1, 1, 14, 15,
	12, 12, 10, 29, 14, 15, 12, 15,
	12, 12, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	14, 46, 14, 46, 14, 46, 14, 46,
	0
};

static const signed char _graphql_c_lexer_char_class[] = {
	0, 1, 2, 2, 1, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 0,
	3, 4, 5, 6, 2, 7, 2, 8,
	9, 2, 10, 0, 11, 12, 13, 14,
	15, 15, 15, 15, 15, 15, 15, 15,
	15, 16, 2, 2, 17, 2, 2, 18,
	19, 19, 19, 19, 20, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 21, 22, 23, 2, 24, 2,
	25, 26, 27, 28, 29, 30, 31, 32,
	33, 19, 19, 34, 35, 36, 37, 38,
	39, 40, 41, 42, 43, 44, 19, 45,
	46, 19, 47, 48, 49, 0
};

static const short _graphql_c_lexer_index_offsets[] = {
	0, 19, 59, 93, 126, 159, 192, 225,
	258, 291, 324, 360, 379, 380, 381, 400,
	401, 402, 404, 406, 412, 413, 463, 464,
	483, 484, 485, 486, 505, 506, 507, 508,
	510, 511, 531, 533, 537, 538, 571, 604,
	637, 670, 703, 736, 769, 802, 835, 868,
	901, 934, 967, 1000, 1033, 1066, 1099, 1132,
	1165, 1198, 1231, 1264, 1297, 1330, 1363, 1396,
	1429, 1462, 1495, 1528, 1561, 1594, 1627, 1660,
	1693, 1726, 1759, 1792, 1825, 1858, 1891, 1924,
	1957, 1990, 2023, 2056, 2089, 2122, 2155, 2188,
	2221, 2254, 2287, 2320, 2353, 2386, 2419, 2452,
	2485, 2518, 2551, 2584, 2617, 2650, 2683, 2716,
	2749, 2782, 2815, 2848, 2881, 2914, 2947, 2980,
	3013, 3046, 3079, 3112, 3145, 3178, 3211, 3244,
	3277, 3310, 3343, 3376, 3409, 3442, 3475, 3508,
	3541, 3574, 3607, 3640, 0
};

static const short _graphql_c_lexer_indices[] = {
	2, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 3, 1, 0, 0, 0, 0,
	0, 0, 0, 0, 1, 0, 0, 0,
	0, 0, 0, 0, 0, 1, 0, 0,
	0, 1, 0, 0, 0, 1, 0, 0,
	0, 0, 0, 1, 0, 0, 0, 1,
	0, 1, 4, 5, 5, 0, 0, 0,
	5, 5, 0, 0, 0, 0, 5, 5,
	5, 5, 5, 5, 5, 5, 5, 5,
	5, 5, 5, 5, 5, 5, 5, 5,
	5, 5, 5, 5, 6, 7, 7, 0,
	0, 0, 7, 7, 0, 0, 0, 0,
	7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 8, 8,
	0, 0, 0, 8, 8, 0, 0, 0,
	0, 8, 8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8, 8, 1,
	1, 0, 0, 0, 1, 1, 0, 0,
	0, 0, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	9, 9, 0, 0, 0, 9, 9, 0,
	0, 0, 0, 9, 9, 9, 9, 9,
	9, 9, 9, 9, 9, 9, 9, 9,
	9, 9, 9, 9, 9, 9, 9, 9,
	9, 10, 10, 0, 0, 0, 10, 10,
	0, 0, 0, 0, 10, 10, 10, 10,
	10, 10, 10, 10, 10, 10, 10, 10,
	10, 10, 10, 10, 10, 10, 10, 10,
	10, 10, 11, 11, 0, 0, 0, 11,
	11, 0, 0, 0, 0, 11, 11, 11,
	11, 11, 11, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 11, 11, 11, 11,
	11, 11, 11, 12, 12, 0, 0, 0,
	12, 12, 0, 0, 0, 0, 12, 12,
	12, 12, 12, 12, 12, 12, 12, 12,
	12, 12, 12, 12, 12, 12, 12, 12,
	12, 12, 12, 12, 12, 12, 0, 0,
	0, 12, 12, 0, 0, 0, 0, 12,
	12, 12, 12, 12, 12, 12, 12, 12,
	12, 12, 12, 12, 12, 12, 12, 12,
	12, 12, 12, 12, 12, 0, 0, 1,
	15, 14, 14, 14, 14, 14, 14, 14,
	14, 14, 14, 14, 14, 14, 14, 14,
	14, 14, 16, 17, 18, 19, 14, 14,
	14, 14, 14, 14, 14, 14, 14, 14,
	14, 14, 14, 14, 14, 14, 14, 16,
	20, 21, 23, 23, 25, 25, 26, 26,
	24, 24, 25, 25, 27, 30, 31, 29,
	32, 33, 34, 35, 36, 37, 38, 29,
	39, 40, 29, 41, 42, 43, 44, 45,
	46, 46, 47, 29, 48, 46, 46, 46,
	46, 49, 50, 51, 46, 46, 52, 46,
	53, 54, 55, 46, 56, 57, 58, 59,
	60, 46, 46, 46, 61, 62, 63, 30,
	66, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 3, 14, 69, 70, 71, 14,
	14, 14, 14, 14, 14, 14, 14, 14,
	14, 14, 14, 14, 14, 14, 14, 14,
	16, 72, 18, 73, 41, 42, 75, 26,
	26, 76, 76, 23, 23, 76, 76, 76,
	76, 77, 76, 76, 76, 76, 76, 76,
	76, 76, 77, 25, 25, 75, 74, 42,
	42, 78, 46, 46, 13, 13, 13, 46,
	46, 13, 13, 13, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 79, 79, 79,
	46, 46, 79, 79, 79, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 80, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 79, 79,
	79, 46, 46, 79, 79, 79, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 81, 46,
	46, 46, 46, 46, 46, 46, 46, 79,
	79, 79, 46, 46, 79, 79, 79, 46,
	46, 46, 46, 46, 82, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	79, 79, 79, 46, 46, 79, 79, 79,
	46, 46, 46, 83, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 79, 79, 79, 46, 46, 79, 79,
	79, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 84, 46, 46, 46, 46,
	46, 46, 79, 79, 79, 46, 46, 79,
	79, 79, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 85, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 79, 79, 79, 46, 46,
	79, 79, 79, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 86,
	46, 46, 46, 46, 79, 79, 79, 46,
	46, 79, 79, 79, 46, 46, 46, 46,
	46, 87, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 79, 79, 79,
	46, 46, 79, 79, 79, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 88, 46, 46, 46, 46, 46, 46,
	46, 46, 89, 46, 46, 46, 79, 79,
	79, 46, 46, 79, 79, 79, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 90, 46, 46, 46, 46, 46, 79,
	79, 79, 46, 46, 79, 79, 79, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 91, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	79, 79, 79, 46, 46, 79, 79, 79,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 92, 46, 46, 46, 46, 46,
	46, 79, 79, 79, 46, 46, 79, 79,
	79, 46, 46, 46, 46, 46, 93, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 79, 79, 79, 46, 46, 79,
	79, 79, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 94, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 79, 79, 79, 46, 46,
	79, 79, 79, 46, 46, 46, 46, 95,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 79, 79, 79, 46,
	46, 79, 79, 79, 46, 96, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 97, 46, 46, 46,
	46, 46, 46, 46, 46, 79, 79, 79,
	46, 46, 79, 79, 79, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 98,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 79, 79,
	79, 46, 46, 79, 79, 79, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 99,
	46, 46, 46, 46, 46, 46, 46, 79,
	79, 79, 46, 46, 79, 79, 79, 46,
	46, 46, 46, 46, 100, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	79, 79, 79, 46, 46, 79, 79, 79,
	46, 101, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 79, 79, 79, 46, 46, 79, 79,
	79, 46, 46, 46, 46, 46, 46, 46,
	102, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 79, 79, 79, 46, 46, 79,
	79, 79, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 103, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 79, 79, 79, 46, 46,
	79, 79, 79, 46, 46, 46, 46, 46,
	104, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 79, 79, 79, 46,
	46, 79, 79, 79, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	105, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 79, 79, 79,
	46, 46, 79, 79, 79, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 106,
	46, 46, 46, 46, 46, 46, 79, 79,
	79, 46, 46, 79, 79, 79, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 107, 108, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 79,
	79, 79, 46, 46, 79, 79, 79, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 109, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	79, 79, 79, 46, 46, 79, 79, 79,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 110, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 79, 79, 79, 46, 46, 79, 79,
	79, 46, 46, 46, 46, 46, 111, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 79, 79, 79, 46, 46, 79,
	79, 79, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 112, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 79, 79, 79, 46, 46,
	79, 79, 79, 46, 46, 46, 46, 46,
	113, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 79, 79, 79, 46,
	46, 79, 79, 79, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	114, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 79, 79, 79,
	46, 46, 79, 79, 79, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 115,
	46, 46, 46, 46, 46, 46, 79, 79,
	79, 46, 46, 79, 79, 79, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 116,
	46, 46, 46, 46, 46, 46, 46, 79,
	79, 79, 46, 46, 79, 79, 79, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 117, 46, 46,
	46, 118, 46, 46, 46, 46, 46, 46,
	79, 79, 79, 46, 46, 79, 79, 79,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 119, 46, 46, 46, 46,
	46, 79, 79, 79, 46, 46, 79, 79,
	79, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 120, 46, 46, 46, 46,
	46, 46, 79, 79, 79, 46, 46, 79,
	79, 79, 46, 46, 46, 46, 46, 121,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 79, 79, 79, 46, 46,
	79, 79, 79, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 122, 46, 46, 46, 46,
	46, 46, 46, 46, 79, 79, 79, 46,
	46, 79, 79, 79, 46, 46, 46, 46,
	46, 46, 123, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 79, 79, 79,
	46, 46, 79, 79, 79, 46, 124, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 79, 79,
	79, 46, 46, 79, 79, 79, 46, 46,
	46, 125, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 79,
	79, 79, 46, 46, 79, 79, 79, 46,
	46, 46, 46, 46, 126, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	79, 79, 79, 46, 46, 79, 79, 79,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 127, 46, 46, 46, 46,
	46, 79, 79, 79, 46, 46, 79, 79,
	79, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 128, 46, 46, 46, 46,
	46, 46, 79, 79, 79, 46, 46, 79,
	79, 79, 46, 129, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 79, 79, 79, 46, 46,
	79, 79, 79, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 130, 46, 46,
	46, 46, 46, 46, 79, 79, 79, 46,
	46, 79, 79, 79, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 131, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 79, 79, 79,
	46, 46, 79, 79, 79, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 132, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 79, 79,
	79, 46, 46, 79, 79, 79, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 133, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 79,
	79, 79, 46, 46, 79, 79, 79, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 134, 46, 46, 46, 46, 46,
	79, 79, 79, 46, 46, 79, 79, 79,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 135, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 79, 79, 79, 46, 46, 79, 79,
	79, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 136, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 79, 79, 79, 46, 46, 79,
	79, 79, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 137, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 79, 79, 79, 46, 46,
	79, 79, 79, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 138, 46,
	46, 46, 46, 46, 79, 79, 79, 46,
	46, 79, 79, 79, 46, 46, 46, 46,
	46, 139, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 79, 79, 79,
	46, 46, 79, 79, 79, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 140, 46, 46,
	46, 46, 46, 46, 46, 46, 79, 79,
	79, 46, 46, 79, 79, 79, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 141, 46, 46, 79,
	79, 79, 46, 46, 79, 79, 79, 46,
	46, 46, 46, 46, 142, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	79, 79, 79, 46, 46, 79, 79, 79,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 143, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 79, 79, 79, 46, 46, 79, 79,
	79, 46, 46, 46, 46, 46, 144, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 79, 79, 79, 46, 46, 79,
	79, 79, 46, 145, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 79, 79, 79, 46, 46,
	79, 79, 79, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 146, 46, 46,
	46, 46, 46, 46, 79, 79, 79, 46,
	46, 79, 79, 79, 46, 147, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 79, 79, 79,
	46, 46, 79, 79, 79, 46, 46, 148,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 79, 79,
	79, 46, 46, 79, 79, 79, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	149, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 79,
	79, 79, 46, 46, 79, 79, 79, 46,
	46, 46, 46, 46, 150, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	79, 79, 79, 46, 46, 79, 79, 79,
	46, 46, 46, 151, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 152, 46, 46, 46, 46,
	46, 79, 79, 79, 46, 46, 79, 79,
	79, 46, 153, 46, 46, 46, 46, 46,
	46, 154, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 79, 79, 79, 46, 46, 79,
	79, 79, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 155, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 79, 79, 79, 46, 46,
	79, 79, 79, 46, 156, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 79, 79, 79, 46,
	46, 79, 79, 79, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 157, 46, 46, 46,
	46, 46, 46, 46, 46, 79, 79, 79,
	46, 46, 79, 79, 79, 46, 46, 46,
	46, 46, 158, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 79, 79,
	79, 46, 46, 79, 79, 79, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 159, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 79,
	79, 79, 46, 46, 79, 79, 79, 46,
	160, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	79, 79, 79, 46, 46, 79, 79, 79,
	46, 46, 161, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 79, 79, 79, 46, 46, 79, 79,
	79, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 162, 46, 46, 46, 46, 46,
	46, 46, 79, 79, 79, 46, 46, 79,
	79, 79, 46, 46, 46, 163, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 79, 79, 79, 46, 46,
	79, 79, 79, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 164, 46, 46, 46, 46,
	46, 46, 46, 46, 79, 79, 79, 46,
	46, 79, 79, 79, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 165, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 79, 79, 79,
	46, 46, 79, 79, 79, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 166, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 79, 79,
	79, 46, 46, 79, 79, 79, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	167, 46, 46, 46, 46, 46, 46, 79,
	79, 79, 46, 46, 79, 79, 79, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	168, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	79, 79, 79, 46, 46, 79, 79, 79,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 169, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 79, 79, 79, 46, 46, 79, 79,
	79, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 170, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 79, 79, 79, 46, 46, 79,
	79, 79, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 171, 46, 46, 46, 46, 46,
	172, 46, 46, 79, 79, 79, 46, 46,
	79, 79, 79, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 173, 46,
	46, 46, 46, 46, 79, 79, 79, 46,
	46, 79, 79, 79, 46, 46, 46, 46,
	46, 174, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 79, 79, 79,
	46, 46, 79, 79, 79, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 175, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 79, 79,
	79, 46, 46, 79, 79, 79, 46, 46,
	46, 46, 46, 176, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 79,
	79, 79, 46, 46, 79, 79, 79, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 177, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	79, 79, 79, 46, 46, 79, 79, 79,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 178, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 79, 79, 79, 46, 46, 79, 79,
	79, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 179, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 46, 79, 79, 79, 46, 46, 79,
	79, 79, 46, 46, 46, 46, 46, 46,
	46, 46, 46, 46, 46, 46, 180, 46,
	46, 46, 46, 46, 46, 46, 46, 46,
	46, 0
};

static const signed char _graphql_c_lexer_index_defaults[] = {
	1, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 14, 14, 14, 14, 14,
	14, 22, 24, 24, 0, 29, 64, 1,
	67, 68, 68, 14, 14, 14, 34, 65,
	74, 76, 76, 74, 65, 13, 79, 79,
	79, 79, 79, 79, 79, 79, 79, 79,
	79, 79, 79, 79, 79, 79, 79, 79,
	79, 79, 79, 79, 79, 79, 79, 79,
	79, 79, 79, 79, 79, 79, 79, 79,
	79, 79, 79, 79, 79, 79, 79, 79,
	79, 79, 79, 79, 79, 79, 79, 79,
	79, 79, 79, 79, 79, 79, 79, 79,
	79, 79, 79, 79, 79, 79, 79, 79,
	79, 79, 79, 79, 79, 79, 79, 79,
	79, 79, 79, 79, 79, 79, 79, 79,
	79, 79, 79, 79, 79, 79, 79, 79,
	79, 79, 79, 79, 0
};

static const short _graphql_c_lexer_cond_targs[] = {
	21, 0, 21, 1, 2, 3, 6, 4,
	5, 7, 8, 9, 10, 21, 11, 12,
	14, 13, 25, 15, 16, 27, 21, 33,
	21, 34, 18, 21, 21, 21, 22, 21,
	21, 23, 30, 21, 21, 21, 21, 31,
	36, 32, 35, 21, 21, 21, 37, 21,
	21, 38, 46, 53, 63, 81, 88, 91,
	92, 96, 105, 123, 128, 21, 21, 21,
	21, 21, 24, 21, 21, 26, 21, 28,
	29, 21, 21, 17, 21, 19, 20, 21,
	39, 40, 41, 42, 43, 44, 45, 37,
	47, 49, 48, 37, 50, 51, 52, 37,
	54, 57, 55, 56, 37, 58, 59, 60,
	61, 62, 37, 64, 72, 65, 66, 67,
	68, 69, 70, 71, 37, 73, 75, 74,
	37, 76, 77, 78, 79, 80, 37, 82,
	83, 84, 85, 86, 87, 37, 89, 90,
	37, 37, 93, 94, 95, 37, 97, 98,
	99, 100, 101, 102, 103, 104, 37, 106,
	113, 107, 110, 108, 109, 37, 111, 112,
	37, 114, 115, 116, 117, 118, 119, 120,
	121, 122, 37, 124, 126, 125, 37, 127,
	37, 129, 130, 131, 37, 0
};

static const signed char _graphql_c_lexer_cond_actions[] = {
	1, 0, 2, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 3, 0, 0,
	0, 0, 0, 0, 0, 4, 5, 6,
	7, 0, 0, 8, 0, 11, 0, 12,
	13, 6, 0, 14, 15, 16, 17, 0,
	6, 6, 6, 18, 19, 20, 21, 22,
	23, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 24, 25, 26,
	27, 28, 29, 30, 31, 0, 32, 4,
	4, 33, 34, 0, 35, 0, 0, 36,
	0, 0, 0, 0, 0, 0, 0, 37,
	0, 0, 0, 38, 0, 0, 0, 39,
	0, 0, 0, 0, 40, 0, 0, 0,
	0, 0, 41, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 42, 0, 0, 0,
	43, 0, 0, 0, 0, 0, 44, 0,
	0, 0, 0, 0, 0, 45, 0, 0,
	46, 47, 0, 0, 0, 48, 0, 0,
	0, 0, 0, 0, 0, 0, 49, 0,
	0, 0, 0, 0, 0, 50, 0, 0,
	51, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 52, 0, 0, 0, 53, 0,
	54, 0, 0, 0, 55, 0
};

static const signed char _graphql_c_lexer_to_state_actions[] = {
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 9, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0
};

static const signed char _graphql_c_lexer_from_state_actions[] = {
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 10, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0
};

static const signed char _graphql_c_lexer_eof_trans[] = {
	1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 14, 14, 14, 14, 14,
	14, 23, 25, 25, 1, 29, 65, 66,
	68, 69, 69, 69, 69, 69, 74, 66,
	75, 77, 77, 75, 66, 14, 80, 80,
	80, 80, 80, 80, 80, 80, 80, 80,
	80, 80, 80, 80, 80, 80, 80, 80,
	80, 80, 80, 80, 80, 80, 80, 80,
	80, 80, 80, 80, 80, 80, 80, 80,
	80, 80, 80, 80, 80, 80, 80, 80,
	80, 80, 80, 80, 80, 80, 80, 80,
	80, 80, 80, 80, 80, 80, 80, 80,
	80, 80, 80, 80, 80, 80, 80, 80,
	80, 80, 80, 80, 80, 80, 80, 80,
	80, 80, 80, 80, 80, 80, 80, 80,
	80, 80, 80, 80, 80, 80, 80, 80,
	80, 80, 80, 80, 0
};

static const int graphql_c_lexer_start = 21;
static const int graphql_c_lexer_first_final = 21;
static const int graphql_c_lexer_error = -1;

static const int graphql_c_lexer_en_main = 21;


#line 104 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"


#include <ruby.h>

#define INIT_STATIC_TOKEN_VARIABLE(token_name) \
static VALUE GraphQLTokenString##token_name;

INIT_STATIC_TOKEN_VARIABLE(ON)
INIT_STATIC_TOKEN_VARIABLE(FRAGMENT)
INIT_STATIC_TOKEN_VARIABLE(QUERY)
INIT_STATIC_TOKEN_VARIABLE(MUTATION)
INIT_STATIC_TOKEN_VARIABLE(SUBSCRIPTION)
INIT_STATIC_TOKEN_VARIABLE(REPEATABLE)
INIT_STATIC_TOKEN_VARIABLE(RCURLY)
INIT_STATIC_TOKEN_VARIABLE(LCURLY)
INIT_STATIC_TOKEN_VARIABLE(RBRACKET)
INIT_STATIC_TOKEN_VARIABLE(LBRACKET)
INIT_STATIC_TOKEN_VARIABLE(RPAREN)
INIT_STATIC_TOKEN_VARIABLE(LPAREN)
INIT_STATIC_TOKEN_VARIABLE(COLON)
INIT_STATIC_TOKEN_VARIABLE(VAR_SIGN)
INIT_STATIC_TOKEN_VARIABLE(DIR_SIGN)
INIT_STATIC_TOKEN_VARIABLE(ELLIPSIS)
INIT_STATIC_TOKEN_VARIABLE(EQUALS)
INIT_STATIC_TOKEN_VARIABLE(BANG)
INIT_STATIC_TOKEN_VARIABLE(PIPE)
INIT_STATIC_TOKEN_VARIABLE(AMP)
INIT_STATIC_TOKEN_VARIABLE(SCHEMA)
INIT_STATIC_TOKEN_VARIABLE(SCALAR)
INIT_STATIC_TOKEN_VARIABLE(EXTEND)
INIT_STATIC_TOKEN_VARIABLE(IMPLEMENTS)
INIT_STATIC_TOKEN_VARIABLE(INTERFACE)
INIT_STATIC_TOKEN_VARIABLE(UNION)
INIT_STATIC_TOKEN_VARIABLE(ENUM)
INIT_STATIC_TOKEN_VARIABLE(DIRECTIVE)
INIT_STATIC_TOKEN_VARIABLE(INPUT)

static VALUE GraphQL_type_str;
static VALUE GraphQL_true_str;
static VALUE GraphQL_false_str;
static VALUE GraphQL_null_str;
typedef enum TokenType {
	AMP,
	BANG,
	COLON,
	DIRECTIVE,
	DIR_SIGN,
	ENUM,
	ELLIPSIS,
	EQUALS,
	EXTEND,
	FALSE_LITERAL,
	FLOAT,
	FRAGMENT,
	IDENTIFIER,
	INPUT,
	IMPLEMENTS,
	INT,
	INTERFACE,
	LBRACKET,
	LCURLY,
	LPAREN,
	MUTATION,
	NULL_LITERAL,
	ON,
	PIPE,
	QUERY,
	RBRACKET,
	RCURLY,
	REPEATABLE,
	RPAREN,
	SCALAR,
	SCHEMA,
	STRING,
	SUBSCRIPTION,
	TRUE_LITERAL,
	TYPE_LITERAL,
	UNION,
	VAR_SIGN,
	BLOCK_STRING,
	QUOTED_STRING,
	UNKNOWN_CHAR,
	COMMENT,
	BAD_UNICODE_ESCAPE
} TokenType;

typedef struct Meta {
	int line;
	int col;
	char *query_cstr;
	char *pe;
	VALUE tokens;
	VALUE previous_token;
} Meta;

#define STATIC_VALUE_TOKEN(token_type, content_str) \
case token_type: \
token_sym = ID2SYM(rb_intern(#token_type)); \
token_content = GraphQLTokenString##token_type; \
break;

#define DYNAMIC_VALUE_TOKEN(token_type) \
case token_type: \
token_sym = ID2SYM(rb_intern(#token_type)); \
token_content = rb_utf8_str_new(ts, te - ts); \
break;

void emit(TokenType tt, char *ts, char *te, Meta *meta) {
	int quotes_length = 0; // set by string tokens below
	int line_incr = 0;
	VALUE token_sym = Qnil;
	VALUE token_content = Qnil;
	
	switch(tt) {
		STATIC_VALUE_TOKEN(ON, "on")
		STATIC_VALUE_TOKEN(FRAGMENT, "fragment")
		STATIC_VALUE_TOKEN(QUERY, "query")
		STATIC_VALUE_TOKEN(MUTATION, "mutation")
		STATIC_VALUE_TOKEN(SUBSCRIPTION, "subscription")
		STATIC_VALUE_TOKEN(REPEATABLE, "repeatable")
		STATIC_VALUE_TOKEN(RCURLY, "}")
	STATIC_VALUE_TOKEN(LCURLY, "{")
		STATIC_VALUE_TOKEN(RBRACKET, "]")
		STATIC_VALUE_TOKEN(LBRACKET, "[")
		STATIC_VALUE_TOKEN(RPAREN, ")")
		STATIC_VALUE_TOKEN(LPAREN, "(")
		STATIC_VALUE_TOKEN(COLON, ":")
		STATIC_VALUE_TOKEN(VAR_SIGN, "$")
		STATIC_VALUE_TOKEN(DIR_SIGN, "@")
		STATIC_VALUE_TOKEN(ELLIPSIS, "...")
		STATIC_VALUE_TOKEN(EQUALS, "=")
		STATIC_VALUE_TOKEN(BANG, "!")
		STATIC_VALUE_TOKEN(PIPE, "|")
		STATIC_VALUE_TOKEN(AMP, "&")
		STATIC_VALUE_TOKEN(SCHEMA, "schema")
		STATIC_VALUE_TOKEN(SCALAR, "scalar")
		STATIC_VALUE_TOKEN(EXTEND, "extend")
		STATIC_VALUE_TOKEN(IMPLEMENTS, "implements")
		STATIC_VALUE_TOKEN(INTERFACE, "interface")
		STATIC_VALUE_TOKEN(UNION, "union")
		STATIC_VALUE_TOKEN(ENUM, "enum")
		STATIC_VALUE_TOKEN(DIRECTIVE, "directive")
		STATIC_VALUE_TOKEN(INPUT, "input")
		// For these, the enum name doesn't match the symbol name:
		case TYPE_LITERAL:
		token_sym = ID2SYM(rb_intern("TYPE"));
		token_content = GraphQL_type_str;
		break;
		case TRUE_LITERAL:
		token_sym = ID2SYM(rb_intern("TRUE"));
		token_content = GraphQL_true_str;
		break;
		case FALSE_LITERAL:
		token_sym = ID2SYM(rb_intern("FALSE"));
		token_content = GraphQL_false_str;
		break;
		case NULL_LITERAL:
		token_sym = ID2SYM(rb_intern("NULL"));
		token_content = GraphQL_null_str;
		break;
		DYNAMIC_VALUE_TOKEN(IDENTIFIER)
		DYNAMIC_VALUE_TOKEN(INT)
		DYNAMIC_VALUE_TOKEN(FLOAT)
		DYNAMIC_VALUE_TOKEN(COMMENT)
		case UNKNOWN_CHAR:
		if (ts[0] == '\0') {
			return;
		} else {
			token_content = rb_utf8_str_new(ts, te - ts);
			token_sym = ID2SYM(rb_intern("UNKNOWN_CHAR"));
			break;
		}
		case QUOTED_STRING:
		quotes_length = 1;
		token_content = rb_utf8_str_new(ts + quotes_length, (te - ts - (2 * quotes_length)));
		token_sym = ID2SYM(rb_intern("STRING"));
		break;
		case BLOCK_STRING:
		token_sym = ID2SYM(rb_intern("STRING"));
		quotes_length = 3;
		token_content = rb_utf8_str_new(ts + quotes_length, (te - ts - (2 * quotes_length)));
		line_incr = FIX2INT(rb_funcall(token_content, rb_intern("count"), 1, rb_utf8_str_new_cstr("\n")));
		break;
		case STRING:
		// This is used only by the parser, this is never reached
		break;
	}
	
	if (token_sym != Qnil) {
		if (tt == BLOCK_STRING || tt == QUOTED_STRING) {
			VALUE mGraphQL = rb_const_get_at(rb_cObject, rb_intern("GraphQL"));
			VALUE mGraphQLLanguage = rb_const_get_at(mGraphQL, rb_intern("Language"));
			VALUE mGraphQLLanguageLexer = rb_const_get_at(mGraphQLLanguage, rb_intern("Lexer"));
			VALUE valid_string_pattern = rb_const_get_at(mGraphQLLanguageLexer, rb_intern("VALID_STRING"));
			if (tt == BLOCK_STRING) {
				VALUE mGraphQLLanguageBlockString = rb_const_get_at(mGraphQLLanguage, rb_intern("BlockString"));
				token_content = rb_funcall(mGraphQLLanguageBlockString, rb_intern("trim_whitespace"), 1, token_content);
			}
			
			// The parser doesn't distinguish between these,
			// Maybe updated below if it's invalid UTF-8
			tt = STRING;
			
			if (
				RB_TEST(rb_funcall(token_content, rb_intern("valid_encoding?"), 0)) &&
			RB_TEST(rb_funcall(token_content, rb_intern("match?"), 1, valid_string_pattern))
			) {
				rb_funcall(mGraphQLLanguageLexer, rb_intern("replace_escaped_characters_in_place"), 1, token_content);
				if (!RB_TEST(rb_funcall(token_content, rb_intern("valid_encoding?"), 0))) {
					token_sym = ID2SYM(rb_intern("BAD_UNICODE_ESCAPE"));
					tt = BAD_UNICODE_ESCAPE;
				}
			} else {
				token_sym = ID2SYM(rb_intern("BAD_UNICODE_ESCAPE"));
				tt = BAD_UNICODE_ESCAPE;
			}
		}
		
		VALUE token = rb_ary_new_from_args(6,
		token_sym,
		rb_int2inum(meta->line),
		rb_int2inum(meta->col),
		token_content,
		meta->previous_token,
		INT2FIX(200 + (int)tt)
		);
		
		// COMMENTs are retained as `previous_token` but aren't pushed to the normal token list
		if (tt != COMMENT) {
			rb_ary_push(meta->tokens, token);
		}
		meta->previous_token = token;
	}
	// Bump the column counter for the next token
	meta->col += te - ts;
	meta->line += line_incr;
}

VALUE tokenize(VALUE query_rbstr) {
	int cs = 0;
	int act = 0;
	char *p = StringValueCStr(query_rbstr);
	char *pe = p + strlen(p);
	char *eof = pe;
	char *ts = 0;
	char *te = 0;
	VALUE tokens = rb_ary_new();
	struct Meta meta_s = {1, 1, p, pe, tokens, Qnil};
	Meta *meta = &meta_s;
	
	
#line 938 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
	{
		cs = (int)graphql_c_lexer_start;
		ts = 0;
		te = 0;
		act = 0;
	}
	
#line 354 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
	
	
#line 949 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
	{
		unsigned int _trans = 0;
		const char * _keys;
		const short * _inds;
		int _ic;
		_resume: {}
		if ( p == pe && p != eof )
			goto _out;
		switch ( _graphql_c_lexer_from_state_actions[cs] ) {
			case 10:  {
				{
#line 1 "NONE"
					{ts = p;}}
				
#line 964 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
				
				
				break; 
			}
		}
		
		if ( p == eof ) {
			if ( _graphql_c_lexer_eof_trans[cs] > 0 ) {
				_trans = (unsigned int)_graphql_c_lexer_eof_trans[cs] - 1;
			}
		}
		else {
			_keys = ( _graphql_c_lexer_trans_keys + ((cs<<1)));
			_inds = ( _graphql_c_lexer_indices + (_graphql_c_lexer_index_offsets[cs]));
			
			if ( ( (*( p))) <= 125 && ( (*( p))) >= 9 ) {
				_ic = (int)_graphql_c_lexer_char_class[(int)( (*( p))) - 9];
				if ( _ic <= (int)(*( _keys+1)) && _ic >= (int)(*( _keys)) )
					_trans = (unsigned int)(*( _inds + (int)( _ic - (int)(*( _keys)) ) )); 
				else
					_trans = (unsigned int)_graphql_c_lexer_index_defaults[cs];
			}
			else {
				_trans = (unsigned int)_graphql_c_lexer_index_defaults[cs];
			}
			
		}
		cs = (int)_graphql_c_lexer_cond_targs[_trans];
		
		if ( _graphql_c_lexer_cond_actions[_trans] != 0 ) {
			
			switch ( _graphql_c_lexer_cond_actions[_trans] ) {
				case 6:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1002 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 26:  {
					{
#line 75 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p+1;{
#line 75 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(RCURLY, ts, te, meta); }
						}}
					
#line 1015 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 24:  {
					{
#line 76 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p+1;{
#line 76 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(LCURLY, ts, te, meta); }
						}}
					
#line 1028 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 17:  {
					{
#line 77 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p+1;{
#line 77 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(RPAREN, ts, te, meta); }
						}}
					
#line 1041 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 16:  {
					{
#line 78 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p+1;{
#line 78 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(LPAREN, ts, te, meta); }
						}}
					
#line 1054 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 23:  {
					{
#line 79 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p+1;{
#line 79 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(RBRACKET, ts, te, meta); }
						}}
					
#line 1067 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 22:  {
					{
#line 80 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p+1;{
#line 80 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(LBRACKET, ts, te, meta); }
						}}
					
#line 1080 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 18:  {
					{
#line 81 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p+1;{
#line 81 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(COLON, ts, te, meta); }
						}}
					
#line 1093 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 32:  {
					{
#line 82 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p+1;{
#line 82 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(BLOCK_STRING, ts, te, meta); }
						}}
					
#line 1106 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 2:  {
					{
#line 83 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p+1;{
#line 83 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(QUOTED_STRING, ts, te, meta); }
						}}
					
#line 1119 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 14:  {
					{
#line 84 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p+1;{
#line 84 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(VAR_SIGN, ts, te, meta); }
						}}
					
#line 1132 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 20:  {
					{
#line 85 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p+1;{
#line 85 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(DIR_SIGN, ts, te, meta); }
						}}
					
#line 1145 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 8:  {
					{
#line 86 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p+1;{
#line 86 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(ELLIPSIS, ts, te, meta); }
						}}
					
#line 1158 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 19:  {
					{
#line 87 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p+1;{
#line 87 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(EQUALS, ts, te, meta); }
						}}
					
#line 1171 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 13:  {
					{
#line 88 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p+1;{
#line 88 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(BANG, ts, te, meta); }
						}}
					
#line 1184 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 25:  {
					{
#line 89 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p+1;{
#line 89 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(PIPE, ts, te, meta); }
						}}
					
#line 1197 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 15:  {
					{
#line 90 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p+1;{
#line 90 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(AMP, ts, te, meta); }
						}}
					
#line 1210 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 12:  {
					{
#line 93 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p+1;{
#line 93 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								
								meta->line += 1;
								meta->col = 1;
							}
						}}
					
#line 1226 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 11:  {
					{
#line 100 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p+1;{
#line 100 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(UNKNOWN_CHAR, ts, te, meta); }
						}}
					
#line 1239 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 34:  {
					{
#line 54 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p;p = p - 1;{
#line 54 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(INT, ts, te, meta); }
						}}
					
#line 1252 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 35:  {
					{
#line 55 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p;p = p - 1;{
#line 55 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(FLOAT, ts, te, meta); }
						}}
					
#line 1265 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 31:  {
					{
#line 82 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p;p = p - 1;{
#line 82 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(BLOCK_STRING, ts, te, meta); }
						}}
					
#line 1278 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 30:  {
					{
#line 83 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p;p = p - 1;{
#line 83 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(QUOTED_STRING, ts, te, meta); }
						}}
					
#line 1291 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 36:  {
					{
#line 91 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p;p = p - 1;{
#line 91 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(IDENTIFIER, ts, te, meta); }
						}}
					
#line 1304 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 33:  {
					{
#line 92 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p;p = p - 1;{
#line 92 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(COMMENT, ts, te, meta); }
						}}
					
#line 1317 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 27:  {
					{
#line 98 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p;p = p - 1;{
#line 98 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								meta->col += te - ts; }
						}}
					
#line 1330 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 28:  {
					{
#line 100 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{te = p;p = p - 1;{
#line 100 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(UNKNOWN_CHAR, ts, te, meta); }
						}}
					
#line 1343 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 5:  {
					{
#line 54 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{p = ((te))-1;
							{
#line 54 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(INT, ts, te, meta); }
						}}
					
#line 1357 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 7:  {
					{
#line 55 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{p = ((te))-1;
							{
#line 55 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(FLOAT, ts, te, meta); }
						}}
					
#line 1371 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 1:  {
					{
#line 100 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{p = ((te))-1;
							{
#line 100 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
								emit(UNKNOWN_CHAR, ts, te, meta); }
						}}
					
#line 1385 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 3:  {
					{
#line 1 "NONE"
						{switch( act ) {
								case 3:  {
									p = ((te))-1;
									{
#line 56 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(ON, ts, te, meta); }
									break; 
								}
								case 4:  {
									p = ((te))-1;
									{
#line 57 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(FRAGMENT, ts, te, meta); }
									break; 
								}
								case 5:  {
									p = ((te))-1;
									{
#line 58 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(TRUE_LITERAL, ts, te, meta); }
									break; 
								}
								case 6:  {
									p = ((te))-1;
									{
#line 59 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(FALSE_LITERAL, ts, te, meta); }
									break; 
								}
								case 7:  {
									p = ((te))-1;
									{
#line 60 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(NULL_LITERAL, ts, te, meta); }
									break; 
								}
								case 8:  {
									p = ((te))-1;
									{
#line 61 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(QUERY, ts, te, meta); }
									break; 
								}
								case 9:  {
									p = ((te))-1;
									{
#line 62 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(MUTATION, ts, te, meta); }
									break; 
								}
								case 10:  {
									p = ((te))-1;
									{
#line 63 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(SUBSCRIPTION, ts, te, meta); }
									break; 
								}
								case 11:  {
									p = ((te))-1;
									{
#line 64 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(SCHEMA, ts, te, meta); }
									break; 
								}
								case 12:  {
									p = ((te))-1;
									{
#line 65 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(SCALAR, ts, te, meta); }
									break; 
								}
								case 13:  {
									p = ((te))-1;
									{
#line 66 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(TYPE_LITERAL, ts, te, meta); }
									break; 
								}
								case 14:  {
									p = ((te))-1;
									{
#line 67 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(EXTEND, ts, te, meta); }
									break; 
								}
								case 15:  {
									p = ((te))-1;
									{
#line 68 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(IMPLEMENTS, ts, te, meta); }
									break; 
								}
								case 16:  {
									p = ((te))-1;
									{
#line 69 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(INTERFACE, ts, te, meta); }
									break; 
								}
								case 17:  {
									p = ((te))-1;
									{
#line 70 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(UNION, ts, te, meta); }
									break; 
								}
								case 18:  {
									p = ((te))-1;
									{
#line 71 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(ENUM, ts, te, meta); }
									break; 
								}
								case 19:  {
									p = ((te))-1;
									{
#line 72 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(INPUT, ts, te, meta); }
									break; 
								}
								case 20:  {
									p = ((te))-1;
									{
#line 73 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(DIRECTIVE, ts, te, meta); }
									break; 
								}
								case 21:  {
									p = ((te))-1;
									{
#line 74 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(REPEATABLE, ts, te, meta); }
									break; 
								}
								case 29:  {
									p = ((te))-1;
									{
#line 82 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(BLOCK_STRING, ts, te, meta); }
									break; 
								}
								case 30:  {
									p = ((te))-1;
									{
#line 83 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(QUOTED_STRING, ts, te, meta); }
									break; 
								}
								case 38:  {
									p = ((te))-1;
									{
#line 91 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
										emit(IDENTIFIER, ts, te, meta); }
									break; 
								}
							}}
					}
					
#line 1551 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 47:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1561 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 56 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 3;}}
					
#line 1567 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 41:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1577 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 57 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 4;}}
					
#line 1583 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 53:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1593 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 58 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 5;}}
					
#line 1599 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 40:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1609 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 59 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 6;}}
					
#line 1615 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 46:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1625 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 60 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 7;}}
					
#line 1631 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 48:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1641 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 61 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 8;}}
					
#line 1647 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 45:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1657 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 62 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 9;}}
					
#line 1663 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 52:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1673 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 63 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 10;}}
					
#line 1679 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 51:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1689 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 64 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 11;}}
					
#line 1695 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 50:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1705 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 65 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 12;}}
					
#line 1711 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 54:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1721 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 66 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 13;}}
					
#line 1727 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 39:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1737 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 67 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 14;}}
					
#line 1743 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 42:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1753 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 68 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 15;}}
					
#line 1759 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 44:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1769 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 69 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 16;}}
					
#line 1775 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 55:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1785 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 70 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 17;}}
					
#line 1791 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 38:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1801 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 71 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 18;}}
					
#line 1807 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 43:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1817 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 72 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 19;}}
					
#line 1823 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 37:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1833 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 73 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 20;}}
					
#line 1839 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 49:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1849 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 74 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 21;}}
					
#line 1855 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 4:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1865 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 82 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 29;}}
					
#line 1871 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 29:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1881 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 83 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 30;}}
					
#line 1887 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
				case 21:  {
					{
#line 1 "NONE"
						{te = p+1;}}
					
#line 1897 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					{
#line 91 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
						{act = 38;}}
					
#line 1903 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
			}
			
		}
		
		if ( p == eof ) {
			if ( cs >= 21 )
				goto _out;
		}
		else {
			switch ( _graphql_c_lexer_to_state_actions[cs] ) {
				case 9:  {
					{
#line 1 "NONE"
						{ts = 0;}}
					
#line 1923 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.c"
					
					
					break; 
				}
			}
			
			p += 1;
			goto _resume;
		}
		_out: {}
	}
	
#line 355 "graphql-c_parser/ext/graphql_c_parser_ext/lexer.rl"
	
	
	return tokens;
}


#define SETUP_STATIC_TOKEN_VARIABLE(token_name, token_content) \
GraphQLTokenString##token_name = rb_utf8_str_new_cstr(token_content); \
rb_funcall(GraphQLTokenString##token_name, rb_intern("-@"), 0); \
rb_global_variable(&GraphQLTokenString##token_name); \

#define SETUP_STATIC_STRING(var_name, str_content) \
var_name = rb_utf8_str_new_cstr(str_content); \
rb_global_variable(&var_name); \
rb_str_freeze(var_name); \

void setup_static_token_variables() {
	SETUP_STATIC_TOKEN_VARIABLE(ON, "on")
	SETUP_STATIC_TOKEN_VARIABLE(FRAGMENT, "fragment")
	SETUP_STATIC_TOKEN_VARIABLE(QUERY, "query")
	SETUP_STATIC_TOKEN_VARIABLE(MUTATION, "mutation")
	SETUP_STATIC_TOKEN_VARIABLE(SUBSCRIPTION, "subscription")
	SETUP_STATIC_TOKEN_VARIABLE(REPEATABLE, "repeatable")
	SETUP_STATIC_TOKEN_VARIABLE(RCURLY, "}")
SETUP_STATIC_TOKEN_VARIABLE(LCURLY, "{")
	SETUP_STATIC_TOKEN_VARIABLE(RBRACKET, "]")
	SETUP_STATIC_TOKEN_VARIABLE(LBRACKET, "[")
	SETUP_STATIC_TOKEN_VARIABLE(RPAREN, ")")
	SETUP_STATIC_TOKEN_VARIABLE(LPAREN, "(")
	SETUP_STATIC_TOKEN_VARIABLE(COLON, ":")
	SETUP_STATIC_TOKEN_VARIABLE(VAR_SIGN, "$")
	SETUP_STATIC_TOKEN_VARIABLE(DIR_SIGN, "@")
	SETUP_STATIC_TOKEN_VARIABLE(ELLIPSIS, "...")
	SETUP_STATIC_TOKEN_VARIABLE(EQUALS, "=")
	SETUP_STATIC_TOKEN_VARIABLE(BANG, "!")
	SETUP_STATIC_TOKEN_VARIABLE(PIPE, "|")
	SETUP_STATIC_TOKEN_VARIABLE(AMP, "&")
	SETUP_STATIC_TOKEN_VARIABLE(SCHEMA, "schema")
	SETUP_STATIC_TOKEN_VARIABLE(SCALAR, "scalar")
	SETUP_STATIC_TOKEN_VARIABLE(EXTEND, "extend")
	SETUP_STATIC_TOKEN_VARIABLE(IMPLEMENTS, "implements")
	SETUP_STATIC_TOKEN_VARIABLE(INTERFACE, "interface")
	SETUP_STATIC_TOKEN_VARIABLE(UNION, "union")
	SETUP_STATIC_TOKEN_VARIABLE(ENUM, "enum")
	SETUP_STATIC_TOKEN_VARIABLE(DIRECTIVE, "directive")
	SETUP_STATIC_TOKEN_VARIABLE(INPUT, "input")
	
	SETUP_STATIC_STRING(GraphQL_type_str, "type")
	SETUP_STATIC_STRING(GraphQL_true_str, "true")
	SETUP_STATIC_STRING(GraphQL_false_str, "false")
	SETUP_STATIC_STRING(GraphQL_null_str, "null")
}
