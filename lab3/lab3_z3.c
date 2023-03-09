// Karol Jabłoński 09.03.2023
#include <stdio.h>

int main(){
    int b,i,j,k;
    printf("Podaj liczbe naturalna > 4: ");
    scanf("%d", &b);
    if(b<4){
        printf("Liczba mniejsza od 4\n");
        return -1;
    }
    for(i=1; i<=b; i++){
        for(j=i; j<b; j++){
            printf(" ");
        }
        for(k=1; k<=i; k++){
            if((k == 1) || (i == b) || (k == i)){
                printf("X");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}