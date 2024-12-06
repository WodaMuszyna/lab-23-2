// Karol Jabłoński 27.04.2023
#include <iostream>
#include <ctime>
using namespace std;

int* tablica(int n){
    int* tab = new int[n];
    srand(time(0));
    for(int i=0; i<n; i++){
        tab[i] = -10+rand()%21;
    }
    for(int i=0; i<n; i++){
        cout<<tab[i]<<" ";
    }
    cout<<endl;
    return tab;
}

int main(){
    int a;
    cout<<"Podaj wymiar tablicy: ";
    cin>>a;
    int* t = new int;
    t = tablica(a);
    delete t;
    return 0;
}
