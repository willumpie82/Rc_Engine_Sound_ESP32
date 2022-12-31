const unsigned int knockSampleRate = 22050;
const unsigned int knockSampleCount = 1141;
const signed char knockSamples[] = {//0
-1, 1, 4, 8, 10, 16, 37, 51, 61, 60, 58, 65, 80, 91, 99, 99, //16
105, 109, 100, 98, 97, 83, 70, 69, 70, 68, 56, 51, 54, 61, 60, 54, //32
49, 45, 45, 42, 32, 22, 11, -12, -35, -36, -29, -32, -43, -48, -49, -50, //48
-57, -67, -74, -65, -48, -36, -30, -29, -33, -34, -33, -29, -21, -15, -6, 0, //64
-1, -1, 3, 11, 0, -3, 3, 13, 24, 21, 18, 25, 22, 15, 17, 18, //80
12, 10, 0, -18, -26, -27, -48, -61, -65, -68, -64, -63, -67, -64, -56, -60, //96
-71, -64, -55, -50, -43, -34, -16, -9, -12, -19, -27, -29, -19, -5, 3, 3, //112
7, 8, 16, 27, 31, 40, 48, 32, 23, 29, 36, 37, 38, 35, 31, 25, //128
13, 7, 9, 16, 11, 0, -1, 2, 20, 30, 34, 32, 24, 21, 21, 26, //144
25, 25, 36, 52, 49, 41, 39, 38, 31, 19, 13, 16, 26, 27, 23, 3, //160
-2, -1, -4, -6, 1, 9, -1, -14, -19, -22, -23, -16, -19, -31, -39, -43, //176
-46, -42, -31, -17, -5, 2, -4, -2, 3, 2, 1, 4, 9, 11, 12, 10, //192
-4, -28, -29, -32, -41, -49, -52, -48, -49, -49, -51, -57, -65, -69, -62, -47, //208
-31, -21, -21, -23, -24, -20, -17, -10, 10, 19, 14, 13, 16, 31, 41, 42, //224
41, 50, 56, 64, 71, 67, 68, 70, 51, 45, 51, 56, 59, 66, 71, 70, //240
61, 45, 36, 37, 40, 29, 17, 8, 2, -13, -29, -38, -43, -44, -45, -49, //256
-59, -56, -42, -37, -32, -29, -38, -45, -45, -44, -19, 0, 9, 19, 28, 42, //272
46, 45, 49, 43, 46, 58, 57, 46, 38, 26, 11, 10, 17, 18, 15, 20, //288
22, 14, 7, -4, -25, -42, -49, -52, -55, -65, -80, -95, -105, -103, -97, -93, //304
-97, -96, -79, -66, -52, -41, -34, -21, -14, -19, -14, -4, 0, 21, 24, 21, //320
14, 12, 14, 15, 21, 22, 32, 41, 24, 4, -5, -9, -9, -1, -3, -1, //336
9, 20, 24, 15, 20, 15, -2, -8, -9, -22, -25, -32, -31, -19, -21, -23, //352
-28, -27, -13, 0, 16, 36, 38, 43, 49, 43, 40, 37, 28, 33, 41, 39, //368
29, 26, 30, 40, 51, 63, 71, 68, 67, 50, 29, 22, 29, 43, 52, 49, //384
38, 26, 24, 26, 34, 34, 27, 24, 13, 2, 3, 10, 8, 2, -7, -23, //400
-37, -42, -32, -22, -19, -27, -44, -59, -76, -90, -90, -87, -81, -62, -70, -84, //416
-86, -77, -64, -50, -40, -17, 1, 3, 2, -11, -16, -14, -18, -19, -5, 2, //432
0, -9, -12, -6, 3, 9, 11, 11, 6, -6, -1, 16, 32, 41, 44, 33, //448
27, 26, 30, 37, 41, 22, 12, 5, -7, -4, 4, 4, 12, 18, 16, 18, //464
23, 9, 4, 9, 16, 21, 18, 17, 12, 3, -11, -17, -4, 4, 1, -7, //480
-13, -12, -7, 4, 14, 30, 46, 58, 55, 49, 50, 55, 65, 74, 71, 65, //496
65, 62, 51, 50, 58, 57, 55, 50, 37, 32, 21, 15, 12, -11, -28, -39, //512
-49, -62, -81, -103, -107, -110, -119, -123, -118, -111, -101, -93, -98, -100, -91, -88, //528
-86, -80, -69, -54, -26, -11, 0, 15, 26, 19, 17, 27, 28, 37, 49, 29, //544
13, 2, -8, -6, 4, 4, 0, -4, -9, -18, -31, -35, -27, -30, -41, -51, //560
-67, -71, -66, -54, -50, -52, -41, -27, -21, -18, -13, -5, 12, 23, 33, 38, //576
44, 65, 68, 68, 76, 83, 85, 84, 86, 93, 98, 99, 106, 101, 88, 80, //592
73, 63, 57, 62, 70, 74, 69, 60, 41, 35, 35, 34, 36, 29, 13, 0, //608
-14, -24, -25, -17, -5, -2, -16, -38, -57, -69, -72, -72, -66, -52, -51, -58, //624
-64, -63, -50, -40, -33, -28, -23, -6, 0, -11, -7, -5, -3, 8, 17, 25, //640
33, 30, 21, 18, 15, 15, 20, 20, 14, 12, 10, -5, -14, -14, -23, -44, //656
-58, -68, -77, -75, -71, -70, -70, -73, -74, -77, -79, -72, -60, -44, -32, -32, //672
-37, -31, -26, -16, -8, -3, 7, 12, 8, 3, 9, 22, 33, 47, 58, 62, //688
54, 45, 52, 53, 51, 57, 56, 50, 49, 40, 20, 9, 6, 0, 6, 8, //704
-1, -8, -13, 0, 9, 3, 3, 14, 18, 19, 24, 30, 42, 47, 46, 48, //720
46, 46, 45, 45, 43, 41, 43, 38, 24, 17, 6, -5, -8, -6, -6, -14, //736
-13, -17, -22, -23, -26, -24, -20, -22, -31, -47, -57, -59, -59, -58, -49, -39, //752
-42, -37, -32, -28, -24, -20, -2, -3, -7, -17, -29, -35, -19, -14, -25, -29, //768
-23, -21, -27, -29, -31, -27, -31, -51, -47, -40, -47, -55, -49, -35, -24, -16, //784
-16, -11, 9, 17, 27, 34, 42, 56, 62, 62, 61, 62, 72, 77, 66, 67, //800
76, 72, 68, 72, 75, 80, 75, 66, 60, 68, 70, 63, 56, 47, 43, 31, //816
8, -10, -19, -23, -24, -35, -42, -37, -40, -48, -52, -51, -43, -33, -36, -42, //832
-45, -40, -37, -31, -15, 8, 19, 25, 22, 19, 23, 24, 26, 32, 42, 54, //848
55, 39, 31, 20, 15, 9, -2, 1, -1, -4, -7, -17, -29, -30, -47, -61, //864
-60, -62, -67, -71, -85, -99, -101, -91, -86, -80, -73, -66, -61, -73, -76, -71, //880
-62, -58, -53, -33, -6, 16, 24, 24, 26, 29, 27, 32, 40, 42, 42, 38, //896
44, 53, 43, 23, 20, 13, 9, 5, 4, 23, 31, 29, 23, 13, 5, 4, //912
0, 8, 9, -8, -18, -18, -22, -18, -8, -7, -14, -16, -19, -11, 8, 18, //928
25, 28, 29, 32, 37, 48, 53, 61, 56, 41, 35, 34, 46, 53, 45, 51, //944
61, 54, 48, 41, 32, 29, 32, 35, 44, 42, 30, 21, 14, 16, 22, 22, //960
17, 16, 13, 8, 7, -5, -24, -23, -23, -34, -41, -40, -40, -42, -49, -54, //976
-56, -59, -69, -77, -77, -71, -63, -66, -81, -92, -89, -73, -67, -54, -7, -4, //992
-8, -10, -21, -24, -5, -3, -1, 2, -8, -14, -11, -10, -12, -6, 12, 22, //1008
22, 21, 14, 21, 35, 41, 51, 52, 43, 37, 40, 43, 38, 31, 24, 17, //1024
8, -1, -10, -12, -15, -14, -7, -4, 1, 0, -7, 6, 16, 18, 17, 18, //1040
27, 30, 17, -3, -14, -4, 7, 2, -3, -5, -6, -3, 7, 14, 21, 35, //1056
48, 56, 57, 53, 56, 61, 63, 78, 83, 79, 74, 58, 45, 52, 55, 57, //1072
50, 42, 34, 6, -7, -14, -21, -24, -30, -37, -52, -75, -97, -109, -114, -121, //1088
-127, -125, -120, -117, -120, -121, -115, -106, -96, -86, -82, -72, -57, -39, -20, 13, //1104
22, 22, 24, 22, 17, 24, 38, 42, 41, 35, 25, 11, 1, -2, -3, 3, //1120
-3, -13, -8, -5, -13, -20, -26, -30, -35, -43, -57, -72, -67, -63, -55, -48, //1136
-44, -27, -20, -11, -1, };
