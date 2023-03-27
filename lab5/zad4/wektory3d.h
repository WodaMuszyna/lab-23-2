// Karol Jabłoński 27.03.2023
#include <stdbool.h>
#ifndef WEKTORY_H_
#define WEKTORY_H_

typedef struct vec3d {
    int x,y,z;
} vec3d;

float dlugosc(vec3d v1);

vec3d suma(vec3d v1, vec3d v2);

vec3d roznica(vec3d v1, vec3d v2);

bool czy_rowlonegle(vec3d v1, vec3d v2);

bool czy_prostopadle(vec3d v1, vec3d v2);

float skalarny(vec3d v1, vec3d v2);

vec3d wektorowy(vec3d v1, vec3d v2);

#endif