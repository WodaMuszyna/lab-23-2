// Karol Jab³oñski 23.03.2023
#include <stdio.h>

double factorial(int n){
    if(n == 0) return 1;
    return n * factorial(n-1);
}

int main(){
    int m;
    printf("Podaj liczbe naturalna z przedzialu [0,100]: ");
    scanf("%d", &m);
    if(m < 0 || m > 100){
        printf("Nieprawidlowa liczba!");
        return -1;
    }
    printf("Silnia z %d wynosi: %f", m, factorial(m));
    return 0;
}
