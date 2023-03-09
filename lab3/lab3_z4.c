#include <stdio.h>
#include <math.h>

int main(){
    int a,b,x,y,z;
    printf("Podaj wartosc a=");
    scanf("%d", &a);
    printf("Podaj wartosc b=");
    scanf("%d", &b);
    for(int i=a; i<=b; i++){
        for(int j=i; j<=b; j++){
            float c = sqrt(i*i + j*j);
            if(c > b) continue;
            if(c == (int) c){
                printf("%d  %d  %d\n", i, j, (int) c);
            }
        }
    }
    return 0;
}
