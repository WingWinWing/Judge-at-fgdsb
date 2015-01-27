const int num_test = 60;
vector<vector<int>> in_0 = {{1, 9, 4, 2, 8, 1, 2, 16, 0}, {1, 17, 11, 3, 6, 5, 15, 5, 2, 10, 2, 4, 16, 9, 16}, {18, 19, 9, 13, 16, 14, 5, 8, 2, 12, 7, 7, 5}, {16, 15, 2, 18, 14, 19, 7, 10, 16, 7, 13, 7, 10, 13}, {17, 5, 16}, {8, 11, 1, 4, 1, 19, 11, 14, 4, 14, 17, 18, 15, 4, 18}, {14, 16, 13, 1, 5, 14, 17}, {17, 12, 14, 19, 19, 16, 3, 4, 19, 1, 18, 1, 13, 10, 12}, {9, 13, 9, 1, 1, 12, 12, 7}, {7, 8}, {-17, -10, -12, 74, 71, 48, -35, 24, 25, -51, -54, 87, -23, 85, 65, -8, -17, 40, -91, -37, -11, 49, 5, 25, 68, 30, 49, 73, 34, 2, -39, 29, 39, -43, -85, 23, -20, -30, 95, -44, -66, 30, -47, 98, -88, 57, 82, 49, 2, 67, 45, -39, -64, 10, -66, -7, -3, 99, 6, 3, 87, -41, 74, -85, -29}, {27, 46, -14, 22, -4, -86, -39, -7, -69, -55, -60, -88, 94, 29, -100, -71, -55, -94, -6, 53, 55, 11, 70, -55, -83, -98, -81, -15, 69, -51, 44, -71, -36, 100, -16, -28, 90, -18, 38, 76, -16, -78, -17, -48, -85, -92, -75, -68, -10, 55, -43, -9, -50, 12, 30, -61, 38, -10, 51, -32}, {82, 35, -87, -92, -62, 6, -72, 63, 27, -43, 0, 89, -45, 29, 4, 62, -12, -84, -74, 20, -11, -41, -77, -63, -92, 63, -93, 76, 91, 36, -60, -90, 11, -36, -96, 90, 4, 89, -35, -81, 54, 77, -46, 68, 72, 77, -51, 45, -77, 63, -74, 88, 0, 59, -10, 34, 97, 66, 0, 92, -39, -64, 53, 27, -72, -93, 81, 65, 78, -75, 2, -55, -71, 33, -83, 14, 25}, {-13, -33, -56, 91, -14, 100, 85, -98, 14, -57, -52, -63, -34, 54, 48, 39, 1, -38, -34, -18, -25, 15, -10, -31, 3, -60, 30, 43, -89, 99, -6, 30, -94, 18, -97, 33, -68, -64, -9, 14, -2, -59, -65, 17, 23, 69, 55, -94, -52, -20, -98, 13, -32, 2, -19, 55, -20, -6, -8, 22, -61, -13, -45, 94, 60, -95, 22, 55}, {87, 92, -60, 44, -38, -70, 73, 98, 87, 44, 61, 65, -14, 82, -17, 34, -19, -96, 29, 42, -32, 58, -95, -3, -10, 54, -31, -84, -67, -69, -82, 46, 81, -88, -19, -64, 81, -55, -26, 40, -52, -64, 31, 55, -46, 12, -33, 96, -39, 27, -12, 55, 36, -3, 12, -83, 34, -18, 69, -20, 85, -21, -17, 82, -56, 19, 61, -19, 96, 58, 80, -78, -57, 69, 77, -23}, {-12, -83, -76, 85, -42, -12, -14, 24, 73, -41, 57, -57, -86, 93, -88, 41, 12, -4, -52, -34, -23, 93, -71, 52, -99, -63, -15, 10, 26, -74, -46, 65, -62, 31, -66, -33, 94, 46, 48, 83, 79, 80, 64, 4, 35, -100, 29, -59, 13, -49, 41, 20, -26, 9, 1, -11, -6, 19, -80, -11, 72, -6, 69, -72, 55, -60, -22, 74, -45, -6, 6, -57, -14, 5, 64}, {51, -49, 94, -25, -9, 42, -13, 51, 99, -14, -55, 3, -9, -97, -39, -49, -15, 29, 80, 60, 76, -81, 52, -22, 13, -77, 15, -40, -42, -73, 47, 52, -33, -69, -70, 32, 52, -5, 31, 40, 26, -18, 3, 23, -76, 1, -18, -36, -20, 79, 11, -35, -74, -10, 57, -72, 56, -19, 97, 43, -24, 3, 20, 23, -57, -61, -14, 70, 66, 82, 30, -29, 68, 59, 29}, {-57, 52, 7, 6, -59, 37, -68, -12, -4, 79, -33, -29, -71, -71, 25, 67, -60, -63, 64, 80, 4, -87, 96, -54, -57, 94, 68, 10, -34, 16, 93, 98, -67, 12, -14, 55, 56, -67, -39, -22, 14, -19, 20, 11, 84, -49, -51, -22, 35, -59, 98, -10, -4, 45, 66, 59, -17, -100, 73}, {-37, 53, 57, -24, -55, -32, 33, -12, 45, -62, 67, -48, 2, -78, -86, 64, -27, 47, -83, 38, -8, -67, 37, -74, 65, -68, 51, -69, 52, 46, 12, -48, 64, -31, 90, 13, 14, -92, -93, 57, -51, 75, 90, 80, 18, -4, 43, 14, 51, -80, 35, -71, 36, -61, 43, 13, 34, -28, 60, -22, -29, 44, -44, -79, 77, 49, 16, -74, -25, -24, 54, -5, 0, -16, -83, -58, -84, 83, 44, -64, -78, -96, 19, -7, -23, -87, -65, -37, 39, -13, -91, 49, -61}, {39, -91, 97, -60, 6, 78, -7, -66, 54, -80, 62, -53, -87, -8, -5, -36, 83, -99, 14, -91, -84, 89, 100, 3, 57, -24, -54, 17, -54, -79, 36, -5, 4, -52, 47, -11, 60, -95, 20, 48, -87, -73, -71, 60, 97, -48, -88, -46, 41, 88, -10, 71, 12, -6, -3, -29, -61, 57, -72, 51, 63, 74, 50}, {-7, 91, 84, -67, -80, 24, 11, 53, -4, 8, 42, -86, -36, -78, -30, -70, -18, 59, -11, 38, -86, -86, 50, -28, 75, -46, -24, 1, -42, 32, -100, 75, -27, -73, 37, 17, -29, -29, 26, -5, 95, -55, -63, 71, 34, -37, 88, -23, -86, 3, -91, -83, 48, -82, -92, -95, -6, -98, -12, 62, -91, -92, -11, -31, -44}, {-65, 93, 66, 58, -31, -74, 57, -55, 49, 79, -60, -42, -77, 13, 34, -90, 64, 43, 94, 10, -51, -50, 85, 9, 41, -37, 14, -13, -40, 47, -68, -6, -98, 81, -67, -18, 70, -76, 26, 79, -86, 26, 87, 46, 74, -60, -42, -90, -70, 9, 86, -81, -17, -99, -3, 25, -59, -96, 39, -59, 86, 50, 11, -60, -29, -47, 47, 22, 14, 48, 92, 7, 17, -29, 54, -55, 31, 32, -67, 74, -98, 97, -17, 2, -51, -32, 71, 76, 85}, {64, 37, 92, -89, -94, -79, 71, -9, 73, -38, -94, -85, -7, 78, 80, -76, 31, 63, -55, -31, 73, -3, -39, -86, -42, -97, -13, 87, 20, -79, 73, 45, -100, 40, 49, 88, -97, -77, -33, 36, -87, 56, 60, -56, 43, -73, 4, -78, 24, 65, 56, -69, -2, -97, 17, 43, 1, -59, -38, -78, 84, 25, 69, -2, -64, -24, 0, 63, 35, 19, -63, 22, 30, -17, -47, 67, -21, -69, -59}, {1, -24, -38, 24, 5, -17, -87, 37, 56, -27, 37, -10, -8, 11, -12, 83, -47, -61, 53, -6, -26, 83, 27, -4, 4, 35, 44, -80, 10, -23, -89, -41, -20, -38, 57, -91, -50, 63, -81, 77, -29, 78, 47, -15, -92, -77, 59, 4, -10, 87, 94, -93, 42, -18, 48, -76, -75, -31, -53, -9, -78, 98}, {-70, -86, -38, -73, -55, -41, -26, 23, -89, -78, -72, 24, -37, 75, 33, 40, -88, -53, 51, 47, 81, -8, 79, -57, 54, 2, -94, 44, 51, -56, -62, -69, 66, -10, -98, -83, 51, 82, 17, 94, 39, -74, -76, 3, 7, 91, 92, -67, 29, 10, -67, 5, -42, -53, -57, -73, -61, -13, -59, 56}, {4, 59, 90, 0, -78, -17, 19, 56, 98, 34, 57, 85, 19, 2, 13, -22, -48, 74, -27, -7, 73, -23, -45, 82, 2, -67, -84, -28, 72, -78, 4, -93, 41, -65, 55, 80, -98, 40, -6, -53, 36, 81, -83, 9, -98, -8, 54, -96, 59, -29, -36, -48, -9, -82, 53, 91, 88, -4, 10, -83, -9, 97, 83, -88}, {24, -66, -45, -17, 34, 78, 51, -59, -24, -47, 83, 49, -36, 70, 48, -26, -77, 60, -24, -46, -44, 7, 98, -54, 9, -19, 50, -74, 49, -97, -88, 30, -35, -1, 15, 24, 57, -74, 84, 55, 67, -75, -35, -93, 53, 84, -47, -20, 31, 23, 97, -69, -87, -15, -82, 0, -8, -81, 16, -38, -42, 6, -28, -48, 30, -84, -56, 62, 78}, {-20, -22, -68, 76, -52, 8, -13, 10, 72, 79, 92, -51, -86, -1, -9, -15, -86, 96, 5, -99, -83, 12, 37, 30, 14, 36, -39, -38, -51, 79, -26, -32, -68, -48, -38, 26, -6, 85, 100, 83, 50, -49, -24, -50, 7, 2, -64, -26, -31, 95, -51, -39, 95, 31, 61, 35, 2, 53, 86, -57, -57, 40, 14, -36, -88, -62, 49, 87, -19, 23, 33, -29, -8, 1, 4, 87, -97, -9, 61, 8, -33, 24, 24}, {32, 32, -100, 21, -69, 50, 1, 15, -40, -62, 52, -64, -96, -49, -61, 59, -16, -79, 27, 6, 25, -95, 86, 86, 95, -44, -89, -84, 67, -96, -28, 28, -95, 89, 16, -57, 11, 4, -94, 80, 62, -16, 89, 9, 86, 59, 33, -97, 71, -80, -37, -99, -81}, {65, 60, 12, -89, -100, 50, 46, -30, 27, -18, -18, -6, -92, 92, -95, -54, -57, -13, -8, 45, -71, -69, -30, 7, 49, -79, 70, 48, -7, -53, 9, -43, 93, 52, -68, 4, -11, 78, 5, 92, -34, 31, -54, -8, -81, -80, 23, -15, 15, -61, -80, -28, -26, -74, -71, 89, -95, 8, 42, 9, 62, 87, 38, -40, -55, -10, -77, 58, -11, 60, -99, -90, 51, -87}, {-230, -101, 11, -26, 86, -45, -110, -500, -85, 64, 268, 483, 306, -127, -25, -53, 246, -456, -318, -217, -158, -444, -321, -489, -427, 157, -335, 126, -267, -411, 500, 343, 114, 276, -75, 278, 458, 208, 417, 195, 178, 117, -67, -164, 283, -45, -287, -230, -153, -423, -53, 67, 269, 132, -115, -414, -166, 241, 57, 177, -289, 402, -415, 498, -250, -447, -482, -93, 31, -70, -52, 134, -347, 224, 297, -173, 140, -489, 445, 433, 410, -447, 373, -188, 17, 382, 292, 35, 486, 384, -191, -341, -117, 451, 346, -216, 200, 429, 392, 477, -158, -277, 356, 251, 298, 0, -363, 300, -104, -113, -22, -479, 188, 437, 335, -205, -189, -29, 412, -354, 29, -279, 54, 211, 283, -4, -376, 39, -370, 66, -266, 222, 364, 56, -135, 42, 285, 180, 187, -390, 273}, {344, 481, -488, -396, 105, -228, -76, -82, 280, -184, 179, 444, -375, -247, -417, 345, 88, 230, 380, -428, -69, -263, 354, 165, 430, -177, 24, -43, -481, -68, 159, -160, -81, -328, -408, -26, 456, 176, -19, 494, -275, 245, -284, -319, 273, 374, -163, -324, -376, -90, -276, 157, 328, -338, 102, -75, -267, -402, -377, 206, 100, 248, -127, 385, 155, -444, 71, -341, -81, 347, 241, 312, 109, -315, 58, -163, -417, -496, -340, 105, -484, -38, 88, -284, 97, -73, 324, 273, -368, -61, 343, -330, -100, -201, -214, -201, -59, -182, 214, -40, 332, 55, 411, -355, -499, 165, -338, 64, 136, -383, -349, -480, 209, -158, 3, 422, 400, 62, 180, 482, 141, 378, -393, -250, 39, 13, -496, 172, -471, 14, 444, 190, 440, -236, 135, -239, 392, 284, -359, 269, -149, -373, -209, -258, 167, 71, 282, 247, 108, -203, 228, 469, -129, -89, -35, 29, -342, -92, 21, 173, 38, 255, -311, 402, -409, 276, 330, 377, 126, 41, -382, -421, -317, -320, -12, 84, -191, -224, -127, -212, 66, 335, 63, -364, 286, -95, 268, -69, 104, 134, 386, 126, -47}, {356, -31, 321, 179, 100, 288, -245, 377, 417, -254, 121, -198, -14, 414, 351, 106, 33, 43, -321, -292, -294, 111, 444, -486, 98, -70, 147, -267, -93, 463, -62, 153, 19, 211, -144, 103, 412, -432, 148, -444, 248, -33, 215, 25, 292, 426, -468, 153, 26, -467, 38, 209, -389, -463, -496, -90, 142, -347, -209, -330, 142, 488, 328, -224, -417, 262, -158, -172, -348, 450, -330, 53, 267, -333, 205, -384, 404, 18, 489, -400, -18, -143, -111, -413, -271, -60, -460, 325, -182, 431, -101, -217, -332, -443, 257, -136, 466, 484, -57, 223, 122, -169, -124, -256, 42, -180, -452, -113, -33}, {-228, -294, -208, -306, 409, -491, 166, 102, 15, -436, 293, -62, 388, -295, 116, -318, 306, 388, -311, 499, -53, 216, 484, 112, 149, -274, -253, -69, -24, -5, -226, 255, -49, -34, 158, 373, 31, -285, 418, 481, 155, 140, 372, -362, -248, -184, 15, 462, -344, 198, -97, -147, -195, -250, -342, 400, 126, -136, -304, -488, 302, 421, 87, 349, -448, -58, -156, 175, -276, -310, -498, 82, -400, 36, 97, 317, 340, 353, 124, -447, -277, 339, 194, -296, -139, -240, 194, -366, -219, -139, -184, 308, 334, -390, -150, -381, -6, -467, 36, 325, 238, -176, 53, -139, 479, 115, 311, -223, -28, -145, 110, 40, -156, -214, 407, 419, 31, 105, 362, 49, -485, -214, -202, -213, 352, -422, -491, -161, -25, 93, -22, -191, 434, 375, 27, 198, 435, -33, -163, 89, 252, 295, 400, -490, -309, -150, 292, 242, -426, -317, 446, 53, -435, 200, -212, 78, 217, 297, 262, -76, -153, 213, -194, 380, -97, 430, 179, 265, 175, 47, 485, -53, 312, 175, -452, 63, -123, 387, 462, 420, -400, -469, -63, -232, 152, -27, 358, 362, 405, 129, 496, -423, 42, -38, 145, 231, 368, -260, -92, -9}, {-412, 26, -46, 55, -15, -24, 480, -39, -269, -47, -161, -199, -475, -483, 286, 288, 158, 299, 75, -224, 114, 442, 239, 255, -457, 314, 499, 383, -447, -493, -112, -349, 200, -46, 352, -482, 240, 8, -444, 76, -79, -69, -491, -236, -263, -460, 363, 460, 205, -365, 204, 81, -391, -47, -88, -156, -435, -433, 222, 34, 21, -282, 4, -440, -452, -151, 401, -293, 443, -433, 192, 132, -242, 30, -395, -191, -250, -129, -123, 406, 31, 341, 115, -234, 468, -366, -222, 210, 296, -265, -329, 10, -135, 264, 272, -401, 145, -84, 108, 449, 370, -16, -478, -397, -93, 218, 497, -217, -315, -225, -179, 304, -459, 440, 4, -374, 348, 112, 176, -237, -406, -180, 190, 167, -326, 186, 352, 92, -326, -155, -500, -356, -24, 182, 102, 478, 115, 420, -413, -481, 335, 366, 163, -123, -185, -45, -6, -438, -450, 392, -146}, {-143, 304, 164, 215, -131, -308, -144, 272, -216, -371, -407, -143, -279, -290, 301, -455, -155, 284, -159, 13, -450, 253, 135, -72, -281, -455, 464, -23, -318, 198, 462, -430, 409, 323, 262, 132, -135, 228, 208, 430, 198, 33, 295, -109, 277, 312, 221, 28, 364, -289, -206, 347, -477, 288, -79, 400, -129, -323, -296, 475, 299, 114, 146, 105, -234, -489, 104, 130, 238, 420, -319, -373, 24, -417, 264, 157, -25, -198, 266, 312, 64, -478, -378, 282, 239, 449, -380, 185, 342, 492, -404, 491, 372, -259, -194, -155, -216, -149, 15, -211, -419, -415, 103, 258, 276, 27, 324, -437, -370, -483, 389, 495, 258, 98, -362, 343, 420, -445, 231, 346, 86, 403, -45, -317, -78, -329, -195, 345, -384}, {55, -241, 372, 3, -399, -37, 252, 300, 36, 152, 261, 330, -299, 180, 428, -305, -409, 284, 256, 253, -145, 18, 275, -391, -491, 57, -419, -345, -102, -298, 107, 351, -28, 332, -162, 172, -147, -310, 223, -328, -94, 54, 285, 431, 317, -47, -24, -402, 309, -414, 59, -34, -158, -433, -39, 346, 75, -343, 2, -171, 39, -375, 446, 71, -101, 231, 176, -415, 488, 421, -99, 367, -120, -222, 308, 119, 328, 184, -491, 391, -147, 89, 39, 336, -2, 119, -369, -282, 386, -47, 99, -64, -482, -357, -64, -174, 458, -209, 406, -491, 100, -114, -75, 334, 18, 234, 384, 457, -188}, {435, 452, -414, 238, 337, 313, -357, 323, -480, -486, 165, 61, 169, 320, -7, 93, -490, 177, 495, -492, 420, -183, -276, -99, 2, 492, 175, -85, -454, -487, -278, 201, -353, -30, 125, 308, -29, -43, 345, 221, 226, 273, -233, -117, 416, 283, 94, -494, 302, 364, 281, 235, -434, 205, 71, 118, -484, 244, -105, 186, 392, -428, -148, 227, -166, -370, -20, -151, -367, 343, -429, 102, 108, -369, -195, -441, 93, 473, -133, 352, -232, -23, 198, -57, -421, -8, -66, -168, 211, 279, 118, -325, -425, -240, -216, 157, 498, -293, 54, -357, -130, 148, -399, -91, 16, 344, 304, 277, 71, -209, -11, -161, 353, -401, 54, -186, -273, 299, 204, -451, -257, 242, 242, -42, 237, 8, -397, -339, -53, -18, 73, 122, -174, 2, -466, 80, -232, -54, -177, 427, 324, 486, -337}, {59, -178, 407, 101, 290, -315, -179, -223, 214, -34, -131, -157, 266, -331, 420, 164, 246, 294, 20, 63, -214, -265, 207, -112, -137, -175, -403, -391, 215, 296, -23, -92, -297, -209, -499, -346, -107, -65, 271, -162, -323, 145, 64, -442, 22, -261, 124, 154, -424, -412, -374, -130, -354, 431, 453, -77, -258, 18, -256, -416, 377, 202, -151, 232, -229, -460, 357, 302, -156, 169, 204, -418, 95, 63, -217, 32, -496, 197, 30, 165, 100, -273, -309, -7, -265, 2, -493, -96, -52, -287, 17, 247, 469, 320, -387, 377, -261, 460, 346, -168, -455, 54, -312, 105, -319, -373, -143, 388, 202, -407, -96, 257, -382, 399, -163, 433, -256, -467, 388, 236, -281, 45, 258, -187, 53, 45, -401, 97, -38, 72, 396, 419, -496, -158, 88, -271, 163, 401, -428, -453, -406, -63, -145, 325, 447, -326, -64, -274, -381, -397, 347}, {-82, 396, 101, -195, 58, 232, -187, -280, 96, -107, -158, -107, 308, -93, -347, 414, 426, -238, 24, -468, 282, -360, 348, 292, -426, 363, -60, -158, -287, 329, -297, 4, 276, -189, -437, -439, -461, -16, -400, 257, -260, -447, -454, -206, 299, -388, 69, -229, -312, 405, -15, -21, -389, 295, 205, -206, -278, 323, 300, 113, 334, -53, 257, -77, 379, -370, 87, 234, 180, 161, -475, -260, 37, -467, -487, -107, 454, 400, -256, -386, 189, -215, 44, -482, -206, 296, 470, -369, -383, -163, -281, -392, 153, 320, -109, -174, -451, 61, -334, -214, -22, -461, 333, -184, -472, 231, 26, -94, -193, -397, 254, -145, 383, -6, 124, 43, -159, -216, -352, 269, 265, -338, 112, -484, 252, -252, -249, 219, 209, -96, 94, -428, -273, 74, -311, -301, 59, -445, 161, -420, -269, -75}, {-379, -202, 159, -61, -342, -404, 292, 116, 41, -465, 498, 252, -373, 328, 470, 464, 467, 214, 63, 145, 333, 170, 485, -375, 170, 80, 455, -397, 258, -479, -475, 351, -419, -277, -15, 301, 364, -377, 357, 154, -336, 391, 70, -263, 404, 260, -274, -348, -388, -133, 144, 119, -205, 112, -499, 470, 241, -101, -171, 182, -456, 348, -218, 438, 399, 161, 402, -310, -355, -292, -66, 90, -174, 439, 433, -1, -22, -483, 343, 377, 31, -157, 4, 401, -78, -30, -462, 307, 338, -97, -216, -397, -103, 334, 108, 290, -197, -410, 463, -443, 464, -332, 217, -241, 205, -369, 300, -230, 448, -173, 345, -67, 64, 105, -267, -295, -186, -241, 450, 358, 27, 75, 23, -351, 71, -237, -110, -74, 412, -195, 235, -476, -349, -465, 274, 137, 243, 144, 312, -320, -286, -313, 258, 428, 186, -33, 322, -201, -498, 422, -476, 171, 485, -251, -207, 302, 391, 94, -153, -472, -37, -202, 422, 5, -204, 104, 411, 256, -210, 189, 263}, {-467, -203, -352, 258, -171, -134, 17, -203, 400, 60, -405, -51, 359, 410, 263, -228, 5, -385, 105, -260, 412, 433, 362, -428, 265, -441, -287, 59, -85, -81, -428, -352, 123, -237, -77, -181, -97, -129, 67, -172, 312, 83, -201, 245, -292, -289, -367, 353, 226, 96, -358, 472, 0, -424, -61, 203, -45, -209, -358, -424, 308, -448, 457, -54, 186, -11, -413, 123, 58, -484, -182, -497, -217, 346, 368, -146, -443, 465, -489, 377, 352, 373, 220, -225, -500, -260, -80, 202, 52, -436, 468, 234, -80, -346, -488, -30, 385, -174, -417, -306, 238, 145, -296, -231, 260, 274, 445, -302, 15, 157, 115, -482, 219, 195, 374, 353, -494, -439, -15, -223, 452, 1, -189, 263, 444, -61, -240, 410, 268, 49, 247, -269, 123, 351, 353, -285, -270, -233, -39, -170, -383, -189, 15, 194, -8, 454, 45, 101, 348, 128, 475, 320, 357, 350, 7, -186, 280, 146, -80, -286, -289, 86, -95, 336, 249, -317, -217, 200, 94, -366, 420, -187, 352, -183, -375, -97, 467, 289, 270, -222}, {311, 159, 386, -13, -455, -472, -250, 215, 124, -259, 180, -365, 434, 122, -34, -296, -56, 399, -18, -326, -101, 199, 330, -114, 249, -9, -202, 104, -186, -247, -243, 412, 11, -82, 439, 477, -126, 54, -304, -147, -195, 63, 69, -443, -491, 429, 440, -64, 335, 160, 287, 203, 104, -146, 356, 423, -392, -343, -238, 93, 409, 444, 12, 92, -470, 177, -391, 292, -6, -118, 210, 190, 150, -432, -170, -371, -443, -27, -130, 441, 104, -423, -129, 273, -54, -163, 388, 413, 0, -255, 49, -402, 318, -423, 237, 278, 496, 145, 395, 40, 260, -432, -100, 54, 156, -488, -25, -279, 361, 179, -424, -408, 199, -114, -164, 473, -412, 161, -224, 42, -140, 376, -316, 31, -388, 199, 262, -221, -366, -193, -81, 37, 12, -105, 177, -410, 299, 468, 480, -355, 79, -176, 410, -87, -440, -399, 429, 408, 420, 35}, {-309, -42, 276, -451, -132, 498, 373, 367, 204, 269, 476, 355, -360, 252, 307, -155, 69, 214, -262, -481, -416, -342, 369, -12, -56, -193, -145, 369, 130, 3, 367, -281, 267, -43, -90, 175, 105, -279, 17, -433, 152, 51, -327, 108, 315, -386, 436, 444, 155, 493, 407, 367, 98, 257, -277, -243, -232, 60, 74, 391, 446, 71, 47, 196, 79, -468, -85, 164, -104, -284, 34, -170, -405, 377, 295, -138, 360, 30, -314, -372, 475, -15, -147, -100, 436, 324, -105, 290, 186, 79, -261, -439, 481, -212, -55, 279, -139, 1, 187, 312, -404}, {162, -375, 220, -60, -310, 410, -330, 124, -291, 440, -148, 349, -171, 180, 432, -442, 437, -429, -193, 484, -141, 195, 67, -13, -120, 395, 32, 432, 49, 413, -268, -94, 463, 349, -478, 160, -262, -484, 469, -279, 151, 66, 112, -360, -438, -209, -500, 118, -273, -99, 343, 138, -240, 435, 297, 493, 184, 201, 119, 32, 363, 248, -356, 62, -426, 252, 49, 193, 349, -49, 219, 22, -343, -159, -315, 142, -68, 360, -498, -308, -386, 277, -335, 422, -138, -337, -18, -20, -401, -202, 421, -94, 139, 58, -391, 92, -253, -404, 449, 30, 251, -264, 417, 167, -11, 1, 353, 32, -296, 235, -114, -54, 257, -413, 181, 424, 175, 408, 47, 366, 172, 272, 14, 146, 359, 155, 256, 291, 262, -267, -63, -462, -297, 150, 100, 195, 259, 194, -356, 398, 23, -192, 453, 446, -153, 313, 292, 102, 285, 110, -366, -378, -96, -447, 420, 415, -17, -411, -140, -465, -58, 385, -197, 262, 14, 216, 123, -6, 16, 290, 121, -341, 20, -377, 287, 111, 10, -493, -211, 415, 99, -321, 116, -418, 5, 131, 495, -223, 419, 361, 61, -380, -287, 119, -477}, {-97, 217, 51, 2, -20, 305, 199, -167, -263, 294, 358, -469, 344, -497, 189, -234, -85, -385, -232, -417, -302, -300, 226, 243, -239, -15, 405, -58, -162, 73, 474, 249, -438, 12, 8, -437, -113, -2, -86, -195, 311, -99, 151, 363, 224, 239, -364, -380, 412, -407, 318, -193, 21, 354, 370, 465, -34, 259, -319, 495, 269, -323, 424, -470, -141, 335, -489, 324, 81, -145, -202, 12, -400, 135, 12, 401, -2, -467, -64, -500, 179, 98, -201, 320, 183, -55, -62, 329, 278, 388, -464, -292, 453, 70, -433, 260, 314, 5, 22, -455, -272, 300, 176, -106, 73, -102, 293, 76, -323, -240, 92, -301, -224, 92, 491, -482, -241, -244, -191}, {-322, -421, 418, 439, 20, -203, -195, 237, 193, 146, -487, 343, -197, 38, 459, 98, 397, -233, -495, -240, 483, 297, -306, -126, -277, 303, -122, 386, 45, 239, -20, 331, -203, -68, -322, 404, 83, 394, -199, 157, 484, 205, 455, -25, -177, 473, 177, -267, -428, 355, -334, -61, 269, -19, -173, -454, 38, 3, -270, -88, -315, -2, -410, -481, -233, -50, -475, 187, -246, 477, 193, -365, -419, -202, 246, -346, -293, -281, -247, 149, -388, 47, 45, -237, -450, -222, -395, 215, 438, 37, 493, 59, 218, 163, 74, -360, 443, -270, 60, 438, 33, 6, -269, -428, -113, -250, -385, 344, -424, 231, 349, 184, 213, 459, -400, 36, 85, 500, 237, 153, 13, 0, 1, -117, 450, -116, -374, 72, 32, 60, 55, -18, -282, -236, 435, -310, -196, 278, 496, -49, 454, 389, 114, -204, 33, 476, -427, -128, 63, -392, 27, -298, 95, -161, -330, -253, -126, 497, 484, 252, -380, 76, -31, 153, -452, 186, -102, -473, 196, -485, 338, 379, -154, -324, 54, 408, 305, -483, -2, 240}, {489, 426, -464, -111, 171, 476, -327, 374, -28, 210, 439, -5, -174, -7, -273, 19, -129, -487, -47, -283, -265, 68, -156, -67, 99, -296, -36, 396, -211, -120, 135, -11, 303, 18, 252, 402, 88, -360, -64, -485, -191, 494, 401, -372, -54, 249, 457, 66, 183, 277, -80, -110, 333, 155, -406, -432, -228, -298, -484, 56, 167, 264, -394, -436, -94, 136, -325, -339, -40, -250, 134, 371, -68, 124, 429, -256, -149, 432, 259, 242, -76, -434, -178, 475, 86, 64, -410, 426, -302, -67, 304, -98, 325, 237, -483, -476, 101, -229, 437, 319, 245, -109, -41, 194, -440, -138, 213, 429, -394, -295, 34, -8, -97, 156, 91, -428, -463, -173, -79}, {-373, -183, 377, 232, 110, -334, -391, -10, 428, 175, 316, -11, -408, -362, -478, 433, 495, 460, -125, -20, -419, 374, -355, 440, 171, 444, 128, -301, -108, 264, 283, 210, 156, -334, -54, -270, -196, -5, 196, -496, 157, -454, -97, 265, -97, 84, -338, 16, 319, -149, -346, -265, -155, 299, -211, 279, -222, 51, -441, -236, 427, -124, 237, -408, -139, 224, 333, -213, -179, -20, -451, 62, -187, 133, -446, 476, 83, -430, 278, 153, 498, -215, 336, -232, 225, -188, -465, -71, 15, -265, -21, 478, 56, -240, -204, -495, -228, 151, 443, -78, -215, 331, -344, 426, -191, -375, 485, 335, -492, -66, 162, -424, -376, -32, -399, 441, -54, -295, -8, -79, 210, -232, -329, 105, -89, -161, -124, 433, -355, -256, 471, -156, 97, 380, -415, -101, 354, -327, -389, 155, -53, 230, 255, -121, 215, 173, -316, 235, 19, -486, -288, -361, -180, 154}, {-20, 330, -69, 245, -77, -74, -397, 215, 275, -52, -70, -173, -454, -374, 31, 383, -461, -391, -415, 411, 64, 478, -446, -483, 124, 367, 302, -65, -241, -255, -438, -306, -438, 329, 419, -12, 216, 490, -250, -382, 287, -22, -51, 266, -415, -458, -71, 350, -15, -81, 437, -215, -164, -16, -240, -195, -98, 179, 22, -353, -238, 312, 339, -244, 319, 498, 357, 192, 348, 130, 290, 162, 133, -362, 297, 181, 231, -456, -216, 126, 276, -449, -263, -302, 260, 9, -103, -98, 315, -367, 161, 91, 191, -287, 27, 135, -140, -474, -112, 161, -415, 367, -36, 387, -475, 210, 166, 202, -475, -112, -375, 273, 248, -20, 214, 203, -326, -37, 102, 192, 263, -383, 372, -390, -354, 312}, {337, -493, 56, 255, 209, 498, -251, -172, 299, -254, -369, -51, -120, -144, 296, -434, 236, -410, 455, -389, -432, 346, 109, 432, 29, 376, 118, 29, -142, -101, 454, 193, -198, 325, 457, -457, -92, -82, 39, 270, -231, 322, 85, -75, 271, -435, -355, 399, -135, 256, -405, -23, -489, 314, -284, -253, 452, -490, -432, 492, 28, -280, 282, 452, -224, -161, 119, -7, 161, 499, 270, 448, -284, 426, 9, 365, -366, -80, 128, -420, 188, 345, 47, 189, 16, -151, 170, -252, -253, 83, -341, 450, -133, 346, 453, -174, 302, 458, -354, 62, 47, -137, -338, -147, -420, 65, -239, -328, -41, -328, 390, 266, 170, 468, 432, 349, 314, 221, -428, -16, 136, -98, -420, 30, -143, 338, -69, -202, -445, -58, 360, -222, 119, 121, -355, -335, 475, 184, -348, -398, -247, 319, -51, -239, 249, -495, -73, -97, -395, -414, -204, 88, -57, -260, 366, 389, 108, -382, 279, 136, -434, -270, 152, -54, -421, -481, 490, 487, 125, 123, -371, -489, -205, 151, 366, 267, -388, 65, -409, 350, 262, -12, -215, -479, 328, -433}, {198, -17, 43, 321, 290, -73, -153, -184, -98, -358, 481, 83, -271, 357, 346, 488, 172, 256, 31, -255, -294, -72, -188, 195, 382, -165, -200, -262, -488, 44, -258, 145, 250, -408, -309, 152, 208, -284, 490, 394, -81, -6, -155, 456, -234, -317, -190, 37, -320, -116, 30, -10, -258, 216, 299, 131, -140, -127, -460, 325, 238, 143, -96, -263, -200, -405, -77, 457, 126, -78, 24, 367, -351, -242, -260, 459, 258, 254, 303, -292, -369, 114, 295, 94, -489, 464, -382, -311, -472, 418, 13, 1, -441, -438, 67, 65, -110, 323, -267, -478, 450, 98, -140, 95, -460, 472, 431, -453, 262, -37, -443, -146, 176, -367, -3, 171, 83, 390, -97, 463, -35, -190, 445, 272, 371, -319, -41, -90, 475, 356, 78, 451, 113, -350, 96, 0, 114, -104, 453, 451}, {2, 190, 264, 184, -153, -398, -342, -287, -456, 243, -363, -71, -414, -197, 45, -261, 100, -160, 45, 220, -141, -149, -21, -114, 114, -403, -308, -45, 173, 317, 452, 476, 232, 208, -170, 431, 242, 364, 272, -163, 39, -464, -111, -431, 498, 382, 25, 165, 127, 350, 417, 221, 371, -162, -143, -332, -74, 224, 220, 234, 111, 170, -172, -10, 101, 55, 97, -285, 341, -206, 184, 325, 384, 142, -358, -169, -182, 43, -499, 152, 316, 387, 100, 208, -295, -20, 80, 300, -174, 394, -217, -1, -194, -396, -88, -170, -347, 27, -225, 137, 409, -96, -86, 3, 484, 323, -63, 290, 193, -369, 495, -120, -87, 352, 400, -294, 349, 294, -116, 468, 289, -33, -9, -131}, {240, 77, -185, -167, 232, 31, -386, -482, 359, 90, 319, -139, -224, -313, 100, -28, 145, 353, 87, -281, 122, -245, -170, -61, 443, 340, -40, -447, -303, -496, -63, -115, 400, 364, -272, 66, -486, 411, 27, -473, -448, 456, -92, -81, -419, 164, -106, 348, -158, 36, -460, 500, -297, -487, -304, 44, -235, -483, 373, -267, -155, -169, -309, 385, -22, -484, -297, -274, -485, 270, 0, 119, -48, -312, 389, 71, 77, 368, -496, 160, -445, -379, 220, 473, -93, -310, 470, -324, 102, -395, 484, -227, -122, 260, 497, -216, -54, 480, 156, 133, 176, 453, -286, 438, 72, -173, -287, 435, -442, 288, 169, -148, -50, -205, -155, -51, -58, 262, -482, 246, -68, 286, 164, 70, -76, 154, -55, 476, -15, -187, -450, 151, -349, -68, 77, -259, -395, -228, -457, -13, -44, -414, 276, -334, 383, -269, 469, -92, -12, -467, 316, -360, 155, 97, 16, 177, 488, -9, 70, -141, -134, 315, -409, 496, 105, 379, 73, -266, -432, -358, 490, 267, 205, -93, -421, 336, -245, -177, -38, 81, 278, 199, -190, -29, 483, 355, 120, 397, 493, 275, 474, -234, -193, -50, -308, -492, 144, -24}, {-334, 75, 45, -75, -317, 142, 317, -367, -102, -493, 217, 253, 491, 469, 38, 274, -174, -202, 499, -128, 496, -226, 486, -25, 54, -210, -110, 54, -239, 370, 163, 332, 206, -188, 67, 234, -260, 135, -315, -168, -102, 489, 226, 95, 228, 146, 417, -19, -391, 34, 60, 7, 314, -226, 156, -132, 386, 247, 465, -412, -494, 365, 269, -78, 34, -102, -57, -283, -362, 172, 274, 251, 203, 408, 464, -361, -264, -22, 383, -482, 57, -135, -168, -450, -220, -356, 319, -347, -425, -486, -69, 142, -342, 325, 167, -261, 273, 140, 85, -472, -408, -248, -37, 69, 160, -436, 224, 106, 53, -111, 345, 338, 481, -141, 41, -344}, {-456, 453, 161, 218, -405, 435, -149, 181, -34, 316, -60, 400, -92, 116, 405, 131, 315, -30, 58, -409, 221, 204, -421, -249, -216, -214, 37, -196, -157, 487, 342, 420, 160, 347, 8, -148, -342, 176, 500, -212, -245, -392, 441, 61, 244, 354, 108, -275, -230, 376, 157, 453, 329, 127, 66, 71, 393, 159, -449, -415, -72, 197, -104, 276, 477, 243, -264, -221, -67, -448, -169, -154, 46, -157, 284, 329, -343, -358, 488, -169, -437, 120, -371, 417, 298, 298, -61, 317, -475, 224, 173, 359, -182, -334, -194, -239, -83, 171, 349, -62, -390, 360, 176, -216, -460, -43, -335, 286, 78, 337, 434, -314, 231, -41, 344, 334, -213, -405, -495, -301, 304, 475, 80, -120, -47, 344, -489, 23, -227, 103, 138, 45, -397, 404}, {401, 24, 384, 340, 219, 497, -467, -30, 238, -102, -332, -169, 379, -411, -304, 370, 69, 154, 414, 444, -48, -151, 177, 214, 415, -435, 452, -56, -193, -122, 101, -303, -96, -384, 46, -214, -312, 452, 216, 498, 231, -21, 495, -228, 410, 138, -454, 385, 232, -177, 101, -423, -148, 86, -225, 140, -193, 127, 218, -429, -108, 404, 190, -358, 484, -226, 169, 485, -46, -15, -260, -264, 73, 223, 109, 28, -484, -403, 291, -289, -171, -64, -77, -440, -184, 270, 202, -259, 430, 324, 194, 66, 184, 199, -12, -452, 497, 196, 83, 356, -193, -460, 158, 308, -195, -462, 440, -494, -181, -319, 176, -126, -54, 319, -343, 277, -342, 297, -321, -425, -413, -308, 146, 264, 429, 210, -92, -90, 10, 137, -436, -393, 72, -423, 295, 78, 279, -342, -319, 66, 33, 405, -375, 345, 105, 20, -335, 71, 392, 170, -176, 174, 413, 125, -202, -232, 397, 272, -401, 279, -65, 422, -373, -198, 494, -23, 47, -90, -405, -221, 224, 184, -379, 134, -245, -446, -378, 144, -17, 167, -310}, {-322, -462, 15, -407, 388, 248, 423, -484, -32, -418, 21, 111, 223, -472, -223, -461, -261, 209, -397, 331, 333, 375, 429, 200, 39, -467, 153, 136, 50, 359, -126, -175, -440, -84, 495, -105, 99, 70, -207, -345, 49, 247, 343, 75, 305, 105, 299, 42, -245, 355, -258, 188, -122, -451, -500, 30, -212, 376, -414, -161, -490, -136, 329, 381, -293, 349, 148, 104, 224, 88, 319, -479, -257, -210, -429, -245, 7, 370, -272, -184, 86, -486, -303, 284, 138, 16, 274, -447, 63, -434, -185, 406, 26, -324, -171, -274, -55, 391, -233, 443, -92, 331, -262, -448, 207, 377, -226, -187, 369, -251, 319, -252, 468}, {396, 429, 79, -465, 345, -168, -381, -78, 230, 152, -22, 383, -336, -342, 382, -19, 457, 376, -15, -316, 78, -414, -396, 491, -191, -114, -346, 447, -289, -453, 251, 289, -187, 131, 26, 228, -484, 347, 444, 216, 430, -407, 354, 174, 460, -9, 264, -447, -7, -235, -168, 189, 378, 297, 463, -211, 257, -342, -117, -143, 319, 500, -157, 138, 359, 292, 109, -269, 156, 370, 173, 372, 9, -272, 22, 298, -292, -103, -254, -313, 123, -142, -430, -14, -467, 205, 290, 395, -458, -68, 461, 275, 298, -496, 258, 184, -276, 34, 434, -27, -286, -351, 76, 266, 14, -387, 60, 482, -119, 251, -427, 102, 482, 265, -90, -85, 386, -244, 117, 339, -459, 166, -259, 425, 125, 324, 455, 160}, {143, 320, 93, -252, 41, -264, 498, -476, 57, -224, 144, 141, 299, 1, 99, 217, -133, -398, -326, 413, 160, -453, 431, 27, 400, -268, 289, 263, 25, 289, -304, -156, 222, -394, 162, -296, 165, 485, 71, -491, 20, 391, 440, 148, 50, 377, -349, -383, 141, 34, -118, 256, 96, -373, 405, -342, 384, 159, -117, -332, -72, 443, 143, -415, -69, -445, -307, 430, 377, -238, 355, -105, -390, 426, -7, -332, -367, 122, -301, 24, -453, -427, -196, 364, 101, -210, -44, -15, -330, -221, 463, 197, -401, -138, -348, 370, 217, -416, -197, -25, 78, -277, 299, 445, 99, -438, -67, 317, 154, -448, -164, 320, 222, -329, 221, -246, -172, 74, 22, -465, -217, 52, 357, 100, -337, -138, -224, 292, 350, -7, 244, 447, -372, -125, 435, 48, -425, 410, -319, -350, -286, -442, 125, -161, -491, -383, -95, 353, 321, -287, -379, 36, 462, -423, -377, -194, 132, -454, -191, -129, 147, 321, -372, -122, 399, -451, -11}};
vector<vector<int>> in_org_0 = in_0;
vector<int> out = {19, 45, 60, 52, 2, 30, 9, 63, 14, 0, 1076, 845, 1371, 1108, 1427, 1307, 1285, 771, 2335, 883, 1211, 1890, 1549, 976, 812, 1112, 1235, 1583, 670, 1400, 4536, 8930, 3270, 9198, 5602, 4051, 2874, 5382, 5731, 5357, 7348, 7341, 5577, 2597, 9539, 3555, 8053, 3682, 6131, 3838, 9104, 4658, 3503, 9058, 3562, 4699, 8751, 3131, 3990, 7559};