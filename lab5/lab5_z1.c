// Karol Jabłoński 23.03.2023
#include <stdio.h>

void rysuj_kwadrat(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == 0 || i == n-1)
                printf("#");
            else if(j == i || j == n-i-1){
                if(n>8)
                    printf("#");
                else printf(" ");
            }
            else if(j == 0 || j == n-1)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main(){
    int b;
    printf("Podaj liczbe naturalna: ");
    scanf("%d", &b);
    if(b < 0){
        printf("Liczba musi byc naturalna!");
        return -1;
    }
    rysuj_kwadrat(b);
    return 0;
}
