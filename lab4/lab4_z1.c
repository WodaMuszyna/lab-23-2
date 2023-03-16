// Karol Jabłoński 16.03.23
#include <stdio.h>

int main(){
    int n;
    int a = 1;
    printf("Wczytaj liczbe naturalna: ");
    scanf("%d", &n);
    if(n < 0){
        printf("Podaj liczbe naturalna!");
        return -1;
    }
    while(n > 0){
        n -= a;
        a += 2;
    }
    if(n == 0){
        printf("Podana liczba jest kwadratem");
    }else{
        printf("Podana liczba nie jest kwadratem");
    }
    return 0;
}
