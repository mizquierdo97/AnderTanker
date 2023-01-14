#ifndef _BONIFACIO_MESH_
#define _BONIFACIO_MESH_

#include <types.h>
#include "dcRender.h"

static SDC_VertexTexturedNormal Bonifacio_Vertices[] = {
    { -7, -19, -4, 0, 0, -4057, -558, 0, 10, 2 },
    { 8, 20, -5, 0, 0, -4095, -68, 0, 12, 7 },
    { 7, -19, -4, 0, 0, -4057, -558, 0, 11, 2 },
    { -8, 20, -5, 0, 0, -4095, -68, 0, 10, 7 },
    { 0, -23, -2, 0, 0, -4096, 0, 0, 11, 2 },
    { 0, -30, -2, 0, 0, -4096, 0, 0, 11, 1 },
    { -34, -30, -2, 0, 0, -4095, 0, 0, 7, 1 },
    { 0, -67, -2, 0, 0, -4096, 0, 0, 3, 12 },
    { 34, -30, -2, 0, 0, -4096, 0, 0, 6, 15 },
    { 41, -67, -2, 0, 0, -4096, 0, 0, 7, 12 },
    { 0, -30, -2, 0, 0, -4096, 0, 0, 3, 15 },
    { 8, 20, -5, 0, 0, 0, 4096, 0, 13, 3 },
    { -8, 20, -5, 0, 0, 0, 4096, 0, 12, 3 },
    { -8, 20, 3, 0, 0, 0, 4096, 0, 12, 3 },
    { 8, 20, 3, 0, 0, 0, 4096, 0, 13, 3 },
    { 8, 20, -5, 0, 4093, 0, -135, 0, 13, 3 },
    { 7, -19, 2, 0, 4093, 0, -135, 0, 13, 3 },
    { 7, -19, -4, 0, 4093, 0, -135, 0, 13, 3 },
    { 8, 20, 3, 0, 4093, 0, -135, 0, 13, 3 },
    { -7, -28, -2, 0, 0, 0, -4096, 0, 14, 3 },
    { 7, -28, -2, 0, 0, 0, -4096, 0, 14, 3 },
    { 7, -28, 0, 0, 0, 0, -4096, 0, 14, 3 },
    { -7, -28, 0, 0, 0, 0, -4096, 0, 14, 3 },
    { -7, -28, -2, 0, -4096, 0, 0, 0, 11, 3 },
    { -7, -19, 2, 0, -4096, 0, 0, 0, 11, 3 },
    { -7, -19, -4, 0, -4096, 0, 0, 0, 11, 3 },
    { -7, -28, 0, 0, -4096, 0, 0, 0, 11, 3 },
    { -34, -30, -2, 0, -4020, 0, 784, 0, 8, 3 },
    { -41, -67, -2, 0, -4020, 0, 784, 0, 9, 3 },
    { -41, -67, 0, 0, -4020, 0, 784, 0, 9, 3 },
    { -34, -30, 0, 0, -4020, 0, 784, 0, 8, 3 },
    { 0, -23, -2, 0, -892, 0, 3997, 0, 7, 3 },
    { -34, -30, -2, 0, -892, 0, 3997, 0, 8, 3 },
    { -34, -30, 0, 0, -892, 0, 3997, 0, 8, 3 },
    { 0, -23, 0, 0, -892, 0, 3997, 0, 7, 3 },
    { 34, -30, -2, 0, 892, 0, 3997, 0, 13, 3 },
    { 0, -23, -2, 0, 892, 0, 3997, 0, 14, 3 },
    { 0, -23, 0, 0, 892, 0, 3997, 0, 14, 3 },
    { 34, -30, 0, 0, 892, 0, 3997, 0, 13, 3 },
    { 41, -67, -2, 0, 4020, 0, 784, 0, 12, 3 },
    { 34, -30, -2, 0, 4020, 0, 784, 0, 13, 3 },
    { 34, -30, 0, 0, 4020, 0, 784, 0, 13, 3 },
    { 41, -67, 0, 0, 4020, 0, 784, 0, 12, 3 },
    { 30, -101, -2, 0, 3893, 0, -1270, 0, 11, 3 },
    { 41, -67, -2, 0, 3893, 0, -1270, 0, 12, 3 },
    { 41, -67, 0, 0, 3893, 0, -1270, 0, 12, 3 },
    { 30, -101, 0, 0, 3893, 0, -1270, 0, 11, 3 },
    { 0, -111, -2, 0, 1327, 0, -3874, 0, 11, 3 },
    { 30, -101, -2, 0, 1327, 0, -3874, 0, 11, 3 },
    { 30, -101, 0, 0, 1327, 0, -3874, 0, 11, 3 },
    { 0, -111, 0, 0, 1327, 0, -3874, 0, 11, 3 },
    { -30, -101, -2, 0, -1327, 0, -3874, 0, 10, 3 },
    { 0, -111, -2, 0, -1327, 0, -3874, 0, 11, 3 },
    { 0, -111, 0, 0, -1327, 0, -3874, 0, 11, 3 },
    { -30, -101, 0, 0, -1327, 0, -3874, 0, 10, 3 },
    { -41, -67, -2, 0, -3893, 0, -1270, 0, 9, 3 },
    { -30, -101, -2, 0, -3893, 0, -1270, 0, 10, 3 },
    { -30, -101, 0, 0, -3893, 0, -1270, 0, 10, 3 },
    { -41, -67, 0, 0, -3893, 0, -1270, 0, 9, 3 },
    { 7, -28, -2, 0, 0, -3958, -1051, 0, 11, 1 },
    { -7, -28, -2, 0, 0, -3958, -1051, 0, 10, 1 },
    { 7, -28, -2, 0, 4096, 0, 0, 0, 14, 3 },
    { 7, -19, 2, 0, 4096, 0, 0, 0, 13, 3 },
    { 7, -28, 0, 0, 4096, 0, 0, 0, 14, 3 },
    { 7, -19, -4, 0, 4096, 0, 0, 0, 13, 3 },
    { -8, 20, -5, 0, -4093, 0, -135, 0, 12, 3 },
    { -7, -19, 2, 0, -4093, 0, -135, 0, 11, 3 },
    { -8, 20, 3, 0, -4093, 0, -135, 0, 12, 3 },
    { -7, -19, -4, 0, -4093, 0, -135, 0, 11, 3 },
    { 30, -101, -2, 0, 0, -4096, 0, 0, 6, 9 },
    { 0, -111, -2, 0, 0, -4096, 0, 0, 3, 8 },
    { -34, -30, 0, 0, 0, 4095, 0, 0, 8, 8 },
    { 0, -67, 0, 0, 0, 4096, 0, 0, 11, 12 },
    { 0, -30, 0, 0, 0, 4096, 0, 0, 11, 8 },
    { -41, -67, 0, 0, 0, 4096, 0, 0, 7, 12 },
    { -8, 20, 3, 0, 0, 4095, -68, 0, 10, 7 },
    { -7, -19, 2, 0, 0, 4095, -68, 0, 10, 2 },
    { 8, 20, 3, 0, 0, 4095, -68, 0, 12, 7 },
    { 7, -19, 2, 0, 0, 4095, -68, 0, 11, 2 },
    { -7, -28, 0, 0, 0, 3958, -1051, 0, 10, 1 },
    { 7, -19, 2, 0, 0, 3958, -1051, 0, 11, 2 },
    { -7, -19, 2, 0, 0, 3958, -1051, 0, 10, 2 },
    { 7, -28, 0, 0, 0, 3958, -1051, 0, 11, 1 },
    { -30, -101, 0, 0, 0, 4096, 0, 0, 8, 15 },
    { 0, -111, 0, 0, 0, 4096, 0, 0, 11, 15 },
    { 34, -30, 0, 0, 0, 4096, 0, 0, 14, 1 },
    { 0, -23, 0, 0, 0, 4096, 0, 0, 11, 2 },
    { 0, -30, 0, 0, 0, 4096, 0, 0, 11, 1 },
    { -34, -30, -2, 0, 0, -4095, 0, 0, 0, 15 },
    { -41, -67, -2, 0, 0, -4096, 0, 0, 0, 12 },
    { 34, -30, 0, 0, 0, 4096, 0, 0, 14, 8 },
    { 41, -67, 0, 0, 0, 4096, 0, 0, 14, 12 },
    { -30, -101, -2, 0, 0, -4096, 0, 0, 1, 9 },
    { 30, -101, 0, 0, 0, 4096, 0, 0, 13, 15 },
    { 34, -30, -2, 0, 0, -4096, 0, 0, 14, 1 },
    { -34, -30, 0, 0, 0, 4096, 0, 0, 7, 1 },
    { -63, -46, -2, 0, 0, -4095, 0, 0, 9, 11 },
    { -56, -56, -2, 0, 0, -4096, 0, 0, 9, 10 },
    { -74, -64, -2, 0, 0, -4096, 0, 0, 8, 10 },
    { -67, -72, -2, 0, 0, -4095, 0, 0, 9, 10 },
    { 0, -73, -2, 0, 0, -4096, 0, 0, 11, 10 },
    { 10, -57, -2, 0, 0, -4096, 0, 0, 11, 10 },
    { 12, -79, -2, 0, 0, -4096, 0, 0, 11, 10 },
    { 0, -57, -2, 0, 0, -4096, 0, 0, 11, 10 },
    { -12, -79, -2, 0, 0, -4095, 0, 0, 10, 10 },
    { -10, -57, -2, 0, 0, -4096, 0, 0, 10, 10 },
    { -27, -77, -2, 0, 0, -4096, 0, 0, 10, 10 },
    { -28, -50, -2, 0, 0, -4095, 0, 0, 10, 10 },
    { -37, -65, -2, 0, 0, -4096, 0, 0, 10, 10 },
    { 27, -77, -2, 0, 0, -4096, 0, 0, 12, 10 },
    { 28, -50, -2, 0, 0, -4095, 0, 0, 12, 10 },
    { 37, -65, -2, 0, 0, -4095, 0, 0, 12, 10 },
    { 44, -55, -2, 0, 0, -4096, 0, 0, 12, 10 },
    { 42, -37, -2, 0, 0, -4095, 0, 0, 12, 11 },
    { -44, -55, -2, 0, 0, -4096, 0, 0, 9, 10 },
    { -42, -37, -2, 0, 0, -4095, 0, 0, 9, 11 },
    { 63, -46, -2, 0, 0, -4096, 0, 0, 13, 11 },
    { 56, -56, -2, 0, 0, -4096, 0, 0, 13, 10 },
    { 74, -64, -2, 0, 0, -4096, 0, 0, 13, 10 },
    { 67, -72, -2, 0, 0, -4095, 0, 0, 13, 10 },
    { -64, -84, -2, 0, 0, -4095, 0, 0, 9, 9 },
    { 64, -84, -2, 0, 0, -4096, 0, 0, 13, 9 },
    { -67, -72, -2, 0, 0, 4095, 0, 0, 9, 10 },
    { -56, -56, -2, 0, 0, 4096, 0, 0, 9, 10 },
    { -74, -64, -2, 0, 0, 4096, 0, 0, 8, 10 },
    { -63, -46, -2, 0, 0, 4095, 0, 0, 9, 11 },
    { 10, -57, -2, 0, 0, 4096, 0, 0, 11, 10 },
    { 0, -73, -2, 0, 0, 4096, 0, 0, 11, 10 },
    { 12, -79, -2, 0, 0, 4096, 0, 0, 11, 10 },
    { 0, -57, -2, 0, 0, 4096, 0, 0, 11, 10 },
    { -10, -57, -2, 0, 0, 4096, 0, 0, 10, 10 },
    { -12, -79, -2, 0, 0, 4095, 0, 0, 10, 10 },
    { -27, -77, -2, 0, 0, 4096, 0, 0, 10, 10 },
    { -28, -50, -2, 0, 0, 4096, 0, 0, 10, 10 },
    { -37, -65, -2, 0, 0, 4096, 0, 0, 10, 10 },
    { 27, -77, -2, 0, 0, 4096, 0, 0, 12, 10 },
    { 28, -50, -2, 0, 0, 4095, 0, 0, 12, 10 },
    { 37, -65, -2, 0, 0, 4095, 0, 0, 12, 10 },
    { 44, -55, -2, 0, 0, 4096, 0, 0, 12, 10 },
    { 42, -37, -2, 0, 0, 4095, 0, 0, 12, 11 },
    { -44, -55, -2, 0, 0, 4096, 0, 0, 9, 10 },
    { -42, -37, -2, 0, 0, 4095, 0, 0, 9, 11 },
    { 63, -46, -2, 0, 0, 4096, 0, 0, 13, 11 },
    { 56, -56, -2, 0, 0, 4096, 0, 0, 13, 10 },
    { 74, -64, -2, 0, 0, 4096, 0, 0, 13, 10 },
    { 67, -72, -2, 0, 0, 4095, 0, 0, 13, 10 },
    { -64, -84, -2, 0, 0, 4095, 0, 0, 9, 9 },
    { 64, -84, -2, 0, 0, 4096, 0, 0, 13, 9 },
    { -32, -93, -2, 0, 0, -4096, 0, 0, 2, 5 },
    { -19, -122, -2, 0, 0, -4096, 0, 0, 4, 1 },
    { -37, -105, -2, 0, 0, -4096, 0, 0, 1, 3 },
    { -7, -117, -2, 0, 0, -4096, 0, 0, 5, 2 },
    { 7, -93, -2, 0, 0, -4096, 0, 0, 5, 2 },
    { 19, -88, -2, 0, 0, -4096, 0, 0, 4, 1 },
    { 2, -105, -2, 0, 0, -4096, 0, 0, 6, 3 },
    { -19, -88, -2, 0, 0, -4096, 0, 0, 4, 6 },
    { -2, -105, -2, 0, 0, -4096, 0, 0, 6, 3 },
    { -7, -93, -2, 0, 0, -4096, 0, 0, 5, 5 },
    { -32, -117, -2, 0, 0, -4096, 0, 0, 2, 2 },
    { 32, -93, -2, 0, 0, -4096, 0, 0, 2, 2 },
    { 19, -122, -2, 0, 0, -4096, 0, 0, 4, 6 },
    { 7, -117, -2, 0, 0, -4096, 0, 0, 5, 5 },
    { 37, -105, -2, 0, 0, -4096, 0, 0, 1, 3 },
    { 32, -117, -2, 0, 0, -4096, 0, 0, 2, 5 },
    { -19, -122, -2, 0, 0, 4096, 0, 0, 11, 13 },
    { -32, -93, -2, 0, 0, 4096, 0, 0, 13, 12 },
    { -37, -105, -2, 0, 0, 4096, 0, 0, 12, 12 },
    { -7, -117, -2, 0, 0, 4096, 0, 0, 11, 14 },
    { 7, -93, -2, 0, 0, 4096, 0, 0, 13, 12 },
    { 2, -105, -2, 0, 0, 4096, 0, 0, 12, 12 },
    { 19, -88, -2, 0, 0, 4096, 0, 0, 13, 13 },
    { -19, -88, -2, 0, 0, 4096, 0, 0, 13, 13 },
    { -2, -105, -2, 0, 0, 4096, 0, 0, 12, 14 },
    { -7, -93, -2, 0, 0, 4096, 0, 0, 13, 14 },
    { -32, -117, -2, 0, 0, 4096, 0, 0, 11, 12 },
    { 19, -122, -2, 0, 0, 4096, 0, 0, 11, 13 },
    { 32, -93, -2, 0, 0, 4096, 0, 0, 13, 14 },
    { 7, -117, -2, 0, 0, 4096, 0, 0, 11, 12 },
    { 37, -105, -2, 0, 0, 4096, 0, 0, 12, 14 },
    { 32, -117, -2, 0, 0, 4096, 0, 0, 11, 14 },
    { 22, -108, -3, 0, 0, -4096, 0, 0, 10, 9 },
    { 16, -108, -3, 0, 0, -4096, 0, 0, 9, 9 },
    { 16, -102, -3, 0, 0, -4096, 0, 0, 9, 9 },
    { 22, -102, -3, 0, 0, -4096, 0, 0, 10, 9 },
    { -16, -108, -3, 0, 0, -4096, 0, 0, 10, 9 },
    { -22, -108, -3, 0, 0, -4096, 0, 0, 9, 9 },
    { -22, -102, -3, 0, 0, -4096, 0, 0, 9, 9 },
    { -16, -102, -3, 0, 0, -4096, 0, 0, 10, 9 }
};
static u_short Bonifacio_Indices[] = {
    0, 2, 1, 1, 3, 0, 4, 6, 5, 7, 9, 8, 8, 10, 7, 11, 13, 12, 11, 14, 13, 15, 17, 16, 16, 18, 15, 19, 21, 20, 19, 22, 21, 
    23, 25, 24, 24, 26, 23, 27, 29, 28, 27, 30, 29, 31, 33, 32, 31, 34, 33, 35, 37, 36, 35, 38, 37, 39, 41, 40, 39, 42, 41, 43, 45, 
    44, 43, 46, 45, 47, 49, 48, 47, 50, 49, 51, 53, 52, 51, 54, 53, 55, 57, 56, 55, 58, 57, 0, 60, 59, 59, 2, 0, 61, 63, 62, 62, 
    64, 61, 65, 67, 66, 66, 68, 65, 7, 70, 69, 69, 9, 7, 71, 73, 72, 72, 74, 71, 75, 77, 76, 77, 78, 76, 79, 81, 80, 80, 82, 79, 
    72, 83, 74, 72, 84, 83, 85, 87, 86, 88, 89, 7, 7, 10, 88, 90, 72, 73, 72, 90, 91, 92, 70, 7, 7, 89, 92, 72, 91, 93, 93, 84, 
    72, 4, 5, 94, 86, 87, 95, 96, 98, 97, 98, 99, 97, 100, 102, 101, 101, 103, 100, 100, 105, 104, 100, 103, 105, 106, 105, 107, 107, 108, 106, 105, 
    106, 104, 101, 102, 109, 110, 109, 111, 110, 101, 109, 112, 113, 110, 110, 111, 112, 114, 107, 115, 107, 114, 108, 112, 117, 116, 116, 113, 112, 114, 115, 96, 
    96, 97, 114, 116, 117, 118, 118, 117, 119, 99, 98, 120, 118, 119, 121, 122, 124, 123, 123, 124, 125, 126, 128, 127, 126, 127, 129, 129, 127, 130, 130, 127, 
    131, 132, 134, 133, 133, 130, 132, 130, 131, 132, 126, 135, 128, 126, 136, 135, 135, 136, 137, 137, 136, 138, 136, 139, 138, 133, 134, 140, 140, 141, 133, 142, 
    143, 138, 138, 139, 142, 125, 141, 140, 140, 123, 125, 144, 145, 143, 143, 142, 144, 122, 146, 124, 144, 147, 145, 148, 150, 149, 149, 151, 148, 152, 154, 153, 
    155, 151, 156, 155, 148, 151, 155, 156, 157, 149, 150, 158, 159, 161, 160, 160, 162, 159, 153, 154, 161, 161, 159, 153, 162, 160, 163, 164, 166, 165, 165, 167, 
    164, 168, 170, 169, 171, 172, 167, 165, 171, 167, 171, 173, 172, 164, 174, 166, 175, 177, 176, 176, 178, 175, 177, 169, 170, 170, 176, 177, 178, 179, 175, 180, 
    182, 181, 180, 183, 182, 184, 186, 185, 184, 187, 186
};
static SDC_Mesh3D Bonifacio_Mesh = {Bonifacio_Vertices, Bonifacio_Indices, NULL, 396, 188, POLIGON_VERTEX_TEXTURED_NORMAL};
#endif