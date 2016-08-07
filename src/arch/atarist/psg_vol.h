/*****************************************************************************
 * pce                                                                       *
 *****************************************************************************/

/*****************************************************************************
 * File name:   src/arch/atarist/psg_vol.h                                   *
 * Created:     2015-05-20 by Hampa Hug <hampa@hampa.ch>                     *
 * Copyright:   (C) 2015 Hampa Hug <hampa@hampa.ch>                          *
 *****************************************************************************/

/*****************************************************************************
 * This program is free software. You can redistribute it and / or modify it *
 * under the terms of the GNU General Public License version 2 as  published *
 * by the Free Software Foundation.                                          *
 *                                                                           *
 * This program is distributed in the hope  that  it  will  be  useful,  but *
 * WITHOUT  ANY   WARRANTY,   without   even   the   implied   warranty   of *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU  General *
 * Public License for more details.                                          *
 *****************************************************************************/

/*
 * Sixteen level by Three voice YM2149 voltab16[C][B][A]
 * Data measured by Paulo Simoes. Copyright 2012 Paulo Simoes.
 */
static uint16_t voltab16[16][16][16] = {
	{
		{     0,   120,   251,   385,   598,   840,  1258,  1725,  2536,  3483,  5151,  7054, 10367, 14634, 22931, 34469 },
		{   120,   283,   419,   556,   771,  1009,  1433,  1894,  2702,  3645,  5310,  7207, 10508, 14757, 23015, 34480 },
		{   251,   419,   553,   692,   903,  1147,  1565,  2026,  2833,  3775,  5439,  7325, 10619, 14857, 23082, 34493 },
		{   385,   556,   692,   828,  1038,  1286,  1704,  2164,  2967,  3906,  5564,  7450, 10733, 14958, 23156, 34509 },
		{   598,   771,   903,  1038,  1261,  1502,  1925,  2382,  3176,  4113,  5764,  7649, 10915, 15123, 23272, 34538 },
		{   840,  1009,  1147,  1286,  1502,  1747,  2167,  2626,  3417,  4348,  5985,  7851, 11109, 15302, 23400, 34570 },
		{  1258,  1433,  1565,  1704,  1925,  2167,  2572,  3019,  3812,  4743,  6367,  8205, 11457, 15616, 23639, 34646 },
		{  1725,  1894,  2026,  2164,  2382,  2626,  3019,  3487,  4266,  5173,  6792,  8517, 11852, 15979, 23925, 34754 },
		{  2536,  2702,  2833,  2967,  3176,  3417,  3812,  4266,  5048,  5947,  7542,  9227, 12543, 16613, 24440, 34992 },
		{  3483,  3645,  3775,  3906,  4113,  4348,  4743,  5173,  5947,  6847,  8353, 10089, 13357, 17288, 25084, 35355 },
		{  5151,  5310,  5439,  5564,  5764,  5985,  6367,  6792,  7542,  8353,  9780, 11549, 14769, 18591, 26237, 36119 },
		{  7054,  7207,  7325,  7450,  7649,  7851,  8205,  8517,  9227, 10089, 11549, 13292, 16452, 20206, 27628, 37143 },
		{ 10367, 10508, 10619, 10733, 10915, 11109, 11457, 11852, 12543, 13357, 14769, 16452, 19431, 23228, 30481, 39499 },
		{ 14634, 14757, 14857, 14958, 15123, 15302, 15616, 15979, 16613, 17288, 18591, 20206, 23228, 26871, 34097, 42635 },
		{ 22931, 23015, 23082, 23156, 23272, 23400, 23639, 23925, 24440, 25084, 26237, 27628, 30481, 34097, 40524, 48336 },
		{ 34469, 34480, 34493, 34509, 34538, 34570, 34646, 34754, 34992, 35355, 36119, 37143, 39499, 42635, 48336, 55377 }
	}, {
		{   120,   283,   419,   556,   771,  1009,  1433,  1894,  2702,  3645,  5310,  7207, 10508, 14757, 23015, 34480 },
		{   283,   453,   589,   723,   941,  1179,  1601,  2059,  2864,  3811,  5472,  7358, 10646, 14884, 23101, 34500 },
		{   419,   589,   727,   863,  1077,  1316,  1737,  2194,  2998,  3938,  5599,  7478, 10755, 14980, 23168, 34509 },
		{   556,   723,   863,   997,  1212,  1453,  1874,  2331,  3130,  4067,  5726,  7602, 10872, 15084, 23243, 34526 },
		{   771,   941,  1077,  1212,  1427,  1674,  2089,  2551,  3345,  4273,  5916,  7792, 11056, 15245, 23354, 34556 },
		{  1009,  1179,  1316,  1453,  1674,  1915,  2333,  2788,  3579,  4509,  6142,  7993, 11249, 15426, 23486, 34585 },
		{  1433,  1601,  1737,  1874,  2089,  2333,  2735,  3188,  3976,  4898,  6516,  8315, 11594, 15735, 23718, 34662 },
		{  1894,  2059,  2194,  2331,  2551,  2788,  3188,  3649,  4423,  5330,  6948,  8656, 11984, 16094, 24004, 34771 },
		{  2702,  2864,  2998,  3130,  3345,  3579,  3976,  4423,  5202,  6104,  7684,  9368, 12668, 16724, 24512, 35007 },
		{  3645,  3811,  3938,  4067,  4273,  4509,  4898,  5330,  6104,  6999,  8449, 10221, 13483, 17379, 25149, 35366 },
		{  5310,  5472,  5599,  5726,  5916,  6142,  6516,  6948,  7684,  8449,  9917, 11680, 14885, 18689, 26297, 36126 },
		{  7207,  7358,  7478,  7602,  7792,  7993,  8315,  8656,  9368, 10221, 11680, 13417, 16558, 20295, 27677, 37144 },
		{ 10508, 10646, 10755, 10872, 11056, 11249, 11594, 11984, 12668, 13483, 14885, 16558, 19523, 23300, 30508, 39500 },
		{ 14757, 14884, 14980, 15084, 15245, 15426, 15735, 16094, 16724, 17379, 18689, 20295, 23300, 26918, 34108, 42636 },
		{ 23015, 23101, 23168, 23243, 23354, 23486, 23718, 24004, 24512, 25149, 26297, 27677, 30508, 34108, 40527, 48337 },
		{ 34480, 34500, 34509, 34526, 34556, 34585, 34662, 34771, 35007, 35366, 36126, 37144, 39500, 42636, 48337, 55377 }
	}, {
		{   251,   419,   553,   692,   903,  1147,  1565,  2026,  2833,  3775,  5439,  7325, 10619, 14857, 23082, 34493 },
		{   419,   589,   727,   863,  1077,  1316,  1737,  2194,  2998,  3938,  5599,  7478, 10755, 14980, 23168, 34509 },
		{   553,   727,   863,   999,  1213,  1454,  1873,  2329,  3129,  4071,  5727,  7600, 10871, 15085, 23243, 34524 },
		{   692,   863,   999,  1135,  1351,  1592,  2011,  2466,  3264,  4199,  5849,  7724, 10990, 15187, 23315, 34541 },
		{   903,  1077,  1213,  1351,  1567,  1811,  2230,  2689,  3476,  4402,  6041,  7910, 11165, 15342, 23425, 34568 },
		{  1147,  1316,  1454,  1592,  1811,  2054,  2469,  2924,  3716,  4640,  6265,  8109, 11365, 15526, 23554, 34601 },
		{  1565,  1737,  1873,  2011,  2230,  2469,  2873,  3323,  4105,  5023,  6639,  8395, 11700, 15831, 23786, 34675 },
		{  2026,  2194,  2329,  2466,  2689,  2924,  3323,  3777,  4553,  5456,  7069,  8770, 12097, 16188, 24070, 34781 },
		{  2833,  2998,  3129,  3264,  3476,  3716,  4105,  4553,  5330,  6231,  7804,  9480, 12776, 16820, 24574, 35020 },
		{  3775,  3938,  4071,  4199,  4402,  4640,  5023,  5456,  6231,  7115,  8554, 10329, 13586, 17460, 25207, 35381 },
		{  5439,  5599,  5727,  5849,  6041,  6265,  6639,  7069,  7804,  8554, 10029, 11784, 14980, 18770, 26344, 36134 },
		{  7325,  7478,  7600,  7724,  7910,  8109,  8395,  8770,  9480, 10329, 11784, 13519, 16643, 20370, 27719, 37151 },
		{ 10619, 10755, 10871, 10990, 11165, 11365, 11700, 12097, 12776, 13586, 14980, 16643, 19601, 23359, 30533, 39501 },
		{ 14857, 14980, 15085, 15187, 15342, 15526, 15831, 16188, 16820, 17460, 18770, 20370, 23359, 26957, 34125, 42637 },
		{ 23082, 23168, 23243, 23315, 23425, 23554, 23786, 24070, 24574, 25207, 26344, 27719, 30533, 34125, 40529, 48338 },
		{ 34493, 34509, 34524, 34541, 34568, 34601, 34675, 34781, 35020, 35381, 36134, 37151, 39501, 42637, 48338, 55378 }
	}, {
		{   385,   556,   692,   828,  1038,  1286,  1704,  2164,  2967,  3906,  5564,  7450, 10733, 14958, 23156, 34509 },
		{   556,   723,   863,   997,  1212,  1453,  1874,  2331,  3130,  4067,  5726,  7602, 10872, 15084, 23243, 34526 },
		{   692,   863,   999,  1135,  1351,  1592,  2011,  2466,  3264,  4199,  5849,  7724, 10990, 15187, 23315, 34541 },
		{   828,   997,  1135,  1276,  1482,  1731,  2146,  2605,  3397,  4324,  5970,  7841, 11105, 15285, 23389, 34561 },
		{  1038,  1212,  1351,  1482,  1703,  1945,  2363,  2819,  3606,  4535,  6167,  8026, 11271, 15445, 23493, 34587 },
		{  1286,  1453,  1592,  1731,  1945,  2185,  2605,  3053,  3844,  4769,  6395,  8222, 11476, 15625, 23625, 34620 },
		{  1704,  1874,  2011,  2146,  2363,  2605,  3004,  3452,  4232,  5154,  6762,  8488, 11803, 15932, 23851, 34692 },
		{  2164,  2331,  2466,  2605,  2819,  3053,  3452,  3909,  4682,  5580,  7190,  8888, 12204, 16280, 24134, 34798 },
		{  2967,  3130,  3264,  3397,  3606,  3844,  4232,  4682,  5456,  6350,  7915,  9593, 12882, 16907, 24637, 35034 },
		{  3906,  4067,  4199,  4324,  4535,  4769,  5154,  5580,  6350,  7235,  8667, 10439, 13680, 17548, 25267, 35392 },
		{  5564,  5726,  5849,  5970,  6167,  6395,  6762,  7190,  7915,  8667, 10135, 11887, 15073, 18851, 26391, 36142 },
		{  7450,  7602,  7724,  7841,  8026,  8222,  8488,  8888,  9593, 10439, 11887, 13620, 16729, 20446, 27762, 37157 },
		{ 10733, 10872, 10990, 11105, 11271, 11476, 11803, 12204, 12882, 13680, 15073, 16729, 19676, 23419, 30559, 39503 },
		{ 14958, 15084, 15187, 15285, 15445, 15625, 15932, 16280, 16907, 17548, 18851, 20446, 23419, 26998, 34139, 42639 },
		{ 23156, 23243, 23315, 23389, 23493, 23625, 23851, 24134, 24637, 25267, 26391, 27762, 30559, 34139, 40534, 48339 },
		{ 34509, 34526, 34541, 34561, 34587, 34620, 34692, 34798, 35034, 35392, 36142, 37157, 39503, 42639, 48339, 55378 }
	}, {
		{   598,   771,   903,  1038,  1261,  1502,  1925,  2382,  3176,  4113,  5764,  7649, 10915, 15123, 23272, 34538 },
		{   771,   941,  1077,  1212,  1427,  1674,  2089,  2551,  3345,  4273,  5916,  7792, 11056, 15245, 23354, 34556 },
		{   903,  1077,  1213,  1351,  1567,  1811,  2230,  2689,  3476,  4402,  6041,  7910, 11165, 15342, 23425, 34568 },
		{  1038,  1212,  1351,  1482,  1703,  1945,  2363,  2819,  3606,  4535,  6167,  8026, 11271, 15445, 23493, 34587 },
		{  1261,  1427,  1567,  1703,  1916,  2162,  2575,  3032,  3817,  4738,  6364,  8201, 11449, 15605, 23608, 34613 },
		{  1502,  1674,  1811,  1945,  2162,  2399,  2817,  3263,  4051,  4974,  6588,  8362, 11657, 15784, 23741, 34649 },
		{  1925,  2089,  2230,  2363,  2575,  2817,  3212,  3664,  4440,  5348,  6954,  8660, 11979, 16087, 23965, 34720 },
		{  2382,  2551,  2689,  2819,  3032,  3263,  3664,  4111,  4880,  5781,  7385,  9072, 12371, 16431, 24240, 34823 },
		{  3176,  3345,  3476,  3606,  3817,  4051,  4440,  4880,  5653,  6548,  8104,  9776, 13045, 17045, 24740, 35060 },
		{  4113,  4273,  4402,  4535,  4738,  4974,  5348,  5781,  6548,  7426,  8845, 10614, 13842, 17683, 25362, 35414 },
		{  5764,  5916,  6041,  6167,  6364,  6588,  6954,  7385,  8104,  8845, 10314, 12061, 15219, 18983, 26463, 36154 },
		{  7649,  7792,  7910,  8026,  8201,  8362,  8660,  9072,  9776, 10614, 12061, 13783, 16862, 20567, 27833, 37166 },
		{ 10915, 11056, 11165, 11271, 11449, 11657, 11979, 12371, 13045, 13842, 15219, 16862, 19799, 23517, 30606, 39513 },
		{ 15123, 15245, 15342, 15445, 15605, 15784, 16087, 16431, 17045, 17683, 18983, 20567, 23517, 27066, 34164, 42641 },
		{ 23272, 23354, 23425, 23493, 23608, 23741, 23965, 24240, 24740, 25362, 26463, 27833, 30606, 34164, 40537, 48340 },
		{ 34538, 34556, 34568, 34587, 34613, 34649, 34720, 34823, 35060, 35414, 36154, 37166, 39513, 42641, 48340, 55379 }
	}, {
		{   840,  1009,  1147,  1286,  1502,  1747,  2167,  2626,  3417,  4348,  5985,  7851, 11109, 15302, 23400, 34570 },
		{  1009,  1179,  1316,  1453,  1674,  1915,  2333,  2788,  3579,  4509,  6142,  7993, 11249, 15426, 23486, 34585 },
		{  1147,  1316,  1454,  1592,  1811,  2054,  2469,  2924,  3716,  4640,  6265,  8109, 11365, 15526, 23554, 34601 },
		{  1286,  1453,  1592,  1731,  1945,  2185,  2605,  3053,  3844,  4769,  6395,  8222, 11476, 15625, 23625, 34620 },
		{  1502,  1674,  1811,  1945,  2162,  2399,  2817,  3263,  4051,  4974,  6588,  8362, 11657, 15784, 23741, 34649 },
		{  1747,  1915,  2054,  2185,  2399,  2640,  3054,  3501,  4282,  5198,  6806,  8530, 11855, 15961, 23871, 34688 },
		{  2167,  2333,  2469,  2605,  2817,  3054,  3449,  3898,  4667,  5571,  7172,  8864, 12172, 16261, 24094, 34758 },
		{  2626,  2788,  2924,  3053,  3263,  3501,  3898,  4342,  5110,  6002,  7594,  9274, 12564, 16600, 24361, 34858 },
		{  3417,  3579,  3716,  3844,  4051,  4282,  4667,  5110,  5878,  6764,  8289,  9978, 13233, 17183, 24857, 35090 },
		{  4348,  4509,  4640,  4769,  4974,  5198,  5571,  6002,  6764,  7634,  9046, 10809, 14023, 17843, 25474, 35441 },
		{  5985,  6142,  6265,  6395,  6588,  6806,  7172,  7594,  8289,  9046, 10510, 12249, 15389, 19129, 26571, 36174 },
		{  7851,  7993,  8109,  8222,  8362,  8530,  8864,  9274,  9978, 10809, 12249, 13962, 17018, 20703, 27915, 37183 },
		{ 11109, 11249, 11365, 11476, 11657, 11855, 12172, 12564, 13233, 14023, 15389, 17018, 19935, 23632, 30665, 39517 },
		{ 15302, 15426, 15526, 15625, 15784, 15961, 16261, 16600, 17183, 17843, 19129, 20703, 23632, 27149, 34193, 42643 },
		{ 23400, 23486, 23554, 23625, 23741, 23871, 24094, 24361, 24857, 25474, 26571, 27915, 30665, 34193, 40540, 48341 },
		{ 34570, 34585, 34601, 34620, 34649, 34688, 34758, 34858, 35090, 35441, 36174, 37183, 39517, 42643, 48341, 55379 }
	}, {
		{  1258,  1433,  1565,  1704,  1925,  2167,  2572,  3019,  3812,  4743,  6367,  8205, 11457, 15616, 23639, 34646 },
		{  1433,  1601,  1737,  1874,  2089,  2333,  2735,  3188,  3976,  4898,  6516,  8315, 11594, 15735, 23718, 34662 },
		{  1565,  1737,  1873,  2011,  2230,  2469,  2873,  3323,  4105,  5023,  6639,  8395, 11700, 15831, 23786, 34675 },
		{  1704,  1874,  2011,  2146,  2363,  2605,  3004,  3452,  4232,  5154,  6762,  8488, 11803, 15932, 23851, 34692 },
		{  1925,  2089,  2230,  2363,  2575,  2817,  3212,  3664,  4440,  5348,  6954,  8660, 11979, 16087, 23965, 34720 },
		{  2167,  2333,  2469,  2605,  2817,  3054,  3449,  3898,  4667,  5571,  7172,  8864, 12172, 16261, 24094, 34758 },
		{  2572,  2735,  2873,  3004,  3212,  3449,  3854,  4302,  5067,  5961,  7550,  9224, 12519, 16573, 24328, 34836 },
		{  3019,  3188,  3323,  3452,  3664,  3898,  4302,  4742,  5503,  6387,  7962,  9634, 12895, 16899, 24587, 34932 },
		{  3812,  3976,  4105,  4232,  4440,  4667,  5067,  5503,  6267,  7143,  8571, 10335, 13563, 17414, 25071, 35162 },
		{  4743,  4898,  5023,  5154,  5348,  5571,  5961,  6387,  7143,  8004,  9406, 11158, 14338, 18124, 25673, 35504 },
		{  6367,  6516,  6639,  6762,  6954,  7172,  7550,  7962,  8571,  9406, 10856, 12580, 15691, 19396, 26692, 36217 },
		{  8205,  8315,  8395,  8488,  8660,  8864,  9224,  9634, 10335, 11158, 12580, 14275, 17244, 20952, 28071, 37216 },
		{ 11457, 11594, 11700, 11803, 11979, 12172, 12519, 12895, 13563, 14338, 15691, 17244, 20186, 23839, 30781, 39535 },
		{ 15616, 15735, 15831, 15932, 16087, 16261, 16573, 16899, 17414, 18124, 19396, 20952, 23839, 27307, 34258, 42647 },
		{ 23639, 23718, 23786, 23851, 23965, 24094, 24328, 24587, 25071, 25673, 26692, 28071, 30781, 34258, 40553, 48342 },
		{ 34646, 34662, 34675, 34692, 34720, 34758, 34836, 34932, 35162, 35504, 36217, 37216, 39535, 42647, 48342, 55380 }
	}, {
		{  1725,  1894,  2026,  2164,  2382,  2626,  3019,  3487,  4266,  5173,  6792,  8517, 11852, 15979, 23925, 34754 },
		{  1894,  2059,  2194,  2331,  2551,  2788,  3188,  3649,  4423,  5330,  6948,  8656, 11984, 16094, 24004, 34771 },
		{  2026,  2194,  2329,  2466,  2689,  2924,  3323,  3777,  4553,  5456,  7069,  8770, 12097, 16188, 24070, 34781 },
		{  2164,  2331,  2466,  2605,  2819,  3053,  3452,  3909,  4682,  5580,  7190,  8888, 12204, 16280, 24134, 34798 },
		{  2382,  2551,  2689,  2819,  3032,  3263,  3664,  4111,  4880,  5781,  7385,  9072, 12371, 16431, 24240, 34823 },
		{  2626,  2788,  2924,  3053,  3263,  3501,  3898,  4342,  5110,  6002,  7594,  9274, 12564, 16600, 24361, 34858 },
		{  3019,  3188,  3323,  3452,  3664,  3898,  4302,  4742,  5503,  6387,  7962,  9634, 12895, 16899, 24587, 34932 },
		{  3487,  3649,  3777,  3909,  4111,  4342,  4742,  5177,  5934,  6818,  8332, 10028, 13268, 17198, 24845, 35038 },
		{  4266,  4423,  4553,  4682,  4880,  5110,  5503,  5934,  6687,  7559,  8964, 10727, 13927, 17732, 25320, 35258 },
		{  5173,  5330,  5456,  5580,  5781,  6002,  6387,  6818,  7559,  8353,  9797, 11537, 14695, 18443, 25905, 35591 },
		{  6792,  6948,  7069,  7190,  7385,  7594,  7962,  8332,  8964,  9797, 11242, 12949, 16028, 19695, 26891, 36270 },
		{  8517,  8656,  8770,  8888,  9072,  9274,  9634, 10028, 10727, 11537, 12949, 14625, 17520, 21231, 28260, 37278 },
		{ 11852, 11984, 12097, 12204, 12371, 12564, 12895, 13268, 13927, 14695, 16028, 17520, 20469, 24080, 30926, 39567 },
		{ 15979, 16094, 16188, 16280, 16431, 16600, 16899, 17198, 17732, 18443, 19695, 21231, 24080, 27498, 34345, 42662 },
		{ 23925, 24004, 24070, 24134, 24240, 24361, 24587, 24845, 25320, 25905, 26891, 28260, 30926, 34345, 40575, 48344 },
		{ 34754, 34771, 34781, 34798, 34823, 34858, 34932, 35038, 35258, 35591, 36270, 37278, 39567, 42662, 48344, 55381 }
	}, {
		{  2536,  2702,  2833,  2967,  3176,  3417,  3812,  4266,  5048,  5947,  7542,  9227, 12543, 16613, 24440, 34992 },
		{  2702,  2864,  2998,  3130,  3345,  3579,  3976,  4423,  5202,  6104,  7684,  9368, 12668, 16724, 24512, 35007 },
		{  2833,  2998,  3129,  3264,  3476,  3716,  4105,  4553,  5330,  6231,  7804,  9480, 12776, 16820, 24574, 35020 },
		{  2967,  3130,  3264,  3397,  3606,  3844,  4232,  4682,  5456,  6350,  7915,  9593, 12882, 16907, 24637, 35034 },
		{  3176,  3345,  3476,  3606,  3817,  4051,  4440,  4880,  5653,  6548,  8104,  9776, 13045, 17045, 24740, 35060 },
		{  3417,  3579,  3716,  3844,  4051,  4282,  4667,  5110,  5878,  6764,  8289,  9978, 13233, 17183, 24857, 35090 },
		{  3812,  3976,  4105,  4232,  4440,  4667,  5067,  5503,  6267,  7143,  8571, 10335, 13563, 17414, 25071, 35162 },
		{  4266,  4423,  4553,  4682,  4880,  5110,  5503,  5934,  6687,  7559,  8964, 10727, 13927, 17732, 25320, 35258 },
		{  5048,  5202,  5330,  5456,  5653,  5878,  6267,  6687,  7432,  8260,  9665, 11412, 14575, 18313, 25781, 35482 },
		{  5947,  6104,  6231,  6350,  6548,  6764,  7143,  7559,  8260,  8997, 10490, 12209, 15324, 19011, 26331, 35795 },
		{  7542,  7684,  7804,  7915,  8104,  8289,  8571,  8964,  9665, 10490, 11913, 13590, 16629, 20233, 27289, 36423 },
		{  9227,  9368,  9480,  9593,  9776,  9978, 10335, 10727, 11412, 12209, 13590, 15237, 18080, 21736, 28624, 37418 },
		{ 12543, 12668, 12776, 12882, 13045, 13233, 13563, 13927, 14575, 15324, 16629, 18080, 20977, 24523, 31218, 39649 },
		{ 16613, 16724, 16820, 16907, 17045, 17183, 17414, 17732, 18313, 19011, 20233, 21736, 24523, 27863, 34544, 42695 },
		{ 24440, 24512, 24574, 24637, 24740, 24857, 25071, 25320, 25781, 26331, 27289, 28624, 31218, 34544, 40634, 48348 },
		{ 34992, 35007, 35020, 35034, 35060, 35090, 35162, 35258, 35482, 35795, 36423, 37418, 39649, 42695, 48348, 55382 }
	}, {
		{  3483,  3645,  3775,  3906,  4113,  4348,  4743,  5173,  5947,  6847,  8353, 10089, 13357, 17288, 25084, 35355 },
		{  3645,  3811,  3938,  4067,  4273,  4509,  4898,  5330,  6104,  6999,  8449, 10221, 13483, 17379, 25149, 35366 },
		{  3775,  3938,  4071,  4199,  4402,  4640,  5023,  5456,  6231,  7115,  8554, 10329, 13586, 17460, 25207, 35381 },
		{  3906,  4067,  4199,  4324,  4535,  4769,  5154,  5580,  6350,  7235,  8667, 10439, 13680, 17548, 25267, 35392 },
		{  4113,  4273,  4402,  4535,  4738,  4974,  5348,  5781,  6548,  7426,  8845, 10614, 13842, 17683, 25362, 35414 },
		{  4348,  4509,  4640,  4769,  4974,  5198,  5571,  6002,  6764,  7634,  9046, 10809, 14023, 17843, 25474, 35441 },
		{  4743,  4898,  5023,  5154,  5348,  5571,  5961,  6387,  7143,  8004,  9406, 11158, 14338, 18124, 25673, 35504 },
		{  5173,  5330,  5456,  5580,  5781,  6002,  6387,  6818,  7559,  8353,  9797, 11537, 14695, 18443, 25905, 35591 },
		{  5947,  6104,  6231,  6350,  6548,  6764,  7143,  7559,  8260,  8997, 10490, 12209, 15324, 19011, 26331, 35795 },
		{  6847,  6999,  7115,  7235,  7426,  7634,  8004,  8353,  8997,  9829, 11306, 12998, 16067, 19696, 26808, 36099 },
		{  8353,  8449,  8554,  8667,  8845,  9046,  9406,  9797, 10490, 11306, 12706, 14348, 17258, 20884, 27805, 36672 },
		{ 10089, 10221, 10329, 10439, 10614, 10809, 11158, 11537, 12209, 12998, 14348, 15967, 18756, 22352, 29098, 37647 },
		{ 13357, 13483, 13586, 13680, 13842, 14023, 14338, 14695, 15324, 16067, 17258, 18756, 21599, 25072, 31613, 39810 },
		{ 17288, 17379, 17460, 17548, 17683, 17843, 18124, 18443, 19011, 19696, 20884, 22352, 25072, 28332, 34841, 42772 },
		{ 25084, 25149, 25207, 25267, 25362, 25474, 25673, 25905, 26331, 26808, 27805, 29098, 31613, 34841, 40758, 48353 },
		{ 35355, 35366, 35381, 35392, 35414, 35441, 35504, 35591, 35795, 36099, 36672, 37647, 39810, 42772, 48353, 55383 }
	}, {
		{  5151,  5310,  5439,  5564,  5764,  5985,  6367,  6792,  7542,  8353,  9780, 11549, 14769, 18591, 26237, 36119 },
		{  5310,  5472,  5599,  5726,  5916,  6142,  6516,  6948,  7684,  8449,  9917, 11680, 14885, 18689, 26297, 36126 },
		{  5439,  5599,  5727,  5849,  6041,  6265,  6639,  7069,  7804,  8554, 10029, 11784, 14980, 18770, 26344, 36134 },
		{  5564,  5726,  5849,  5970,  6167,  6395,  6762,  7190,  7915,  8667, 10135, 11887, 15073, 18851, 26391, 36142 },
		{  5764,  5916,  6041,  6167,  6364,  6588,  6954,  7385,  8104,  8845, 10314, 12061, 15219, 18983, 26463, 36154 },
		{  5985,  6142,  6265,  6395,  6588,  6806,  7172,  7594,  8289,  9046, 10510, 12249, 15389, 19129, 26571, 36174 },
		{  6367,  6516,  6639,  6762,  6954,  7172,  7550,  7962,  8571,  9406, 10856, 12580, 15691, 19396, 26692, 36217 },
		{  6792,  6948,  7069,  7190,  7385,  7594,  7962,  8332,  8964,  9797, 11242, 12949, 16028, 19695, 26891, 36270 },
		{  7542,  7684,  7804,  7915,  8104,  8289,  8571,  8964,  9665, 10490, 11913, 13590, 16629, 20233, 27289, 36423 },
		{  8353,  8449,  8554,  8667,  8845,  9046,  9406,  9797, 10490, 11306, 12706, 14348, 17258, 20884, 27805, 36672 },
		{  9780,  9917, 10029, 10135, 10314, 10510, 10856, 11242, 11913, 12706, 14111, 15703, 18497, 22076, 28804, 37321 },
		{ 11549, 11680, 11784, 11887, 12061, 12249, 12580, 12949, 13590, 14348, 15703, 17212, 19984, 23485, 30030, 38230 },
		{ 14769, 14885, 14980, 15073, 15219, 15389, 15691, 16028, 16629, 17258, 18497, 19984, 22737, 26094, 32422, 40256 },
		{ 18591, 18689, 18770, 18851, 18983, 19129, 19396, 19695, 20233, 20884, 22076, 23485, 26094, 29241, 35499, 43067 },
		{ 26237, 26297, 26344, 26391, 26463, 26571, 26692, 26891, 27289, 27805, 28804, 30030, 32422, 35499, 41131, 48449 },
		{ 36119, 36126, 36134, 36142, 36154, 36174, 36217, 36270, 36423, 36672, 37321, 38230, 40256, 43067, 48449, 55385 }
	}, {
		{  7054,  7207,  7325,  7450,  7649,  7851,  8205,  8517,  9227, 10089, 11549, 13292, 16452, 20206, 27628, 37143 },
		{  7207,  7358,  7478,  7602,  7792,  7993,  8315,  8656,  9368, 10221, 11680, 13417, 16558, 20295, 27677, 37144 },
		{  7325,  7478,  7600,  7724,  7910,  8109,  8395,  8770,  9480, 10329, 11784, 13519, 16643, 20370, 27719, 37151 },
		{  7450,  7602,  7724,  7841,  8026,  8222,  8488,  8888,  9593, 10439, 11887, 13620, 16729, 20446, 27762, 37157 },
		{  7649,  7792,  7910,  8026,  8201,  8362,  8660,  9072,  9776, 10614, 12061, 13783, 16862, 20567, 27833, 37166 },
		{  7851,  7993,  8109,  8222,  8362,  8530,  8864,  9274,  9978, 10809, 12249, 13962, 17018, 20703, 27915, 37183 },
		{  8205,  8315,  8395,  8488,  8660,  8864,  9224,  9634, 10335, 11158, 12580, 14275, 17244, 20952, 28071, 37216 },
		{  8517,  8656,  8770,  8888,  9072,  9274,  9634, 10028, 10727, 11537, 12949, 14625, 17520, 21231, 28260, 37278 },
		{  9227,  9368,  9480,  9593,  9776,  9978, 10335, 10727, 11412, 12209, 13590, 15237, 18080, 21736, 28624, 37418 },
		{ 10089, 10221, 10329, 10439, 10614, 10809, 11158, 11537, 12209, 12998, 14348, 15967, 18756, 22352, 29098, 37647 },
		{ 11549, 11680, 11784, 11887, 12061, 12249, 12580, 12949, 13590, 14348, 15703, 17212, 19984, 23485, 30030, 38230 },
		{ 13292, 13417, 13519, 13620, 13783, 13962, 14275, 14625, 15237, 15967, 17212, 18672, 21436, 24840, 31211, 39115 },
		{ 16452, 16558, 16643, 16729, 16862, 17018, 17244, 17520, 18080, 18756, 19984, 21436, 24097, 27224, 33479, 40993 },
		{ 20206, 20295, 20370, 20446, 20567, 20703, 20952, 21231, 21736, 22352, 23485, 24840, 27224, 30386, 36330, 43638 },
		{ 27628, 27677, 27719, 27762, 27833, 27915, 28071, 28260, 28624, 29098, 30030, 31211, 33479, 36330, 41775, 48724 },
		{ 37143, 37144, 37151, 37157, 37166, 37183, 37216, 37278, 37418, 37647, 38230, 39115, 40993, 43638, 48724, 55407 }
	}, {
		{ 10367, 10508, 10619, 10733, 10915, 11109, 11457, 11852, 12543, 13357, 14769, 16452, 19431, 23228, 30481, 39499 },
		{ 10508, 10646, 10755, 10872, 11056, 11249, 11594, 11984, 12668, 13483, 14885, 16558, 19523, 23300, 30508, 39500 },
		{ 10619, 10755, 10871, 10990, 11165, 11365, 11700, 12097, 12776, 13586, 14980, 16643, 19601, 23359, 30533, 39501 },
		{ 10733, 10872, 10990, 11105, 11271, 11476, 11803, 12204, 12882, 13680, 15073, 16729, 19676, 23419, 30559, 39503 },
		{ 10915, 11056, 11165, 11271, 11449, 11657, 11979, 12371, 13045, 13842, 15219, 16862, 19799, 23517, 30606, 39513 },
		{ 11109, 11249, 11365, 11476, 11657, 11855, 12172, 12564, 13233, 14023, 15389, 17018, 19935, 23632, 30665, 39517 },
		{ 11457, 11594, 11700, 11803, 11979, 12172, 12519, 12895, 13563, 14338, 15691, 17244, 20186, 23839, 30781, 39535 },
		{ 11852, 11984, 12097, 12204, 12371, 12564, 12895, 13268, 13927, 14695, 16028, 17520, 20469, 24080, 30926, 39567 },
		{ 12543, 12668, 12776, 12882, 13045, 13233, 13563, 13927, 14575, 15324, 16629, 18080, 20977, 24523, 31218, 39649 },
		{ 13357, 13483, 13586, 13680, 13842, 14023, 14338, 14695, 15324, 16067, 17258, 18756, 21599, 25072, 31613, 39810 },
		{ 14769, 14885, 14980, 15073, 15219, 15389, 15691, 16028, 16629, 17258, 18497, 19984, 22737, 26094, 32422, 40256 },
		{ 16452, 16558, 16643, 16729, 16862, 17018, 17244, 17520, 18080, 18756, 19984, 21436, 24097, 27224, 33479, 40993 },
		{ 19431, 19523, 19601, 19676, 19799, 19935, 20186, 20469, 20977, 21599, 22737, 24097, 26557, 29604, 35584, 42710 },
		{ 23228, 23300, 23359, 23419, 23517, 23632, 23839, 24080, 24523, 25072, 26094, 27224, 29604, 32602, 38145, 45081 },
		{ 30481, 30508, 30533, 30559, 30606, 30665, 30781, 30926, 31218, 31613, 32422, 33479, 35584, 38145, 43319, 49733 },
		{ 39499, 39500, 39501, 39503, 39513, 39517, 39535, 39567, 39649, 39810, 40256, 40993, 42710, 45081, 49733, 55763 }
	}, {
		{ 14634, 14757, 14857, 14958, 15123, 15302, 15616, 15979, 16613, 17288, 18591, 20206, 23228, 26871, 34097, 42635 },
		{ 14757, 14884, 14980, 15084, 15245, 15426, 15735, 16094, 16724, 17379, 18689, 20295, 23300, 26918, 34108, 42636 },
		{ 14857, 14980, 15085, 15187, 15342, 15526, 15831, 16188, 16820, 17460, 18770, 20370, 23359, 26957, 34125, 42637 },
		{ 14958, 15084, 15187, 15285, 15445, 15625, 15932, 16280, 16907, 17548, 18851, 20446, 23419, 26998, 34139, 42639 },
		{ 15123, 15245, 15342, 15445, 15605, 15784, 16087, 16431, 17045, 17683, 18983, 20567, 23517, 27066, 34164, 42641 },
		{ 15302, 15426, 15526, 15625, 15784, 15961, 16261, 16600, 17183, 17843, 19129, 20703, 23632, 27149, 34193, 42643 },
		{ 15616, 15735, 15831, 15932, 16087, 16261, 16573, 16899, 17414, 18124, 19396, 20952, 23839, 27307, 34258, 42647 },
		{ 15979, 16094, 16188, 16280, 16431, 16600, 16899, 17198, 17732, 18443, 19695, 21231, 24080, 27498, 34345, 42662 },
		{ 16613, 16724, 16820, 16907, 17045, 17183, 17414, 17732, 18313, 19011, 20233, 21736, 24523, 27863, 34544, 42695 },
		{ 17288, 17379, 17460, 17548, 17683, 17843, 18124, 18443, 19011, 19696, 20884, 22352, 25072, 28332, 34841, 42772 },
		{ 18591, 18689, 18770, 18851, 18983, 19129, 19396, 19695, 20233, 20884, 22076, 23485, 26094, 29241, 35499, 43067 },
		{ 20206, 20295, 20370, 20446, 20567, 20703, 20952, 21231, 21736, 22352, 23485, 24840, 27224, 30386, 36330, 43638 },
		{ 23228, 23300, 23359, 23419, 23517, 23632, 23839, 24080, 24523, 25072, 26094, 27224, 29604, 32602, 38145, 45081 },
		{ 26871, 26918, 26957, 26998, 27066, 27149, 27307, 27498, 27863, 28332, 29241, 30386, 32602, 35434, 40696, 47134 },
		{ 34097, 34108, 34125, 34139, 34164, 34193, 34258, 34345, 34544, 34841, 35499, 36330, 38145, 40696, 45450, 51542 },
		{ 42635, 42636, 42637, 42639, 42641, 42643, 42647, 42662, 42695, 42772, 43067, 43638, 45081, 47134, 51542, 56999 }
	}, {
		{ 22931, 23015, 23082, 23156, 23272, 23400, 23639, 23925, 24440, 25084, 26237, 27628, 30481, 34097, 40524, 48336 },
		{ 23015, 23101, 23168, 23243, 23354, 23486, 23718, 24004, 24512, 25149, 26297, 27677, 30508, 34108, 40527, 48337 },
		{ 23082, 23168, 23243, 23315, 23425, 23554, 23786, 24070, 24574, 25207, 26344, 27719, 30533, 34125, 40529, 48338 },
		{ 23156, 23243, 23315, 23389, 23493, 23625, 23851, 24134, 24637, 25267, 26391, 27762, 30559, 34139, 40534, 48339 },
		{ 23272, 23354, 23425, 23493, 23608, 23741, 23965, 24240, 24740, 25362, 26463, 27833, 30606, 34164, 40537, 48340 },
		{ 23400, 23486, 23554, 23625, 23741, 23871, 24094, 24361, 24857, 25474, 26571, 27915, 30665, 34193, 40540, 48341 },
		{ 23639, 23718, 23786, 23851, 23965, 24094, 24328, 24587, 25071, 25673, 26692, 28071, 30781, 34258, 40553, 48342 },
		{ 23925, 24004, 24070, 24134, 24240, 24361, 24587, 24845, 25320, 25905, 26891, 28260, 30926, 34345, 40575, 48344 },
		{ 24440, 24512, 24574, 24637, 24740, 24857, 25071, 25320, 25781, 26331, 27289, 28624, 31218, 34544, 40634, 48348 },
		{ 25084, 25149, 25207, 25267, 25362, 25474, 25673, 25905, 26331, 26808, 27805, 29098, 31613, 34841, 40758, 48353 },
		{ 26237, 26297, 26344, 26391, 26463, 26571, 26692, 26891, 27289, 27805, 28804, 30030, 32422, 35499, 41131, 48449 },
		{ 27628, 27677, 27719, 27762, 27833, 27915, 28071, 28260, 28624, 29098, 30030, 31211, 33479, 36330, 41775, 48724 },
		{ 30481, 30508, 30533, 30559, 30606, 30665, 30781, 30926, 31218, 31613, 32422, 33479, 35584, 38145, 43319, 49733 },
		{ 34097, 34108, 34125, 34139, 34164, 34193, 34258, 34345, 34544, 34841, 35499, 36330, 38145, 40696, 45450, 51542 },
		{ 40524, 40527, 40529, 40534, 40537, 40540, 40553, 40575, 40634, 40758, 41131, 41775, 43319, 45450, 49971, 55452 },
		{ 48336, 48337, 48338, 48339, 48340, 48341, 48342, 48344, 48348, 48353, 48449, 48724, 49733, 51542, 55452, 60505 }
	}, {
		{ 34469, 34480, 34493, 34509, 34538, 34570, 34646, 34754, 34992, 35355, 36119, 37143, 39499, 42635, 48336, 55377 },
		{ 34480, 34500, 34509, 34526, 34556, 34585, 34662, 34771, 35007, 35366, 36126, 37144, 39500, 42636, 48337, 55377 },
		{ 34493, 34509, 34524, 34541, 34568, 34601, 34675, 34781, 35020, 35381, 36134, 37151, 39501, 42637, 48338, 55378 },
		{ 34509, 34526, 34541, 34561, 34587, 34620, 34692, 34798, 35034, 35392, 36142, 37157, 39503, 42639, 48339, 55378 },
		{ 34538, 34556, 34568, 34587, 34613, 34649, 34720, 34823, 35060, 35414, 36154, 37166, 39513, 42641, 48340, 55379 },
		{ 34570, 34585, 34601, 34620, 34649, 34688, 34758, 34858, 35090, 35441, 36174, 37183, 39517, 42643, 48341, 55379 },
		{ 34646, 34662, 34675, 34692, 34720, 34758, 34836, 34932, 35162, 35504, 36217, 37216, 39535, 42647, 48342, 55380 },
		{ 34754, 34771, 34781, 34798, 34823, 34858, 34932, 35038, 35258, 35591, 36270, 37278, 39567, 42662, 48344, 55381 },
		{ 34992, 35007, 35020, 35034, 35060, 35090, 35162, 35258, 35482, 35795, 36423, 37418, 39649, 42695, 48348, 55382 },
		{ 35355, 35366, 35381, 35392, 35414, 35441, 35504, 35591, 35795, 36099, 36672, 37647, 39810, 42772, 48353, 55383 },
		{ 36119, 36126, 36134, 36142, 36154, 36174, 36217, 36270, 36423, 36672, 37321, 38230, 40256, 43067, 48449, 55385 },
		{ 37143, 37144, 37151, 37157, 37166, 37183, 37216, 37278, 37418, 37647, 38230, 39115, 40993, 43638, 48724, 55407 },
		{ 39499, 39500, 39501, 39503, 39513, 39517, 39535, 39567, 39649, 39810, 40256, 40993, 42710, 45081, 49733, 55763 },
		{ 42635, 42636, 42637, 42639, 42641, 42643, 42647, 42662, 42695, 42772, 43067, 43638, 45081, 47134, 51542, 56999 },
		{ 48336, 48337, 48338, 48339, 48340, 48341, 48342, 48344, 48348, 48353, 48449, 48724, 49733, 51542, 55452, 60505 },
		{ 55377, 55377, 55378, 55378, 55379, 55379, 55380, 55381, 55382, 55383, 55385, 55407, 55763, 56999, 60505, 65119 }
	}
};