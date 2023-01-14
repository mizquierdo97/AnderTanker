#ifndef _RIGHT_EYE_MESH_
#define _RIGHT_EYE_MESH_

#include <types.h>
#include "dcRender.h"

static SDC_VertexTexturedNormal right_eye_Vertices[] = {
    { 7, 76, 1, 0, -15, -3912, -1213, 0, 31, 0 },
    { 7, 76, -2, 0, -15, -3912, -1213, 0, 0, 0 },
    { 3, 77, 1, 0, -15, -3912, -1213, 0, 31, 16 },
    { 3, 77, -2, 0, -15, -3912, -1213, 0, 0, 16 },
    { 1, 70, 3, 0, 4077, -382, -72, 0, 31, 16 },
    { 8, 65, 3, 0, 4080, -353, -52, 0, 31, 0 },
    { 9, 70, 3, 0, 4077, -382, -72, 0, 31, 0 },
    { 2, 65, 3, 0, 4080, -353, -52, 0, 31, 16 },
    { 9, 70, -4, 0, -45, -58, -4095, 0, 0, 0 },
    { 8, 65, 3, 0, -42, 501, -4064, 0, 31, 0 },
    { 8, 65, -4, 0, -42, 501, -4064, 0, 0, 0 },
    { 9, 70, 3, 0, -45, -58, -4095, 0, 31, 0 },
    { 7, 70, -2, 0, -4043, -650, 14, 0, 0, 0 },
    { 3, 67, -3, 0, -4055, -570, 84, 0, 0, 16 },
    { 2, 70, -2, 0, -4043, -653, 11, 0, 0, 16 },
    { 7, 67, -3, 0, -4055, -570, 84, 0, 0, 0 },
    { 1, 70, 3, 0, 45, 27, 4095, 0, 31, 16 },
    { 2, 65, -4, 0, 42, 498, 4065, 0, 0, 16 },
    { 2, 65, 3, 0, 42, 498, 4065, 0, 31, 16 },
    { 1, 70, -4, 0, 45, 27, 4095, 0, 0, 16 },
    { 2, 76, 2, 0, 3767, -1547, -430, 0, 31, 16 },
    { 8, 74, 2, 0, 3907, -1186, -322, 0, 31, 0 },
    { 7, 76, 1, 0, 2971, -2709, -779, 0, 31, 0 },
    { 3, 77, 1, 0, 2971, -2709, -779, 0, 31, 16 },
    { 8, 74, 2, 0, -46, -1311, -3880, 0, 31, 0 },
    { 8, 74, -3, 0, -46, -1311, -3880, 0, 0, 0 },
    { 7, 76, -2, 0, -41, -2307, -3383, 0, 0, 0 },
    { 7, 76, 1, 0, -41, -2307, -3383, 0, 31, 0 },
    { 2, 76, -3, 0, -3820, -1418, -405, 0, 0, 16 },
    { 7, 76, -2, 0, -2986, -2710, -713, 0, 0, 0 },
    { 8, 74, -3, 0, -3962, -1033, -102, 0, 0, 0 },
    { 3, 77, -2, 0, -2986, -2710, -713, 0, 0, 16 },
    { 2, 76, -3, 0, 46, -1291, 3886, 0, 0, 16 },
    { 2, 76, 2, 0, 46, -1291, 3886, 0, 31, 16 },
    { 3, 77, 1, 0, 38, -2600, 3164, 0, 31, 16 },
    { 3, 77, -2, 0, 38, -2600, 3164, 0, 0, 16 },
    { 8, 65, -4, 0, -4092, -142, -68, 0, 0, 0 },
    { 2, 65, -4, 0, -4090, -139, 156, 0, 0, 16 },
    { 3, 66, -4, 0, -4086, -200, 193, 0, 0, 16 },
    { 7, 66, -4, 0, -4088, -205, -131, 0, 0, 0 },
    { 1, 70, -4, 0, -4079, -368, 0, 0, 0, 16 },
    { 2, 70, -4, 0, -4079, -368, 0, 0, 0, 16 },
    { 3, 74, -3, 0, -4089, -186, -122, 0, 0, 16 },
    { 7, 73, -3, 0, -4075, -310, 271, 0, 0, 0 },
    { 9, 70, -4, 0, -4070, -456, 57, 0, 0, 0 },
    { 8, 70, -4, 0, -4069, -459, 71, 0, 0, 0 },
    { 7, 72, -2, 0, -4028, -736, -61, 0, 0, 0 },
    { 3, 74, -2, 0, -4028, -736, -61, 0, 0, 16 },
    { 7, 67, -3, 0, -1686, -3732, 38, 0, 0, 0 },
    { 3, 66, -4, 0, -1686, -3732, 38, 0, 0, 16 },
    { 3, 67, -3, 0, -1686, -3732, 38, 0, 0, 16 },
    { 7, 66, -4, 0, -1686, -3732, 38, 0, 0, 0 },
    { 3, 67, -3, 0, -1233, -636, -3853, 0, 0, 16 },
    { 2, 70, -4, 0, -1233, -636, -3853, 0, 0, 16 },
    { 2, 70, -2, 0, -1233, -636, -3853, 0, 0, 16 },
    { 3, 66, -4, 0, -1233, -636, -3853, 0, 0, 16 },
    { 2, 70, -4, 0, -1180, 335, -3907, 0, 0, 16 },
    { 3, 74, -2, 0, -1180, 335, -3907, 0, 0, 16 },
    { 2, 70, -2, 0, -1180, 335, -3907, 0, 0, 16 },
    { 3, 74, -3, 0, -1180, 335, -3907, 0, 0, 16 },
    { 7, 72, -2, 0, -1592, 3523, 1350, 0, 0, 0 },
    { 3, 74, -2, 0, -1592, 3523, 1350, 0, 0, 16 },
    { 3, 74, -3, 0, -1592, 3523, 1350, 0, 0, 16 },
    { 7, 73, -3, 0, -1592, 3523, 1350, 0, 0, 0 },
    { 7, 70, -2, 0, -1217, 541, 3873, 0, 0, 0 },
    { 7, 72, -2, 0, -1217, 541, 3873, 0, 0, 0 },
    { 7, 73, -3, 0, -1217, 541, 3873, 0, 0, 0 },
    { 8, 70, -4, 0, -1217, 541, 3873, 0, 0, 0 },
    { 7, 67, -3, 0, -1232, -630, 3855, 0, 0, 0 },
    { 7, 70, -2, 0, -1232, -630, 3855, 0, 0, 0 },
    { 8, 70, -4, 0, -1232, -630, 3855, 0, 0, 0 },
    { 7, 66, -4, 0, -1232, -630, 3855, 0, 0, 0 }
};
static u_short right_eye_Indices[] = {
    0, 2, 1, 1, 2, 3, 4, 6, 5, 5, 7, 4, 8, 10, 9, 9, 11, 8, 12, 14, 13, 13, 15, 12, 16, 18, 17, 17, 19, 16, 20, 22, 21, 
    20, 23, 22, 24, 26, 25, 24, 27, 26, 28, 30, 29, 29, 31, 28, 32, 34, 33, 32, 35, 34, 36, 38, 37, 36, 39, 38, 38, 41, 40, 37, 38, 
    40, 30, 28, 42, 42, 43, 30, 30, 43, 44, 43, 45, 44, 20, 21, 4, 21, 6, 4, 24, 25, 11, 25, 8, 11, 46, 47, 14, 14, 12, 46, 32, 
    33, 19, 33, 16, 19, 40, 42, 28, 40, 41, 42, 39, 44, 45, 44, 39, 36, 48, 50, 49, 49, 51, 48, 52, 54, 53, 53, 55, 52, 56, 58, 57, 
    57, 59, 56, 60, 62, 61, 62, 60, 63, 64, 66, 65, 66, 64, 67, 68, 70, 69, 70, 68, 71
};
static SDC_Mesh3D right_eye_Mesh = {right_eye_Vertices, right_eye_Indices, NULL, 150, 72, POLIGON_VERTEX_TEXTURED_NORMAL};
#endif