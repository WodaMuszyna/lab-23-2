// Karol Jab³oñski 02.03.2023
#include <stdio.h>

int main(){
    float liczba;
    printf("Podaj liczbe: ");
    scanf("%f", &liczba);
    (liczba >= 1 && liczba <= 10) ? printf("Liczba %f nalezy do przedzialu", liczba) : printf("Liczba %f nie nalezy do przedzialu", liczba);
    return 0;
}
