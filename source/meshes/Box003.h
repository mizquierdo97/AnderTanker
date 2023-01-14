#ifndef _BOX003_MESH_
#define _BOX003_MESH_

#include <types.h>
#include "dcRender.h"

static SDC_VertexTexturedNormal Box003_Vertices[] = {
    { 65, 0, 65, 0, 0, 4096, 0, 0, 0, 127 },
    { -65, 0, 65, 0, 0, 4096, 0, 0, 127, 127 },
    { 65, 0, -65, 0, 0, 4096, 0, 0, 0, 0 },
    { -65, 0, -65, 0, 0, 4096, 0, 0, 127, 0 },
    { 65, 130, -65, 0, 0, -4096, 0, 0, 127, 0 },
    { -65, 130, -65, 0, 0, -4096, 0, 0, 0, 0 },
    { -65, 130, 65, 0, 0, -4096, 0, 0, 0, 127 },
    { 65, 130, 65, 0, 0, -4096, 0, 0, 127, 127 },
    { 65, 130, 65, 0, 0, 0, 4096, 0, 127, 0 },
    { -65, 130, 65, 0, 0, 0, 4096, 0, 0, 0 },
    { -65, 0, 65, 0, 0, 0, 4096, 0, 0, 127 },
    { 65, 0, 65, 0, 0, 0, 4096, 0, 127, 127 },
    { 65, 130, -65, 0, 4096, 0, 0, 0, 127, 0 },
    { 65, 130, 65, 0, 4096, 0, 0, 0, 0, 0 },
    { 65, 0, 65, 0, 4096, 0, 0, 0, 0, 127 },
    { 65, 0, -65, 0, 4096, 0, 0, 0, 127, 127 },
    { -65, 130, -65, 0, 0, 0, -4096, 0, 127, 0 },
    { 65, 130, -65, 0, 0, 0, -4096, 0, 0, 0 },
    { 65, 0, -65, 0, 0, 0, -4096, 0, 0, 127 },
    { -65, 0, -65, 0, 0, 0, -4096, 0, 127, 127 },
    { -65, 130, 65, 0, -4096, 0, 0, 0, 127, 0 },
    { -65, 130, -65, 0, -4096, 0, 0, 0, 0, 0 },
    { -65, 0, -65, 0, -4096, 0, 0, 0, 0, 127 },
    { -65, 0, 65, 0, -4096, 0, 0, 0, 127, 127 }
};
static u_short Box003_Indices[] = {
    0, 2, 1, 1, 2, 3, 4, 6, 5, 4, 7, 6, 8, 10, 9, 8, 11, 10, 12, 14, 13, 12, 15, 14, 16, 18, 17, 16, 19, 18, 20, 22, 21, 
    20, 23, 22
};
static SDC_Mesh3D Box003_Mesh = {Box003_Vertices, Box003_Indices, NULL, 36, 24, POLIGON_VERTEX_TEXTURED_NORMAL};
#endif