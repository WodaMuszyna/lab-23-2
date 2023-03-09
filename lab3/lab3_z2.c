// Karol Jabłoński 09.03.2023
#include <stdio.h>

int main(){
    int i;
    printf("Podaj liczbe naturalna: ");
    scanf("%d", &i);

    for(int j=1; j<=10; j++){
        for(int k=1; k<=i; k++){
            printf("%d ", k*j);
        }
        printf("\n");
    }
    return 0;
}