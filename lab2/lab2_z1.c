// Karol Jab³oñski 02.03.2023
#include <stdio.h>

int main(){
    int x,y,z;
    printf("Podaj dlugosc pierwszego odcinka:");
    scanf("%d", &x);
    printf("Podaj dlugosc drugiego odcinka:");
    scanf("%d", &y);
    printf("Podaj dlugosc trzeciego odcinka:");
    scanf("%d", &z);
    if((x + y > z) && (x + z > y) && (y + z > x)){
        printf("Mozna zbudowac trojkat!");
        return 0;
    }
    printf("Nie mozna zbudowac trojkata.");
    return 0;
}
