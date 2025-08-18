#include <gtest/gtest.h>
#include <iostream>
#include <algorithm>
#include <random>
#include "max_alternating.hpp"

TEST(maxAlternating, sizeOnePositive) {
  std::vector<int> input {1};
  EXPECT_EQ(maxAlternatingSubarraySum(input), 1);
}

TEST(maxAlternating, sizeOneNegative) {
  std::vector<int> input {-5};
  EXPECT_EQ(maxAlternatingSubarraySum(input), -5);
}

TEST(maxAlternating, sizeTwoSelectPositive) {
  std::vector<int> input {-5, 1};
  EXPECT_EQ(maxAlternatingSubarraySum(input), 1);
}

TEST(maxAlternating, sizeTwoAlternation) {
  std::vector<int> input {5, -1};
  EXPECT_EQ(maxAlternatingSubarraySum(input), 6);
}

TEST(maxAlternating, sizeTwoBothNegative) {
  std::vector<int> input {-1, -2};
  EXPECT_EQ(maxAlternatingSubarraySum(input), 1);
}

TEST(maxAlternating, sizeThreeAll) {
  std::vector<int> input {1, -2, 3};
  EXPECT_EQ(maxAlternatingSubarraySum(input), 6);
}

TEST(maxAlternating, sizeThreeStartFromTwo) {
  std::vector<int> input {-1, 2, -3};
  EXPECT_EQ(maxAlternatingSubarraySum(input), 5);
}

TEST(maxAlternating, ex0) {
  std::vector<int> vec = {-69, 24, -35, -20, 97, -74, -17, -81, 20, -23, -68, -52};
  int solution = 278;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex1) {
  std::vector<int> vec = {-15, -20, -76, -94, -75, -88, 100, 99, -48, 36, -11, 29};
  int solution = 223;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex2) {
  std::vector<int> vec = {5, 73, 70, 33, -56, -32, -53, 87, 61, -1, -92, 96};
  int solution = 326;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex3) {
  std::vector<int> vec = {-4, 4, 73, -70, 92, -80, -16, 19, -40, -72, -40, 69};
  int solution = 315;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex4) {
  std::vector<int> vec = {-72, 38, 87, 71, 75, -15, -85, 81, -98, -82, 81, 22};
  int solution = 249;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex5) {
  std::vector<int> vec = {100, 93, -63, -19, 40, -85, -56, -75, 51, 56, -17, 26};
  int solution = 195;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex6) {
  std::vector<int> vec = {-42, -56, -41, -30, -39, -85, 50, -40, -77, -74, -97, 53};
  int solution = 139;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex7) {
  std::vector<int> vec = {23, -14, -46, 29, -31, -31, 53, 28, 83, -25, 12, 74};
  int solution = 145;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex8) {
  std::vector<int> vec = {16, -1, 53, -69, -60, 46, -30, -70, 78, -52, 70, 80};
  int solution = 273;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex9) {
  std::vector<int> vec = {84, 43, 11, -2, 65, 60, 94, -98, 31, 18, -94, -85};
  int solution = 282;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex10) {
  std::vector<int> vec = {-87, -15, 54, -92, 22, -69, 10, 18, 55, -100, -69, 79, 50, 89, -25, -75, 79, -40, 51, -77};
  int solution = 494;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex11) {
  std::vector<int> vec = {-76, -65, 31, 93, -27, -52, 59, 42, 37, 90, 37, -71, 83, 93, 19, -98, -79, 19, 18, 82};
  int solution = 215;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex12) {
  std::vector<int> vec = {-84, 19, 41, 62, -93, -90, -18, 57, 27, -76, 75, -21, 4, 37, 93, -19, -31, 64, 46, 35};
  int solution = 278;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex13) {
  std::vector<int> vec = {-39, 100, 83, 0, 25, -1, -7, -55, 16, 96, -63, 90, 62, -20, 14, 27, -70, -5, -45, 60};
  int solution = 350;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex14) {
  std::vector<int> vec = {-95, -57, -74, -17, 72, 42, 100, -100, -64, 73, 85, -23, -26, -8, 91, 58, -71, -72, -26, -44};
  int solution = 274;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex15) {
  std::vector<int> vec = {86, 13, -48, -48, -10, 91, -17, 82, -27, 57, 31, 35, 80, 95, 40, 76, 9, -58, 97, 95};
  int solution = 352;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex16) {
  std::vector<int> vec = {12, 19, 79, 89, -78, 28, -50, 69, -78, -18, -78, -53, 65, -79, 87, 35, 6, -65, 49, 81};
  int solution = 452;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex17) {
  std::vector<int> vec = {-4, 53, -68, -12, -57, -58, -81, -76, -15, -50, 0, -44, -77, 99, -99, -33, 90, -85, -92, 74};
  int solution = 309;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex18) {
  std::vector<int> vec = {98, -78, -59, 55, 88, 98, 84, -91, -27, -1, -97, 43, -16, 68, 96, -31, -74, 47, 3, 17};
  int solution = 231;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex19) {
  std::vector<int> vec = {56, 32, 53, -34, -81, -80, 53, -18, 34, -30, 21, -19, -64, 70, 3, 30, 44, -35, 19, 56};
  int solution = 285;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex20) {
  std::vector<int> vec = {-726, -374, -530, -306, -412, -527, 703, -668, -150, -151, -695, -248, -702, -244, 90, 606, 394, -420, -533, 649, 307, -378, 454, 649, 473, -247, -126, 145, -863, -625};
  int solution = 1638;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex21) {
  std::vector<int> vec = {167, -428, -865, -943, 141, -223, -441, 865, 522, 296, 667, -630, 445, -983, -564, -551, -203, 440, 960, -466, 130, 554, 995, 260, -350, 696, 588, 519, -631, -718};
  int solution = 4292;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex22) {
  std::vector<int> vec = {53, 40, 846, 569, 605, 582, -7, 178, 954, 955, -606, -610, 296, 88, 947, -231, 554, -914, 994, 398, 440, -762, -829, 798, 789, -751, 630, -783, 595, -625};
  int solution = 7329;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex23) {
  std::vector<int> vec = {-473, -898, 767, -54, 552, -202, 126, 459, 91, 780, -305, 13, 529, 598, -440, 738, 622, 623, 658, -520, -677, 895, 177, -317, 162, 287, -934, -414, 700, 121};
  int solution = 3673;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex24) {
  std::vector<int> vec = {-588, -866, 155, -927, -435, 717, 481, 423, -332, -379, -864, -21, -186, 394, 39, -50, -59, 597, 492, -410, 913, 896, -401, -641, -203, -969, 305, 84, 64, -301};
  int solution = 2602;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex25) {
  std::vector<int> vec = {625, -837, -489, -999, 161, -613, -588, -891, -880, 305, 121, 854, 144, -807, -203, -878, -965, 371, 678, 240, 103, -256, 797, -825, -792, -251, 322, 265, 384, 169};
  int solution = 3840;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex26) {
  std::vector<int> vec = {528, -448, -408, -383, -740, 635, -259, -404, 369, 945, 855, -114, -442, -189, 574, 934, 118, 957, -200, -572, 764, 881, 279, -835, 658, 822, 697, -246, -984, 509};
  int solution = 2148;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex27) {
  std::vector<int> vec = {-618, -938, -698, 181, 70, -994, 130, -418, -987, -45, -176, -169, -154, -934, 395, -309, 591, 697, 591, -425, 291, 798, -391, 517, 558, -554, -621, -786, 439, 288};
  int solution = 3358;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex28) {
  std::vector<int> vec = {-121, -90, -793, -821, 304, -573, -591, 898, 75, 538, 668, 381, -143, 454, -332, -795, -555, 763, 545, 34, 448, 264, -580, -265, 599, -882, 539, -779, 609, -874};
  int solution = 4662;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex29) {
  std::vector<int> vec = {351, 682, 534, -103, -672, 569, -164, -545, 741, 302, 25, 569, -438, 942, 545, 741, -870, -947, 85, -659, -957, 202, -580, -430, 11, -810, -262, -589, 913, -177};
  int solution = 3504;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex30) {
  std::vector<int> vec = {-555, -198, 868, -14, 819, 360, -580, 551, -863, 460, 618, -82, -529, 776, -859, -977, 482, 889, 357, 540, -66, 173, 984, 244, -976, 73, -356, -209, 989, 5};
  int solution = 4795;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex31) {
  std::vector<int> vec = {359, -55, -572, -99, 83, 478, -905, 294, 936, 752, 465, -455, 512, 382, -577, -953, 934, -557, 570, 545, -391, 229, -61, 409, -432, -848, -496, -483, 372, 931};
  int solution = 3671;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex32) {
  std::vector<int> vec = {908, 278, -989, -448, -142, 125, 722, 413, -38, -328, 178, 683, -909, 512, -67, 771, 198, -444, -145, 92, 259, -907, -631, 684, -676, 997, 879, -562, -498, -10};
  int solution = 4668;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex33) {
  std::vector<int> vec = {707, 840, 275, 427, 886, 118, -917, 70, -104, -25, -97, 163, -797, -789, 555, -361, 600, -971, 1000, 485, -257, -410, 3, -871, -438, -677, -91, -978, 418, -652};
  int solution = 6225;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex34) {
  std::vector<int> vec = {767, 132, -783, -752, -836, -865, 385, 707, -279, -321, -436, -116, -268, 817, -65, -759, -252, -929, -366, -267, -268, -954, 392, 231, 534, 251, 225, -694, 600, 731};
  int solution = 3921;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex35) {
  std::vector<int> vec = {-269, 858, -407, 904, 187, -63, -62, -356, -861, 254, -565, -335, 990, -966, -578, -466, -505, 383, -263, -873, 644, -238, 635, 109, 503, 11, -516, -818, 741, 500};
  int solution = 4509;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex36) {
  std::vector<int> vec = {-128, -235, 739, -750, -885, 845, -398, 565, 746, -628, -171, 364, 568, -607, 309, -470, -156, 88, -646, 976, -253, 247, 577, -529, -823, 218, 156, -957, -982, -595};
  int solution = 2793;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex37) {
  std::vector<int> vec = {-15, -75, 944, -493, -407, -536, 383, -394, 590, 659, 916, 43, 759, -114, 702, 137, 596, -117, 498, -57, -656, 376, -615, -496, 473, 427, 577, -32, -86, -737};
  int solution = 6068;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex38) {
  std::vector<int> vec = {-24, -126, -399, -409, -613, 155, -361, -395, -357, -498, -303, -804, 429, 356, 780, 191, 352, 366, -583, 376, -625, -988, -344, 926, -33, -772, 311, 33, -183, -611};
  int solution = 2265;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex39) {
  std::vector<int> vec = {-834, 474, -541, 195, -802, 705, 529, 357, -414, 176, -48, 671, -936, 279, 322, -728, -279, 15, 454, 394, -36, -20, 207, 896, 144, -731, -349, -318, 835, -312};
  int solution = 5069;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex40) {
  std::vector<int> vec = {-346, -183, 737, -301, -793, -170, 613, -3, -714, -897, -975, -409, -651, -322, 91, -152, -645, -310, -355, -30, -16, -636, 689, -866, 859, 306, -749, -166, 499, 292};
  int solution = 3034;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex41) {
  std::vector<int> vec = {913, -893, 871, -571, -489, 616, -393, 525, 305, 452, 349, 506, -486, -717, -759, 853, -445, 685, -157, 910, 65, 258, 906, -438, 899, -854, -2, -323, 511, -890};
  int solution = 5609;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex42) {
  std::vector<int> vec = {873, -839, -281, 310, -744, -794, -911, 165, -279, 428, 460, -689, 260, 0, -524, -547, 287, 543, -334, 155, -371, -529, -823, 301, 589, 513, -862, 696, -187, 480};
  int solution = 4471;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex43) {
  std::vector<int> vec = {-404, -565, 877, -940, 635, -311, 358, -843, 156, 435, -802, 599, -597, 401, 487, 830, 999, -326, -971, 270, -223, 220, 487, 84, 262, -413, -749, 352, -752, -339};
  int solution = 4311;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex44) {
  std::vector<int> vec = {-423, 225, -966, 93, 291, -295, 587, -869, 764, 274, 107, 914, 499, 12, -339, 383, -89, -496, -150, 143, 781, 700, -671, 532, -881, 530, -848, -214, -102, -824};
  int solution = 4583;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex45) {
  std::vector<int> vec = {267, 63, -878, -752, 243, 214, 912, -888, -757, -293, 838, 569, 442, -956, 33, 973, -466, 361, 723, 828, -437, 382, 381, 663, 788, 750, -740, -384, 209, -799};
  int solution = 3708;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex46) {
  std::vector<int> vec = {-102, 983, -184, -636, -52, -335, -76, -352, -247, -927, 90, -169, -880, 486, 592, -904, -703, 190, 534, -37, -919, -347, 212, -568, 544, 166, 190, 430, 587, 392};
  int solution = 2691;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex47) {
  std::vector<int> vec = {-54, 331, 616, 796, -620, -852, 847, 762, 284, 296, -951, 793, 769, -62, 354, -467, 202, 434, 699, 446, -406, -816, -286, 597, -556, 232, -760, -891, -5, 357};
  int solution = 2866;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex48) {
  std::vector<int> vec = {311, 863, 243, -659, -149, -480, 362, 4, 369, -977, -414, 180, -204, -593, -952, 887, -737, -21, -520, -536, 662, 30, 964, 481, -399, -375, 885, 742, 288, -790};
  int solution = 2937;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex49) {
  std::vector<int> vec = {-252, 827, 37, -992, 731, -396, -289, 855, -137, 565, -940, -118, 191, -677, 608, 66, 269, 278, 338, 550, -592, 241, -251, -542, 817, 215, 212, 977, 465, 465};
  int solution = 2497;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex50) {
  std::vector<int> vec = {222, 988, 769, -676, 278, 770, -336, 171, 166, -820, 446, 303, 454, -131, 42, 666, -509, 264, 155, -443, -520, -274, 856, -875, 382, 197, -663, 871, 265, -455, -411, 258, 197, -34, 344, 319, -340, 790, -68, 492, 666, -107, -853, -443, 128, 777, -968, -318, -21, -230};
  int solution = 4368;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex51) {
  std::vector<int> vec = {-945, -234, -809, -724, -253, -122, 726, -563, 990, 609, 1000, 102, -765, 284, -382, -442, 72, 49, -466, -259, 650, 619, -21, 608, -828, 956, 165, -569, 286, -22, -437, 635, 507, -574, 161, 122, 624, 606, -673, 615, 118, -549, 747, 454, 895, -132, 478, 772, 36, 324};
  int solution = 3837;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex52) {
  std::vector<int> vec = {180, -341, 897, -86, 830, 232, -133, -543, 696, 207, -374, 512, -126, 651, -81, -50, 480, 229, 39, 598, 288, -55, -805, -574, -414, 924, 883, -494, -526, 807, -195, -556, -50, 955, -222, -411, -596, -358, 729, 971, -444, -199, -691, 42, -956, -825, 397, -122, -537, -122};
  int solution = 6260;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex53) {
  std::vector<int> vec = {-899, -937, 701, 364, 880, 807, -194, -441, 986, -26, -281, 140, 95, -475, 984, -402, -766, 716, 498, 8, -153, 311, -750, -714, 52, -741, -901, -485, 811, 383, 692, 283, -997, -273, -752, 688, 206, 328, 512, -849, -705, -692, 598, 475, -222, -725, 360, -251, 893, -831};
  int solution = 4987;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex54) {
  std::vector<int> vec = {-166, -503, -67, 817, 903, 488, -187, -982, 16, 451, -817, 903, -682, 756, -988, -453, 329, -598, 186, 802, 357, -142, 384, -453, 323, -800, 499, -437, -8, -583, -666, 355, -672, -159, -815, -155, 537, 30, 84, -284, 503, 638, -735, 517, 203, -271, -872, 49, -34, -258};
  int solution = 4597;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex55) {
  std::vector<int> vec = {395, 204, -516, 873, 927, -491, 49, 280, 563, 389, -198, 394, -333, 867, 677, 388, -954, -721, -698, -70, -615, -113, -633, -619, 422, 589, 573, 57, 263, 307, -956, 503, -72, 457, -869, 879, 180, -7, 686, -922, -170, -847, 97, 45, 43, 226, -849, -98, 880, -651};
  int solution = 6700;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex56) {
  std::vector<int> vec = {-197, -767, -856, 716, 174, -922, -5, -840, 600, 665, -579, -326, 906, -556, -6, 258, -50, -52, -778, 157, -938, 732, -867, -112, -744, 844, 673, 96, 542, 888, 149, 420, -962, -207, 823, 788, 265, 165, -7, -462, -266, 384, -674, 616, 376, 369, 842, 572, -123, 326};
  int solution = 7521;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex57) {
  std::vector<int> vec = {-977, 208, 289, -728, -447, -958, 732, -683, 225, -294, 522, -881, 243, -520, 271, 388, 763, -870, 911, -734, 32, -767, 553, 574, 63, -772, -648, -480, 921, 575, 394, -987, 103, -782, 901, 45, -507, -425, 800, -214, 628, -552, -21, 217, -234, 270, 795, -40, 696, 190};
  int solution = 16603;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex58) {
  std::vector<int> vec = {-621, 831, -830, -417, 950, 0, 73, -850, -727, -940, 462, -162, 856, 964, 174, -576, -347, 560, 400, 216, 973, 560, -691, -72, 971, 191, 684, 807, 974, -586, 404, -906, 742, -130, 981, 974, -584, -817, -939, -679, -294, -391, 372, 406, 186, -814, -537, -448, -787, -747};
  int solution = 7865;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex59) {
  std::vector<int> vec = {-141, -91, 591, -194, -317, -764, 890, 136, -339, -764, -110, -748, -346, -727, -231, 649, 973, -751, -295, -899, -380, 490, 455, 129, -213, 735, -299, -731, 31, -769, -397, -47, 643, -691, -339, -338, -663, 506, 717, 944, -932, 353, 260, -3, 605, 998, -568, 397, -731, 539};
  int solution = 5602;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex60) {
  std::vector<int> vec = {32, 469, 642, -376, -119, 52, 259, -346, -834, -928, 669, -965, -775, -736, -825, 677, -740, -321, -503, -665, 696, -237, 156, 95, -158, 908, 602, 183, 962, -243, -683, 554, 393, -912, -166, -872, 153, -345, 800, -513, 830, -771, 44, -457, 546, -425, 766, -281, 574, 447};
  int solution = 10213;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex61) {
  std::vector<int> vec = {-144, 191, 923, -711, 487, -744, -955, 327, -214, -632, 136, -668, 989, 924, 114, 716, -126, 791, 8, -287, 858, -860, 753, -263, -830, 804, 987, -984, 845, 363, 442, 504, 651, -17, -545, -243, -109, -114, -548, -786, 999, 458, -61, -334, 633, -500, -840, -509, -22, -667};
  int solution = 8007;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex62) {
  std::vector<int> vec = {23, -699, -86, 877, 615, -399, 960, 917, 947, 88, -617, 623, -515, -629, -212, -204, -192, 790, -372, 676, 57, 701, -698, 315, 407, 457, 134, -40, 647, -723, -229, -381, 137, 314, -557, -904, 172, -619, -26, -551, -44, 382, 594, 110, 137, -151, -1000, 944, -727, -758};
  int solution = 4959;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex63) {
  std::vector<int> vec = {160, -518, 846, 173, -459, 893, 526, -350, 244, 90, 879, -928, 857, 43, -511, 696, -415, -956, 861, -825, -753, 198, -126, -260, 530, -205, -727, 228, 194, 450, -775, -128, 493, 397, 950, -79, -558, 429, 368, 475, -9, -461, 156, -359, -224, 46, -910, 278, 853, 788};
  int solution = 4671;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex64) {
  std::vector<int> vec = {770, 281, -903, -369, -862, 456, 220, -472, -961, -34, 611, 390, -816, 404, -99, 514, 64, 229, -928, -402, -385, -662, -746, -687, 39, 171, -927, 357, -21, -732, 47, -478, 656, -846, -664, 413, -592, -128, 926, 769, 255, -745, 1, -644, -457, -48, -255, -844, 629, 275};
  int solution = 5890;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex65) {
  std::vector<int> vec = {496, -425, -125, 52, -790, -788, -175, 158, 964, 650, -174, 532, -637, 813, 192, -792, 252, -66, 120, 635, 652, 175, -949, 30, 155, 377, -931, -809, -761, 665, -618, 499, -523, -946, -408, 700, -801, 894, -901, 863, -23, 607, 97, 667, 590, -492, 646, 985, -175, 636};
  int solution = 10820;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex66) {
  std::vector<int> vec = {-63, -505, 322, -105, 960, -245, -909, 581, -898, -401, -406, 813, -424, -810, -991, -726, -291, -310, -582, -234, 290, 93, -294, 925, -86, -428, -939, -640, -505, 87, 365, -788, -89, -627, -888, -191, -691, 15, -660, 624, -681, 23, -37, 227, 655, 990, 519, 388, -980, -718};
  int solution = 7888;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex67) {
  std::vector<int> vec = {730, 711, 896, -805, -651, -124, -765, -942, -421, -359, -225, -352, 328, 76, -538, 658, -720, 5, 924, 670, -436, -647, 191, -383, -382, -965, -431, -655, 322, 689, -552, 869, -316, -507, 16, 150, -243, -640, 26, 781, 754, 476, 371, 85, 409, 217, 907, 429, -989, -686};
  int solution = 2426;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex68) {
  std::vector<int> vec = {992, -679, 117, -760, -581, 665, -361, -851, -861, 629, 207, 214, 628, -573, 75, 871, 670, 257, 568, 386, -277, -735, 128, -610, -47, 324, 281, -853, 722, 907, 323, 489, 814, 308, -836, 134, -254, -671, -103, -393, -4, 707, -504, -335, 21, 301, 117, -787, -978, -99};
  int solution = 3976;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex69) {
  std::vector<int> vec = {598, -719, -661, 774, -838, 882, 910, 922, 211, 7, 807, -48, -747, -699, 861, 228, -962, 950, 395, 25, -261, -923, 201, -474, -835, 238, -646, 186, 813, -473, 682, 14, 384, 176, 325, -221, 916, 238, 143, 670, 687, 941, -480, 688, -296, 837, -207, 438, -899, 922};
  int solution = 5786;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex70) {
  std::vector<int> vec = {706, 723, 248, 297, 260, -888, -786, 705, 415, 542, 206, 128, 700, -528, 239, -824, -773, 218, 57, 512, -836, -500, -576, 801, 587, -307, 254, -755, 15, 309, -277, -186, -96, -997, 224, -8, -549, -481, 702, -314, 937, 680, -564, 735, -161, 931, -376, 299, -708, -512};
  int solution = 4536;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex71) {
  std::vector<int> vec = {-857, -493, -502, -470, 436, 923, -692, 735, 939, 625, -424, 327, -622, -949, 622, 630, -507, 948, 449, -515, 97, -924, -912, 700, -317, -685, 695, -149, -471, -850, 891, -834, -190, -262, 188, -167, 391, 834, -797, -216, -8, -143, -93, 122, 853, -472, 218, 340, 885, 571};
  int solution = 5100;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex72) {
  std::vector<int> vec = {-803, -979, 942, 223, -494, 986, -801, 301, 278, -337, -406, -545, -757, 275, 94, -532, -729, -710, -870, -507, 43, -527, -616, 215, 454, 907, 173, -838, -120, -496, -497, -159, 148, -902, -607, -583, 962, 792, -991, -357, 792, -795, -817, 127, -626, -18, -527, 539, 503, -779};
  int solution = 3553;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex73) {
  std::vector<int> vec = {-840, -793, -720, -537, -151, 970, -915, -300, 286, 516, 615, -10, 495, 414, -740, 36, -886, -417, -910, -857, -204, -429, 505, 944, -553, 954, -621, 390, 649, 805, 738, -338, -622, 281, -736, 531, 589, -574, 171, 825, 173, 658, -675, -735, -429, 922, -135, 41, 611, 821};
  int solution = 8042;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex74) {
  std::vector<int> vec = {149, -720, -470, 460, 266, 160, 386, -867, -208, -60, -525, 928, 526, -235, 19, -908, 995, 38, -706, 58, 443, -557, -808, 19, 469, 332, 382, 441, -885, 480, -234, 895, 598, -492, 984, -419, 610, -113, -810, 999, 771, -611, -717, -764, -481, 444, -827, -503, 355, 928};
  int solution = 3216;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex75) {
  std::vector<int> vec = {-142, 218, -101, 613, -886, 157, 938, 2, -162, 792, -536, -911, -684, 367, 846, 247, -840, 288, -781, 686, 17, 625, -268, -77, -5, 973, -255, 909, 232, 701, 409, 29, 93, 801, 803, 669, 311, -75, -523, -292, -564, 209, 367, -567, -411, -896, -860, -653, -775, -20};
  int solution = 8887;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex76) {
  std::vector<int> vec = {334, 527, -68, -173, -703, -47, -32, 689, 442, 664, -89, 167, -978, -259, 377, 712, -12, -640, -499, -928, -365, -35, -660, 200, 352, -440, -58, 132, 828, -945, 981, -829, 912, -317, 505, -388, 889, 440, 84, -893, 683, 514, -842, 158, 334, 758, 839, -539, -152, 869};
  int solution = 8416;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex77) {
  std::vector<int> vec = {671, 938, -604, 710, 470, -817, 626, -971, 991, -420, -727, -300, -368, 917, -248, 506, 787, -742, 460, -712, 998, -946, -260, 139, -486, -296, -845, 590, -869, 900, -764, 854, 986, 193, 643, 916, -744, 501, 196, -516, 665, 95, -442, -368, 55, 831, -560, -301, 33, 376};
  int solution = 6474;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex78) {
  std::vector<int> vec = {253, 997, -776, -538, -315, -844, 987, -290, -927, 746, -266, 110, 461, -684, 683, -623, 935, 664, -699, -246, -607, 799, -122, 290, -950, -247, 17, 981, -856, -577, 371, -539, 612, 636, -95, 62, 461, -762, -711, 706, -952, -780, 326, 20, -864, -543, -439, 843, 204, -884};
  int solution = 5815;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex79) {
  std::vector<int> vec = {402, 397, 188, -906, 409, -664, 290, -879, 409, -349, -864, -607, 171, -892, 436, -916, 176, 685, -832, -377, -592, 286, 65, 6, -960, -520, 283, -511, 359, 979, 419, 610, -768, -363, 871, 365, 995, -425, -591, -887, -429, -289, -18, 610, -458, -702, -208, 711, 844, -358};
  int solution = 6433;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex80) {
  std::vector<int> vec = {61, 289, 331, 779, 967, 95, 837, 671, 530, -288, -470, -109, 944, -204, 937, 869, -582, 677, 825, -642, -922, 419, 789, -711, -460, 339, -130, -924, -303, -399, 220, -716, -804, -202, -958, 890, 396, 13, 890, 0, 840, 497, 181, -832, 285, 702, 980, 131, -273, -724};
  int solution = 5167;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex81) {
  std::vector<int> vec = {-304, 77, 566, 576, -443, -374, -498, 351, -888, 736, -979, -634, 44, -485, 667, -700, 765, 812, -268, -840, -145, -885, -7, 121, 219, 381, 687, -589, -255, 849, 451, -981, -34, -992, 528, 667, 583, -725, 696, 284, 91, -594, 932, 532, 269, 421, 739, 241, -246, 579};
  int solution = 8686;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex82) {
  std::vector<int> vec = {-305, -564, 416, -132, 521, 498, 983, -160, -94, -441, -80, 649, 631, -458, 314, -381, 593, -895, 884, 901, 19, -817, -930, -60, -695, 40, 779, 252, 238, -118, 735, -388, 39, 182, -994, -765, -355, 568, 194, 731, 350, -221, -266, 519, 312, 720, -250, 322, -220, 509};
  int solution = 6122;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex83) {
  std::vector<int> vec = {-315, -614, -312, -570, 153, 838, 184, 231, 188, -731, 411, -212, -790, -532, 374, -316, -312, -653, 858, 842, -121, -191, -285, -3, 46, 67, 684, 989, -335, 286, 147, 536, 771, -198, -692, -542, 15, -866, 814, 758, 813, 642, 35, -385, 896, -800, 137, 268, 349, -303};
  int solution = 5347;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex84) {
  std::vector<int> vec = {-618, 650, -847, -680, -373, -518, 903, -233, 746, 792, 619, -317, -210, -485, -451, -108, 910, -363, -419, -820, 12, -156, -477, 96, 462, -857, 152, -504, 937, 883, -147, 215, -333, -767, -100, -948, 249, 222, -207, -677, -738, -353, -230, -376, 288, -267, -739, 946, 913, -411};
  int solution = 7134;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex85) {
  std::vector<int> vec = {434, -901, -815, 903, -986, 430, -19, 784, 441, 966, 397, -724, 647, 617, -823, 71, -501, -449, -260, -504, 229, 500, 787, -422, -274, -978, 458, 762, 704, 956, -766, 436, 574, 672, 47, -789, -211, 480, 145, 978, 878, 92, -450, -774, 867, 21, 969, -504, 423, 576};
  int solution = 4100;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex86) {
  std::vector<int> vec = {-826, 802, -834, -435, 204, 651, -136, -464, -705, -759, 645, -507, 233, 123, -13, -736, -871, 156, -27, -492, -42, 78, 673, 16, 481, -388, -667, -454, 95, -831, 766, -199, 693, 995, -764, 389, -711, 907, -475, 277, -910, -554, 722, -455, 106, 462, 832, -862, -438, 701};
  int solution = 5582;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex87) {
  std::vector<int> vec = {-722, 863, -582, -840, 454, 818, 263, 241, -50, -743, -264, -660, 454, -689, -835, 148, 756, 956, 870, -516, -254, -902, -840, -863, 219, -965, -790, 17, 519, 437, -144, 489, -702, -48, 587, 964, 954, 311, 35, 844, -225, -718, -180, 573, 640, -830, 382, -629, -45, -49};
  int solution = 4312;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex88) {
  std::vector<int> vec = {952, -521, 372, 981, 186, -699, 248, 757, 741, -509, 474, 664, -286, -430, -321, -174, -816, -629, 732, 729, -233, -957, 105, 177, 188, -561, 295, 824, 887, -928, -81, -455, 646, -738, 936, 806, -34, 380, 453, 228, 687, 106, 661, -184, -756, 546, -506, -350, -206, -470};
  int solution = 7925;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex89) {
  std::vector<int> vec = {306, 660, 228, 804, 442, -838, 706, 495, -747, -247, 960, 977, -452, 806, -714, -22, 820, -165, -189, -153, 304, 964, 805, -827, 791, -957, -37, -382, -636, -751, 399, 267, 45, 33, 726, -474, -924, -578, -679, -726, 845, -816, -106, 641, -38, 50, 473, 890, -167, 796};
  int solution = 6835;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

TEST(maxAlternating, ex90) {
  std::vector<int> vec = {-703, -405, -29, 22, 290, 722, 806, -991, -992, -87, 352, -898, -143, 791, 550, 541, 778, 770, 415, 530, 272, 451, 986, -883, -523, 629, 672, -453, 338, 55, -477, 315, -287, -891, 280, -566, 304, 298, -29, 555, 170, -736, -698, 245, -650, -892, -257, 500, 757, -889};
  int solution = 4230;
  EXPECT_EQ(maxAlternatingSubarraySum(vec), solution);
}

int main(int argc, char* argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
