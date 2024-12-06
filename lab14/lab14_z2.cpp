// Karol Jabłoński 01.06.2023
#include <iostream>
using namespace std;

int sumujWartosci(int *wartosci, int n){
    int suma = 0;
    for(int i=0; i<n; i++){
        suma += wartosci[i];
    }
    return suma;
}

int main(){
    int rozmiar;
    cout<<"Podaj rozmiar: ";
    cin>>rozmiar;
    int *wartosci = new int[rozmiar];
    int i=0;
    while(i<rozmiar){
        cout<<"Podaj wartosc do dodania: ";
        cin>>wartosci[i++];
    }
    cout<<"Laczna suma wynosi: "<<sumujWartosci(wartosci, rozmiar);
    delete [] wartosci;
}
