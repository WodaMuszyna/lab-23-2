// Karol Jab³oñski 23.03.2023
#include <stdio.h>

double factorial(int n){
    if(n == 0) return 1;
    return n * factorial(n-1);
}

int newt(int n, int k){
    return factorial(n) / (factorial(k) * factorial(n-k));
}

void triangle(int n){
    int i,j;
    for(i=0; i<=n; i++){
        for(j=0; j<=n-i; j++)
            printf("  ");
        for(j=0; j<=i; j++)
            printf(" %3d", newt(i,j));

        printf("\n");
    }
}

int main(){
    int n,k,l;
    printf("Podaj n: ");
    scanf("%d", &n);
    printf("Podaj k: ");
    scanf("%d", &k);
    printf("Podaj wysokosc trojkata: ");
    scanf("%d", &l);
    if(n < 0 || k<0 || l<0){
        printf("Niepoprawne dane");
        return -1;
    }
    printf("Dwumian wynosi: %d", newt(n,k));
    printf("\n");
    triangle(l);
    return 0;
}
