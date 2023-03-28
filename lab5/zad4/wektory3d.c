// Karol Jabłoński 27.03.2023
#include "wektory3d.h"
#include <math.h>

float dlugosc(vec3d v1){
    return sqrt((v1.x * v1.x) + (v1.y * v1.y) + (v1.z * v1.z));
}

vec3d suma(vec3d v1, vec3d v2){
    vec3d sum = {0,0,0};
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    sum.z = v1.z + v2.z;
    return sum;
}

vec3d roznica(vec3d v1, vec3d v2){
    vec3d sub = {0,0,0};
    sub.x = v1.x - v2.x;
    sub.y = v1.y - v2.y;
    sub.z = v1.z - v2.z;
    return sub;
}

float skalarny(vec3d v1, vec3d v2){
    return ((v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z));
}

vec3d wektorowy(vec3d v1, vec3d v2){
    vec3d wek = {0, 0, 0};
    wek.x = v1.y * v2.z - v1.z * v2.y;
    wek.y = v1.x * v2.z - v1.z * v2.x;
    wek.z = v1.x * v2.y - v1.y * v2.x;
    return wek;
}

bool czy_rowlonegle(vec3d v1, vec3d v2){
    vec3d vr = wektorowy(v1, v2);
    if((vr.x == 0) && (vr.y == 0) && (vr.z == 0)){
        return true;
    }else{
        return false;
    }
}

bool czy_prostopadle(vec3d v1, vec3d v2){
    if(skalarny(v1, v2) == 0.0){
        return true;
    }else{
        return false;
    }
}