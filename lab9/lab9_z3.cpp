// Karol Jabłoński 27.04.2023
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

void losuj(fstream &plik, int n){
    srand(time(0));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            plik << rand()%10 << " ";
        }
        plik << "\n";
    }
    return;
}

int main(){
    int a;
    cout<<"Podaj rozmiar macierzy: ";
    cin>>a;
    fstream plik;
    plik.open("macierz.txt", ios::out|ios::trunc);
    losuj(plik, a);
    plik.close();
    return 0;
}
