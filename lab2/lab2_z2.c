// Karol Jab³oñski 02.03.2023
#include <stdio.h>

int main(){
    int rok;
    printf("Podaj rok:");
    scanf("%d", &rok);
    if((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0)){
        printf("Rok %d jest przestepny", rok);
    } else{
        printf("Rok %d nie jest przestepny", rok);
    }
    return 0;
}
