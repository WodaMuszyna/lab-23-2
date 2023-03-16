// Karol Jabłoński 16.03.23
#include <stdio.h>

int main(){
    int n;
    int a = 0;
    float f;
    float g = 1.0;
    printf("Podaj liczbe naturalna: ");
    scanf("%d", &n);
    if(n < 0){
        printf("Podaj liczbe naturalna!");
        return -1;
    }
    f = 1.0/n;
    do{
        if(a>20){
            printf("n>20");
            break;
        }
        a++;
        g *= 0.5;
        if(g > f) continue;
        printf("n=%d", a);
        break;
    }while(n>g);
    return 0;
}
