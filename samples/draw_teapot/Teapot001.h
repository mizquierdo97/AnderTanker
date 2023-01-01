#ifndef _TEAPOT001_MESH_
#define _TEAPOT001_MESH_

#include <types.h>
#include "dcRender.h"

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-braces"

static SDC_VertexColor Teapot001_Vertices[] = {
    { 70, -120, 0, 0, 73, 69, 38, 0 },
    { 49, -120, 49, 0, 67, 185, 142, 0 },
    { 49, -124, 49, 0, 250, 155, 205, 0 },
    { 70, -124, 0, 0, 50, 243, 12, 0 },
    { 53, -120, 53, 0, 137, 26, 122, 0 },
    { 75, -120, 0, 0, 20, 20, 111, 0 },
    { 0, -120, 70, 0, 66, 145, 192, 0 },
    { 0, -124, 70, 0, 151, 235, 16, 0 },
    { 0, -120, 75, 0, 66, 48, 97, 0 },
    { -51, -120, 49, 0, 148, 35, 200, 0 },
    { -50, -124, 49, 0, 75, 80, 151, 0 },
    { -53, -120, 53, 0, 72, 77, 227, 0 },
    { -70, -120, 0, 0, 216, 122, 151, 0 },
    { -70, -124, 0, 0, 248, 208, 102, 0 },
    { -75, -120, 0, 0, 232, 37, 173, 0 },
    { -49, -120, -49, 0, 1, 227, 184, 0 },
    { -49, -124, -49, 0, 234, 236, 183, 0 },
    { -53, -120, -53, 0, 245, 39, 79, 0 },
    { 0, -120, -70, 0, 89, 174, 163, 0 },
    { 0, -124, -70, 0, 139, 36, 36, 0 },
    { 0, -120, -75, 0, 153, 111, 184, 0 },
    { 49, -120, -49, 0, 244, 232, 82, 0 },
    { 49, -124, -49, 0, 243, 61, 112, 0 },
    { 53, -120, -53, 0, 208, 72, 37, 0 },
    { 65, -81, 65, 0, 215, 128, 93, 0 },
    { 92, -81, 0, 0, 90, 197, 132, 0 },
    { 71, -45, 71, 0, 98, 154, 56, 0 },
    { 100, -45, 0, 0, 44, 89, 92, 0 },
    { 0, -81, 92, 0, 254, 106, 239, 0 },
    { 0, -45, 100, 0, 135, 218, 122, 0 },
    { -65, -81, 65, 0, 210, 228, 133, 0 },
    { -71, -45, 71, 0, 191, 228, 99, 0 },
    { -92, -81, 0, 0, 29, 180, 114, 0 },
    { -100, -45, 0, 0, 251, 197, 80, 0 },
    { -65, -81, -65, 0, 64, 176, 139, 0 },
    { -71, -45, -71, 0, 98, 205, 227, 0 },
    { 0, -81, -92, 0, 181, 79, 132, 0 },
    { 0, -45, -100, 0, 201, 250, 77, 0 },
    { 65, -81, -65, 0, 40, 132, 119, 0 },
    { 71, -45, -71, 0, 103, 14, 240, 0 },
    { 62, -19, 62, 0, 1, 7, 184, 0 },
    { 87, -19, 0, 0, 202, 178, 31, 0 },
    { 53, -7, 53, 0, 196, 4, 10, 0 },
    { 75, -7, 0, 0, 90, 192, 180, 0 },
    { 0, -19, 87, 0, 211, 207, 39, 0 },
    { 0, -7, 75, 0, 184, 253, 142, 0 },
    { -62, -19, 62, 0, 54, 64, 238, 0 },
    { -53, -7, 53, 0, 226, 207, 251, 0 },
    { -87, -19, 0, 0, 180, 238, 206, 0 },
    { -75, -7, 0, 0, 35, 122, 42, 0 },
    { -62, -19, -62, 0, 168, 28, 37, 0 },
    { -53, -7, -53, 0, 248, 184, 163, 0 },
    { 0, -19, -87, 0, 221, 19, 61, 0 },
    { 0, -7, -75, 0, 91, 157, 63, 0 },
    { 62, -19, -62, 0, 214, 165, 204, 0 },
    { 53, -7, -53, 0, 167, 151, 4, 0 },
    { 45, -2, 45, 0, 158, 232, 125, 0 },
    { 64, -2, 0, 0, 215, 21, 26, 0 },
    { 0, 0, 0, 0, 13, 209, 61, 0 },
    { 0, -2, 64, 0, 225, 132, 90, 0 },
    { -45, -2, 45, 0, 220, 173, 184, 0 },
    { -64, -2, 0, 0, 47, 194, 111, 0 },
    { -45, -2, -45, 0, 126, 36, 81, 0 },
    { 0, -2, -64, 0, 71, 124, 62, 0 },
    { 45, -2, -45, 0, 54, 94, 158, 0 },
    { -80, -101, 0, 0, 14, 184, 111, 0 },
    { -77, -106, 11, 0, 10, 237, 145, 0 },
    { -125, -104, 11, 0, 215, 65, 177, 0 },
    { -120, -99, 0, 0, 122, 240, 251, 0 },
    { -142, -90, 11, 0, 112, 75, 203, 0 },
    { -135, -90, 0, 0, 215, 227, 223, 0 },
    { -75, -112, 0, 0, 107, 15, 211, 0 },
    { -131, -109, 0, 0, 241, 81, 133, 0 },
    { -150, -90, 0, 0, 227, 162, 197, 0 },
    { -77, -106, -11, 0, 207, 163, 191, 0 },
    { -125, -104, -11, 0, 236, 120, 75, 0 },
    { -142, -90, -11, 0, 62, 124, 210, 0 },
    { -131, -62, 11, 0, 37, 83, 8, 0 },
    { -126, -67, 0, 0, 106, 92, 67, 0 },
    { -97, -37, 11, 0, 50, 196, 229, 0 },
    { -136, -57, 0, 0, 64, 229, 1, 0 },
    { -95, -30, 0, 0, 104, 239, 93, 0 },
    { -131, -62, -11, 0, 82, 208, 95, 0 },
    { -97, -37, -11, 0, 249, 73, 8, 0 },
    { 85, -71, 0, 0, 201, 45, 123, 0 },
    { 85, -50, 24, 0, 132, 154, 17, 0 },
    { 126, -81, 17, 0, 80, 195, 15, 0 },
    { 119, -90, 0, 0, 205, 97, 107, 0 },
    { 150, -120, 9, 0, 147, 41, 236, 0 },
    { 135, -120, 0, 0, 235, 4, 249, 0 },
    { 85, -30, 0, 0, 139, 155, 160, 0 },
    { 134, -72, 0, 0, 112, 38, 71, 0 },
    { 165, -120, 0, 0, 47, 214, 190, 0 },
    { 85, -50, -24, 0, 161, 236, 20, 0 },
    { 126, -81, -17, 0, 128, 204, 6, 0 },
    { 150, -120, -9, 0, 128, 128, 89, 0 },
    { 156, -123, 7, 0, 253, 188, 76, 0 },
    { 141, -122, 0, 0, 143, 128, 143, 0 },
    { 150, -120, 5, 0, 204, 206, 128, 0 },
    { 140, -120, 0, 0, 122, 35, 120, 0 },
    { 171, -123, 0, 0, 84, 201, 18, 0 },
    { 160, -120, 0, 0, 114, 42, 209, 0 },
    { 156, -123, -7, 0, 164, 177, 150, 0 },
    { 150, -120, -5, 0, 217, 168, 27, 0 },
    { 0, -157, 0, 0, 221, 65, 1, 0 },
    { 11, -149, 11, 0, 58, 202, 192, 0 },
    { 16, -149, 0, 0, 153, 150, 12, 0 },
    { 7, -135, 7, 0, 223, 73, 126, 0 },
    { 10, -135, 0, 0, 229, 48, 213, 0 },
    { 0, -149, 16, 0, 159, 207, 202, 0 },
    { 0, -135, 10, 0, 127, 152, 232, 0 },
    { -11, -149, 11, 0, 84, 235, 221, 0 },
    { -7, -135, 7, 0, 23, 25, 131, 0 },
    { -16, -149, 0, 0, 198, 167, 42, 0 },
    { -10, -135, 0, 0, 27, 0, 181, 0 },
    { -11, -149, -11, 0, 75, 9, 95, 0 },
    { -7, -135, -7, 0, 91, 53, 151, 0 },
    { 0, -149, -16, 0, 165, 151, 170, 0 },
    { 0, -135, -10, 0, 230, 182, 122, 0 },
    { 11, -149, -11, 0, 183, 31, 41, 0 },
    { 7, -135, -7, 0, 224, 0, 52, 0 },
    { 29, -127, 29, 0, 23, 220, 4, 0 },
    { 41, -127, 0, 0, 29, 86, 53, 0 },
    { 46, -120, 46, 0, 86, 52, 196, 0 },
    { 65, -120, 0, 0, 136, 0, 238, 0 },
    { 0, -127, 41, 0, 72, 172, 149, 0 },
    { 0, -120, 65, 0, 201, 216, 69, 0 },
    { -29, -127, 29, 0, 201, 156, 69, 0 },
    { -46, -120, 46, 0, 159, 99, 192, 0 },
    { -41, -127, 0, 0, 231, 112, 140, 0 },
    { -65, -120, 0, 0, 159, 190, 128, 0 },
    { -29, -127, -29, 0, 224, 9, 81, 0 },
    { -46, -120, -46, 0, 196, 122, 93, 0 },
    { 0, -127, -41, 0, 78, 101, 187, 0 },
    { 0, -120, -65, 0, 72, 39, 126, 0 },
    { 29, -127, -29, 0, 94, 20, 253, 0 },
    { 46, -120, -46, 0, 81, 26, 138, 0 }
};
static u_short Teapot001_Indices[] = {
    0, 1, 2, 2, 3, 0, 3, 2, 4, 4, 5, 3, 1, 6, 7, 7, 2, 1, 2, 7, 8, 8, 4, 2, 6, 9, 10, 10, 7, 6, 7, 10, 11, 
    11, 8, 7, 9, 12, 13, 13, 10, 9, 10, 13, 14, 14, 11, 10, 12, 15, 16, 16, 13, 12, 13, 16, 17, 17, 14, 13, 15, 18, 19, 19, 16, 
    15, 16, 19, 20, 20, 17, 16, 18, 21, 22, 22, 19, 18, 19, 22, 23, 23, 20, 19, 21, 0, 3, 3, 22, 21, 22, 3, 5, 5, 23, 22, 5, 
    4, 24, 24, 25, 5, 25, 24, 26, 26, 27, 25, 4, 8, 28, 28, 24, 4, 24, 28, 29, 29, 26, 24, 8, 11, 30, 30, 28, 8, 28, 30, 31, 
    31, 29, 28, 11, 14, 32, 32, 30, 11, 30, 32, 33, 33, 31, 30, 14, 17, 34, 34, 32, 14, 32, 34, 35, 35, 33, 32, 17, 20, 36, 36, 34, 
    17, 34, 36, 37, 37, 35, 34, 20, 23, 38, 38, 36, 20, 36, 38, 39, 39, 37, 36, 23, 5, 25, 25, 38, 23, 38, 25, 27, 27, 39, 38, 27, 
    26, 40, 40, 41, 27, 41, 40, 42, 42, 43, 41, 26, 29, 44, 44, 40, 26, 40, 44, 45, 45, 42, 40, 29, 31, 46, 46, 44, 29, 44, 46, 47, 
    47, 45, 44, 31, 33, 48, 48, 46, 31, 46, 48, 49, 49, 47, 46, 33, 35, 50, 50, 48, 33, 48, 50, 51, 51, 49, 48, 35, 37, 52, 52, 50, 
    35, 50, 52, 53, 53, 51, 50, 37, 39, 54, 54, 52, 37, 52, 54, 55, 55, 53, 52, 39, 27, 41, 41, 54, 39, 54, 41, 43, 43, 55, 54, 43, 
    42, 56, 56, 57, 43, 57, 56, 58, 58, 58, 57, 42, 45, 59, 59, 56, 42, 56, 59, 58, 58, 58, 56, 45, 47, 60, 60, 59, 45, 59, 60, 58, 
    58, 58, 59, 47, 49, 61, 61, 60, 47, 60, 61, 58, 58, 58, 60, 49, 51, 62, 62, 61, 49, 61, 62, 58, 58, 58, 61, 51, 53, 63, 63, 62, 
    51, 62, 63, 58, 58, 58, 62, 53, 55, 64, 64, 63, 53, 63, 64, 58, 58, 58, 63, 55, 43, 57, 57, 64, 55, 64, 57, 58, 58, 58, 64, 65, 
    66, 67, 67, 68, 65, 68, 67, 69, 69, 70, 68, 66, 71, 72, 72, 67, 66, 67, 72, 73, 73, 69, 67, 71, 74, 75, 75, 72, 71, 72, 75, 76, 
    76, 73, 72, 74, 65, 68, 68, 75, 74, 75, 68, 70, 70, 76, 75, 70, 69, 77, 77, 78, 70, 78, 77, 79, 79, 33, 78, 69, 73, 80, 80, 77, 
    69, 77, 80, 81, 81, 79, 77, 73, 76, 82, 82, 80, 73, 80, 82, 83, 83, 81, 80, 76, 70, 78, 78, 82, 76, 82, 78, 33, 33, 83, 82, 84, 
    85, 86, 86, 87, 84, 87, 86, 88, 88, 89, 87, 85, 90, 91, 91, 86, 85, 86, 91, 92, 92, 88, 86, 90, 93, 94, 94, 91, 90, 91, 94, 95, 
    95, 92, 91, 93, 84, 87, 87, 94, 93, 94, 87, 89, 89, 95, 94, 89, 88, 96, 96, 97, 89, 97, 96, 98, 98, 99, 97, 88, 92, 100, 100, 96, 
    88, 96, 100, 101, 101, 98, 96, 92, 95, 102, 102, 100, 92, 100, 102, 103, 103, 101, 100, 95, 89, 97, 97, 102, 95, 102, 97, 99, 99, 103, 102, 104, 
    104, 105, 105, 106, 104, 106, 105, 107, 107, 108, 106, 104, 104, 109, 109, 105, 104, 105, 109, 110, 110, 107, 105, 104, 104, 111, 111, 109, 104, 109, 111, 112, 
    112, 110, 109, 104, 104, 113, 113, 111, 104, 111, 113, 114, 114, 112, 111, 104, 104, 115, 115, 113, 104, 113, 115, 116, 116, 114, 113, 104, 104, 117, 117, 115, 
    104, 115, 117, 118, 118, 116, 115, 104, 104, 119, 119, 117, 104, 117, 119, 120, 120, 118, 117, 104, 104, 106, 106, 119, 104, 119, 106, 108, 108, 120, 119, 108, 
    107, 121, 121, 122, 108, 122, 121, 123, 123, 124, 122, 107, 110, 125, 125, 121, 107, 121, 125, 126, 126, 123, 121, 110, 112, 127, 127, 125, 110, 125, 127, 128, 
    128, 126, 125, 112, 114, 129, 129, 127, 112, 127, 129, 130, 130, 128, 127, 114, 116, 131, 131, 129, 114, 129, 131, 132, 132, 130, 129, 116, 118, 133, 133, 131, 
    116, 131, 133, 134, 134, 132, 131, 118, 120, 135, 135, 133, 118, 133, 135, 136, 136, 134, 133, 120, 108, 122, 122, 135, 120, 135, 122, 124, 124, 136, 135
};
static SDC_Mesh3D Teapot001_Mesh = {Teapot001_Vertices, Teapot001_Indices, NULL, 768, 137, POLIGON_VERTEX_COLOR};

#pragma GCC diagnostic pop

#endif