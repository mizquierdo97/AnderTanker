#ifndef _TEAPOT001_MESH_
#define _TEAPOT001_MESH_

#include <types.h>
#include "dcRender.h"

static SDC_VertexTexturedNormal Teapot001_Vertices[] = {
    { 70, 120, 0, 0, -4093, -129, 0, 0, 0, 29 },
    { 49, 120, 49, 0, -2894, -130, -2894, 0, 16, 29 },
    { 49, 124, 49, 0, -395, -4057, -395, 0, 16, 31 },
    { 70, 124, 0, 0, -580, -4054, 0, 0, 0, 31 },
    { 53, 120, 53, 0, 2431, -2226, 2431, 0, 16, 0 },
    { 75, 120, 0, 0, 3440, -2222, 0, 0, 0, 0 },
    { 0, 120, 70, 0, -4, -115, -4094, 0, 31, 29 },
    { 0, 124, 70, 0, -3, -4054, -581, 0, 31, 31 },
    { 0, 120, 75, 0, 0, -2222, 3440, 0, 31, 0 },
    { -51, 120, 49, 0, 2977, 726, -2717, 0, 15, 29 },
    { -50, 124, 49, 0, 334, -3984, -886, 0, 15, 31 },
    { -53, 120, 53, 0, -2436, -2204, 2445, 0, 15, 0 },
    { -70, 120, 0, 0, 4093, -129, 60, 0, 0, 29 },
    { -70, 124, 0, 0, 612, -4049, 55, 0, 0, 31 },
    { -75, 120, 0, 0, -3441, -2220, -1, 0, 0, 0 },
    { -70, 120, 0, 0, 4093, -129, 60, 0, 0, 29 },
    { -49, 120, -49, 0, 2894, -130, 2894, 0, 16, 29 },
    { -49, 124, -49, 0, 395, -4057, 395, 0, 16, 31 },
    { -70, 124, 0, 0, 612, -4049, 55, 0, 0, 31 },
    { -53, 120, -53, 0, -2431, -2226, -2431, 0, 16, 0 },
    { -75, 120, 0, 0, -3441, -2220, -1, 0, 0, 0 },
    { 0, 120, -70, 0, 0, -129, 4093, 0, 31, 29 },
    { 0, 124, -70, 0, 0, -4054, 580, 0, 31, 31 },
    { 0, 120, -75, 0, 0, -2222, -3440, 0, 31, 0 },
    { 49, 120, -49, 0, -2894, -130, 2894, 0, 15, 29 },
    { 49, 124, -49, 0, -395, -4057, 395, 0, 15, 31 },
    { 53, 120, -53, 0, 2431, -2226, -2431, 0, 15, 0 },
    { 70, 120, 0, 0, -4093, -129, 0, 0, 0, 29 },
    { 70, 124, 0, 0, -580, -4054, 0, 0, 0, 31 },
    { 75, 120, 0, 0, 3440, -2222, 0, 0, 0, 0 },
    { 75, 120, 0, 0, 3440, -2222, 0, 0, 0, 1 },
    { 53, 120, 53, 0, 2431, -2226, 2431, 0, 15, 1 },
    { 65, 81, 65, 0, 2759, -1242, 2759, 0, 15, 15 },
    { 92, 81, 0, 0, 3904, -1238, 0, 0, 0, 15 },
    { 71, 45, 71, 0, 2878, 453, 2878, 0, 15, 31 },
    { 100, 45, 0, 0, 4070, 452, 0, 0, 0, 31 },
    { 0, 120, 75, 0, 0, -2222, 3440, 0, 0, 1 },
    { 0, 81, 92, 0, 0, -1238, 3904, 0, 0, 15 },
    { 0, 45, 100, 0, 0, 452, 4070, 0, 0, 31 },
    { 0, 120, 75, 0, 0, -2222, 3440, 0, 31, 1 },
    { -53, 120, 53, 0, -2436, -2204, 2445, 0, 15, 1 },
    { -65, 81, 65, 0, -2759, -1242, 2759, 0, 15, 15 },
    { 0, 81, 92, 0, 0, -1238, 3904, 0, 31, 15 },
    { -71, 45, 71, 0, -2878, 453, 2878, 0, 15, 31 },
    { 0, 45, 100, 0, 0, 452, 4070, 0, 31, 31 },
    { -75, 120, 0, 0, -3441, -2220, -1, 0, 0, 1 },
    { -92, 81, 0, 0, -3904, -1238, 0, 0, 0, 15 },
    { -100, 45, 0, 0, -4070, 452, 0, 0, 0, 31 },
    { -75, 120, 0, 0, -3441, -2220, -1, 0, 0, 2 },
    { -53, 120, -53, 0, -2431, -2226, -2431, 0, 15, 2 },
    { -65, 81, -65, 0, -2759, -1242, -2759, 0, 15, 16 },
    { -92, 81, 0, 0, -3904, -1238, 0, 0, 0, 16 },
    { -71, 45, -71, 0, -2878, 453, -2878, 0, 15, 31 },
    { -100, 45, 0, 0, -4070, 452, 0, 0, 0, 31 },
    { 0, 120, -75, 0, 0, -2222, -3440, 0, 0, 1 },
    { 0, 81, -92, 0, 0, -1238, -3904, 0, 0, 16 },
    { 0, 45, -100, 0, 0, 452, -4070, 0, 0, 31 },
    { 0, 120, -75, 0, 0, -2222, -3440, 0, 31, 1 },
    { 53, 120, -53, 0, 2431, -2226, -2431, 0, 15, 1 },
    { 65, 81, -65, 0, 2759, -1242, -2759, 0, 15, 15 },
    { 0, 81, -92, 0, 0, -1238, -3904, 0, 31, 15 },
    { 71, 45, -71, 0, 2878, 453, -2878, 0, 15, 31 },
    { 0, 45, -100, 0, 0, 452, -4070, 0, 31, 31 },
    { 75, 120, 0, 0, 3440, -2222, 0, 0, 0, 1 },
    { 92, 81, 0, 0, 3904, -1238, 0, 0, 0, 15 },
    { 100, 45, 0, 0, 4070, 452, 0, 0, 0, 31 },
    { 100, 45, 0, 0, 4070, 452, 0, 0, 0, 0 },
    { 71, 45, 71, 0, 2878, 453, 2878, 0, 16, 0 },
    { 62, 19, 62, 0, 2372, 2349, 2372, 0, 16, 10 },
    { 87, 19, 0, 0, 3358, 2345, 0, 0, 0, 10 },
    { 53, 7, 53, 0, 1702, 3313, 1702, 0, 16, 19 },
    { 75, 7, 0, 0, 2411, 3310, 0, 0, 0, 19 },
    { 0, 45, 100, 0, 0, 452, 4070, 0, 31, 0 },
    { 0, 19, 87, 0, 0, 2345, 3358, 0, 31, 10 },
    { 0, 7, 75, 0, 0, 3310, 2411, 0, 31, 19 },
    { -71, 45, 71, 0, -2878, 453, 2878, 0, 15, 0 },
    { -62, 19, 62, 0, -2372, 2349, 2372, 0, 15, 10 },
    { -53, 7, 53, 0, -1702, 3313, 1702, 0, 15, 19 },
    { -100, 45, 0, 0, -4070, 452, 0, 0, 0, 0 },
    { -87, 19, 0, 0, -3358, 2345, 0, 0, 0, 10 },
    { -75, 7, 0, 0, -2411, 3310, 0, 0, 0, 19 },
    { -100, 45, 0, 0, -4070, 452, 0, 0, 0, 1 },
    { -71, 45, -71, 0, -2878, 453, -2878, 0, 15, 1 },
    { -62, 19, -62, 0, -2372, 2349, -2372, 0, 15, 10 },
    { -87, 19, 0, 0, -3358, 2345, 0, 0, 0, 10 },
    { -53, 7, -53, 0, -1702, 3313, -1702, 0, 15, 19 },
    { -75, 7, 0, 0, -2411, 3310, 0, 0, 0, 19 },
    { 0, 45, -100, 0, 0, 452, -4070, 0, 0, 1 },
    { 0, 19, -87, 0, 0, 2345, -3358, 0, 0, 10 },
    { 0, 7, -75, 0, 0, 3310, -2411, 0, 0, 19 },
    { 0, 45, -100, 0, 0, 452, -4070, 0, 31, 0 },
    { 71, 45, -71, 0, 2878, 453, -2878, 0, 15, 0 },
    { 62, 19, -62, 0, 2372, 2349, -2372, 0, 15, 10 },
    { 0, 19, -87, 0, 0, 2345, -3358, 0, 31, 10 },
    { 53, 7, -53, 0, 1702, 3313, -1702, 0, 15, 19 },
    { 0, 7, -75, 0, 0, 3310, -2411, 0, 31, 19 },
    { 100, 45, 0, 0, 4070, 452, 0, 0, 0, 0 },
    { 87, 19, 0, 0, 3358, 2345, 0, 0, 0, 10 },
    { 75, 7, 0, 0, 2411, 3310, 0, 0, 0, 19 },
    { 75, 7, 0, 0, 2411, 3310, 0, 0, 0, 19 },
    { 53, 7, 53, 0, 1702, 3313, 1702, 0, 16, 19 },
    { 45, 2, 45, 0, 825, 3925, 825, 0, 16, 25 },
    { 64, 2, 0, 0, 1167, 3926, 0, 0, 0, 25 },
    { 0, 0, 0, 0, 0, 4096, 0, 0, 16, 31 },
    { 0, 0, 0, 0, 0, 4096, 0, 0, 0, 31 },
    { 0, 7, 75, 0, 0, 3310, 2411, 0, 31, 19 },
    { 0, 2, 64, 0, 0, 3926, 1167, 0, 31, 25 },
    { 0, 0, 0, 0, 0, 4096, 0, 0, 31, 31 },
    { -53, 7, 53, 0, -1702, 3313, 1702, 0, 15, 19 },
    { -45, 2, 45, 0, -825, 3925, 825, 0, 15, 25 },
    { 0, 0, 0, 0, 0, 4096, 0, 0, 15, 31 },
    { -75, 7, 0, 0, -2411, 3310, 0, 0, 0, 19 },
    { -64, 2, 0, 0, -1167, 3926, 0, 0, 0, 25 },
    { 0, 0, 0, 0, 0, 4096, 0, 0, 0, 31 },
    { -75, 7, 0, 0, -2411, 3310, 0, 0, 0, 19 },
    { -53, 7, -53, 0, -1702, 3313, -1702, 0, 16, 19 },
    { -45, 2, -45, 0, -825, 3925, -825, 0, 16, 25 },
    { -64, 2, 0, 0, -1167, 3926, 0, 0, 0, 25 },
    { 0, 7, -75, 0, 0, 3310, -2411, 0, 31, 19 },
    { 0, 2, -64, 0, 0, 3926, -1167, 0, 31, 25 },
    { 53, 7, -53, 0, 1702, 3313, -1702, 0, 15, 19 },
    { 45, 2, -45, 0, 825, 3925, -825, 0, 15, 25 },
    { 75, 7, 0, 0, 2411, 3310, 0, 0, 0, 19 },
    { 64, 2, 0, 0, 1167, 3926, 0, 0, 0, 25 },
    { -80, 101, 0, 0, 157, 4092, -12, 0, 31, 0 },
    { -77, 106, 11, 0, -74, -1117, 3940, 0, 23, 0 },
    { -125, 104, 11, 0, -77, -838, 4008, 0, 23, 8 },
    { -120, 99, 0, 0, 1153, 3929, -59, 0, 31, 8 },
    { -142, 90, 11, 0, -1203, -517, 3880, 0, 23, 16 },
    { -135, 90, 0, 0, 3818, 1470, -172, 0, 31, 16 },
    { -75, 112, 0, 0, -193, -4091, 5, 0, 15, 0 },
    { -131, 109, 0, 0, -1810, -3673, 51, 0, 15, 8 },
    { -150, 90, 0, 0, -4038, -683, 43, 0, 15, 16 },
    { -77, 106, -11, 0, -72, -1099, -3944, 0, 7, 0 },
    { -125, 104, -11, 0, -39, -731, -4029, 0, 7, 8 },
    { -142, 90, -11, 0, -1120, -415, -3917, 0, 7, 16 },
    { -80, 101, 0, 0, 157, 4092, -12, 0, 0, 0 },
    { -120, 99, 0, 0, 1153, 3929, -59, 0, 0, 8 },
    { -135, 90, 0, 0, 3818, 1470, -172, 0, 0, 16 },
    { -131, 62, 11, 0, -498, 408, 4044, 0, 23, 24 },
    { -126, 67, 0, 0, 3349, -2357, -56, 0, 31, 24 },
    { -97, 37, 11, 0, -1372, 2073, 3254, 0, 23, 31 },
    { -100, 45, 0, 0, 2545, -3206, -120, 0, 31, 31 },
    { -136, 57, 0, 0, -3173, 2589, 32, 0, 15, 24 },
    { -95, 30, 0, 0, -2339, 3362, 31, 0, 15, 31 },
    { -131, 62, -11, 0, -432, 364, -4056, 0, 7, 24 },
    { -97, 37, -11, 0, -1232, 1994, -3358, 0, 7, 31 },
    { -126, 67, 0, 0, 3349, -2357, -56, 0, 0, 24 },
    { -100, 45, 0, 0, 2545, -3206, -120, 0, 0, 31 },
    { 85, 71, 0, 0, -1991, -3579, -30, 0, 15, 31 },
    { 85, 50, 24, 0, 1339, 975, 3745, 0, 23, 31 },
    { 126, 81, 17, 0, 653, -100, 4042, 0, 23, 18 },
    { 119, 90, 0, 0, -2854, -2935, 96, 0, 15, 18 },
    { 150, 120, 9, 0, -25, -1561, 3786, 0, 23, 4 },
    { 135, 120, 0, 0, -2963, -2818, 230, 0, 15, 4 },
    { 85, 30, 0, 0, 2677, 3099, -10, 0, 31, 31 },
    { 134, 72, 0, 0, 3144, 2623, -70, 0, 31, 18 },
    { 165, 120, 0, 0, 2648, 3119, -183, 0, 31, 4 },
    { 85, 30, 0, 0, 2677, 3099, -10, 0, 0, 31 },
    { 85, 50, -24, 0, 1415, 959, -3721, 0, 7, 31 },
    { 126, 81, -17, 0, 755, -33, -4025, 0, 7, 18 },
    { 134, 72, 0, 0, 3144, 2623, -70, 0, 0, 18 },
    { 150, 120, -9, 0, 207, -1292, -3881, 0, 7, 4 },
    { 165, 120, 0, 0, 2648, 3119, -183, 0, 0, 4 },
    { 156, 123, 7, 0, 949, -3192, 2384, 0, 23, 2 },
    { 141, 122, 0, 0, 170, -4082, 288, 0, 15, 2 },
    { 150, 120, 5, 0, 1293, 186, -3881, 0, 23, 0 },
    { 140, 120, 0, 0, 3690, 1775, 55, 0, 15, 0 },
    { 171, 123, 0, 0, 3904, -1227, -152, 0, 31, 2 },
    { 160, 120, 0, 0, -1318, -3878, -13, 0, 31, 0 },
    { 156, 123, -7, 0, 1497, -2987, -2368, 0, 7, 2 },
    { 171, 123, 0, 0, 3904, -1227, -152, 0, 0, 2 },
    { 150, 120, -5, 0, 1390, 480, 3822, 0, 7, 0 },
    { 160, 120, 0, 0, -1318, -3878, -13, 0, 0, 0 },
    { 0, 157, 0, 0, 0, -4096, 0, 0, 31, 0 },
    { 0, 157, 0, 0, 0, -4096, 0, 0, 23, 0 },
    { 11, 149, 11, 0, 2774, -1175, 2774, 0, 23, 16 },
    { 16, 149, 0, 0, 3922, -1180, 0, 0, 31, 16 },
    { 7, 135, 7, 0, 2439, -2210, 2437, 0, 23, 31 },
    { 10, 135, 0, 0, 3455, -2199, 1, 0, 31, 31 },
    { 0, 157, 0, 0, 0, -4096, 0, 0, 15, 0 },
    { 0, 149, 16, 0, 0, -1180, 3922, 0, 15, 16 },
    { 0, 135, 10, 0, -1, -2199, 3455, 0, 15, 31 },
    { 0, 157, 0, 0, 0, -4096, 0, 0, 7, 0 },
    { -11, 149, 11, 0, -2774, -1175, 2774, 0, 7, 16 },
    { -7, 135, 7, 0, -2437, -2210, 2439, 0, 7, 31 },
    { 0, 157, 0, 0, 0, -4096, 0, 0, 0, 0 },
    { -16, 149, 0, 0, -3922, -1180, 0, 0, 0, 16 },
    { -10, 135, 0, 0, -3455, -2199, -1, 0, 0, 31 },
    { -11, 149, -11, 0, -2774, -1175, -2774, 0, 23, 16 },
    { -16, 149, 0, 0, -3922, -1180, 0, 0, 31, 16 },
    { -7, 135, -7, 0, -2439, -2210, -2437, 0, 23, 31 },
    { -10, 135, 0, 0, -3455, -2199, -1, 0, 31, 31 },
    { 0, 149, -16, 0, 0, -1180, -3922, 0, 15, 16 },
    { 0, 135, -10, 0, 1, -2199, -3455, 0, 15, 31 },
    { 11, 149, -11, 0, 2774, -1175, -2774, 0, 7, 16 },
    { 7, 135, -7, 0, 2437, -2210, -2439, 0, 7, 31 },
    { 16, 149, 0, 0, 3922, -1180, 0, 0, 0, 16 },
    { 10, 135, 0, 0, 3455, -2199, 1, 0, 0, 31 },
    { 10, 135, 0, 0, 3455, -2199, 1, 0, 31, 0 },
    { 7, 135, 7, 0, 2439, -2210, 2437, 0, 23, 0 },
    { 29, 127, 29, 0, 795, -3938, 795, 0, 23, 16 },
    { 41, 127, 0, 0, 1128, -3937, 0, 0, 31, 16 },
    { 46, 120, 46, 0, 868, -3907, 868, 0, 23, 31 },
    { 65, 120, 0, 0, 1233, -3905, 0, 0, 31, 31 },
    { 0, 135, 10, 0, -1, -2199, 3455, 0, 15, 0 },
    { 0, 127, 41, 0, 0, -3937, 1128, 0, 15, 16 },
    { 0, 120, 65, 0, 0, -3905, 1233, 0, 15, 31 },
    { -7, 135, 7, 0, -2437, -2210, 2439, 0, 7, 0 },
    { -29, 127, 29, 0, -795, -3938, 795, 0, 7, 16 },
    { -46, 120, 46, 0, -868, -3907, 868, 0, 7, 31 },
    { -10, 135, 0, 0, -3455, -2199, -1, 0, 0, 0 },
    { -41, 127, 0, 0, -1128, -3937, 0, 0, 0, 16 },
    { -65, 120, 0, 0, -1233, -3905, 0, 0, 0, 31 },
    { -10, 135, 0, 0, -3455, -2199, -1, 0, 31, 0 },
    { -7, 135, -7, 0, -2439, -2210, -2437, 0, 23, 0 },
    { -29, 127, -29, 0, -795, -3938, -795, 0, 23, 16 },
    { -41, 127, 0, 0, -1128, -3937, 0, 0, 31, 16 },
    { -46, 120, -46, 0, -868, -3907, -868, 0, 23, 31 },
    { -65, 120, 0, 0, -1233, -3905, 0, 0, 31, 31 },
    { 0, 135, -10, 0, 1, -2199, -3455, 0, 15, 0 },
    { 0, 127, -41, 0, 0, -3937, -1128, 0, 15, 16 },
    { 0, 120, -65, 0, 0, -3905, -1233, 0, 15, 31 },
    { 7, 135, -7, 0, 2437, -2210, -2439, 0, 7, 0 },
    { 29, 127, -29, 0, 795, -3938, -795, 0, 7, 16 },
    { 46, 120, -46, 0, 868, -3907, -868, 0, 7, 31 },
    { 10, 135, 0, 0, 3455, -2199, 1, 0, 0, 0 },
    { 41, 127, 0, 0, 1128, -3937, 0, 0, 0, 16 },
    { 65, 120, 0, 0, 1233, -3905, 0, 0, 0, 31 }
};
static u_short Teapot001_Indices[] = {
    0, 2, 1, 2, 0, 3, 3, 4, 2, 4, 3, 5, 1, 7, 6, 7, 1, 2, 2, 8, 7, 8, 2, 4, 6, 10, 9, 10, 6, 7, 7, 11, 10, 
    11, 7, 8, 9, 13, 12, 13, 9, 10, 10, 14, 13, 14, 10, 11, 15, 17, 16, 17, 15, 18, 18, 19, 17, 19, 18, 20, 16, 22, 21, 22, 16, 
    17, 17, 23, 22, 23, 17, 19, 21, 25, 24, 25, 21, 22, 22, 26, 25, 26, 22, 23, 24, 28, 27, 28, 24, 25, 25, 29, 28, 29, 25, 26, 30, 
    32, 31, 32, 30, 33, 33, 34, 32, 34, 33, 35, 31, 37, 36, 37, 31, 32, 32, 38, 37, 38, 32, 34, 39, 41, 40, 41, 39, 42, 42, 43, 41, 
    43, 42, 44, 40, 46, 45, 46, 40, 41, 41, 47, 46, 47, 41, 43, 48, 50, 49, 50, 48, 51, 51, 52, 50, 52, 51, 53, 49, 55, 54, 55, 49, 
    50, 50, 56, 55, 56, 50, 52, 57, 59, 58, 59, 57, 60, 60, 61, 59, 61, 60, 62, 58, 64, 63, 64, 58, 59, 59, 65, 64, 65, 59, 61, 66, 
    68, 67, 68, 66, 69, 69, 70, 68, 70, 69, 71, 67, 73, 72, 73, 67, 68, 68, 74, 73, 74, 68, 70, 72, 76, 75, 76, 72, 73, 73, 77, 76, 
    77, 73, 74, 75, 79, 78, 79, 75, 76, 76, 80, 79, 80, 76, 77, 81, 83, 82, 83, 81, 84, 84, 85, 83, 85, 84, 86, 82, 88, 87, 88, 82, 
    83, 83, 89, 88, 89, 83, 85, 90, 92, 91, 92, 90, 93, 93, 94, 92, 94, 93, 95, 91, 97, 96, 97, 91, 92, 92, 98, 97, 98, 92, 94, 99, 
    101, 100, 101, 99, 102, 102, 103, 101, 103, 102, 104, 100, 106, 105, 106, 100, 101, 101, 107, 106, 107, 101, 103, 105, 109, 108, 109, 105, 106, 106, 110, 109, 
    110, 106, 107, 108, 112, 111, 112, 108, 109, 109, 113, 112, 113, 109, 110, 114, 116, 115, 116, 114, 117, 117, 103, 116, 103, 117, 104, 115, 119, 118, 119, 115, 
    116, 116, 107, 119, 107, 116, 103, 118, 121, 120, 121, 118, 119, 119, 110, 121, 110, 119, 107, 120, 123, 122, 123, 120, 121, 121, 113, 123, 113, 121, 110, 124, 
    126, 125, 126, 124, 127, 127, 128, 126, 128, 127, 129, 125, 131, 130, 131, 125, 126, 126, 132, 131, 132, 126, 128, 130, 134, 133, 134, 130, 131, 131, 135, 134, 
    135, 131, 132, 133, 137, 136, 137, 133, 134, 134, 138, 137, 138, 134, 135, 129, 139, 128, 139, 129, 140, 140, 141, 139, 141, 140, 142, 128, 143, 132, 143, 128, 
    139, 139, 144, 143, 144, 139, 141, 132, 145, 135, 145, 132, 143, 143, 146, 145, 146, 143, 144, 135, 147, 138, 147, 135, 145, 145, 148, 147, 148, 145, 146, 149, 
    151, 150, 151, 149, 152, 152, 153, 151, 153, 152, 154, 150, 156, 155, 156, 150, 151, 151, 157, 156, 157, 151, 153, 158, 160, 159, 160, 158, 161, 161, 162, 160, 
    162, 161, 163, 159, 152, 149, 152, 159, 160, 160, 154, 152, 154, 160, 162, 154, 164, 153, 164, 154, 165, 165, 166, 164, 166, 165, 167, 153, 168, 157, 168, 153, 
    164, 164, 169, 168, 169, 164, 166, 163, 170, 162, 170, 163, 171, 171, 172, 170, 172, 171, 173, 162, 165, 154, 165, 162, 170, 170, 167, 165, 167, 170, 172, 174, 
    176, 175, 176, 174, 177, 177, 178, 176, 178, 177, 179, 175, 181, 180, 181, 175, 176, 176, 182, 181, 182, 176, 178, 180, 184, 183, 184, 180, 181, 181, 185, 184, 
    185, 181, 182, 183, 187, 186, 187, 183, 184, 184, 188, 187, 188, 184, 185, 174, 189, 175, 189, 174, 190, 190, 191, 189, 191, 190, 192, 175, 193, 180, 193, 175, 
    189, 189, 194, 193, 194, 189, 191, 180, 195, 183, 195, 180, 193, 193, 196, 195, 196, 193, 194, 183, 197, 186, 197, 183, 195, 195, 198, 197, 198, 195, 196, 199, 
    201, 200, 201, 199, 202, 202, 203, 201, 203, 202, 204, 200, 206, 205, 206, 200, 201, 201, 207, 206, 207, 201, 203, 205, 209, 208, 209, 205, 206, 206, 210, 209, 
    210, 206, 207, 208, 212, 211, 212, 208, 209, 209, 213, 212, 213, 209, 210, 214, 216, 215, 216, 214, 217, 217, 218, 216, 218, 217, 219, 215, 221, 220, 221, 215, 
    216, 216, 222, 221, 222, 216, 218, 220, 224, 223, 224, 220, 221, 221, 225, 224, 225, 221, 222, 223, 227, 226, 227, 223, 224, 224, 228, 227, 228, 224, 225
};
static SDC_Mesh3D Teapot001_Mesh = {Teapot001_Vertices, Teapot001_Indices, NULL, 768, 229, POLIGON_VERTEX_TEXTURED_NORMAL};
#endif