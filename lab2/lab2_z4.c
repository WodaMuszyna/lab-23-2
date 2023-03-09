// Karol Jab³oñski 02.03.2023
#include <stdio.h>

int main(){
    int a,b,c,delta;
    double x1,x2;
    printf("Podaj a: ");
    scanf("%d", &a);
    printf("Podaj b: ");
    scanf("%d", &b);
    printf("Podaj c: ");
    scanf("%d", &c);
    delta = (b*b) - 4 * a * c;
    if(delta >= 0){
        if(delta == 0){
            x1 = (-1*b) / (2*a);
            printf("Delta = 0, miejsce zerowe x0=%f", x1);
        }else{
            x1 = (-1*b - sqrt(delta)) / (2*a);
            x2 = (-1*b + sqrt(delta)) / (2*a);
            printf("Delta dodatnia, miejsca zerowe x1=%f x2=%f", x1, x2);
        }
    }else{
        printf("Delta ujemna, brak miejsc zerowych");
    }
    return 0;
}
