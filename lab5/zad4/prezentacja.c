// Karol Jabłoński 27.03.2023
#include <stdio.h>
#include "wektory3d.h"

int main(){
    vec3d v1 = {1,2,3};
    vec3d v2 = {2,4,6};
    printf("Wektory: [%d, %d, %d] [%d, %d, %d]\n\n", v1.x, v1.y, v1.z, v2.x, v2.y, v2.z);
    printf("Dlugosc: %f\n", dlugosc(v1));
    vec3d sum = suma(v1, v2);
    printf("Suma: [%d, %d, %d]\n", sum.x, sum.y, sum.z);
    vec3d sub = roznica(v1, v2);
    printf("Roznica: [%d, %d, %d]\n", sub.x, sub.y, sub.z);
    printf("Czy rownolegle: %s\n", czy_rowlonegle(v1, v2) ? "tak" : "nie");
    printf("Czy prostopadle: %s\n", czy_prostopadle(v1, v2) ? "tak" : "nie");
    printf("Iloczyn skalarny: %f\n", skalarny(v1, v2));
    vec3d vec = wektorowy(v1, v2);
    printf("Iloczyn wektorowy: [%d, %d, %d]\n", vec.x, vec.y, vec.z);

    return 0;
}