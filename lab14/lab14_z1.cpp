// Karol Jabłoński 01.06.2023
#include <iostream>
using namespace std;

int wykladnik(int podstawa, int wykl){
    int wartosc_narast = 1;
    for(int i=0; i<wykl; i++){
        wartosc_narast *= podstawa;
    }
    return wartosc_narast;
}

int main(){
    int podstawa;
    int wykl;

    cout<<"Podaj podstawe: ";
    cin>>podstawa;
    cout<<"Podaj wykladnik: ";
    cin>>wykl;
    cout<<wykladnik(podstawa, wykl);
}
