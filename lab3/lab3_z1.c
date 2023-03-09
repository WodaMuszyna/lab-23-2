// Karol Jabłoński 09.03.2023
#include <stdio.h>

int main(){
    int ile,i;
    printf("Podaj ile liczb: ");
    scanf("%d", &ile);
    for(i=0; i<=7*(ile-2); i+=7){
        printf("%d, ", i);
    }
    printf("%d\n", i);
    return 0;
}