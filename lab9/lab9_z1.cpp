// Karol Jabłoński 27.04.2023
#include <iostream>
using namespace std;

void zamianaWartosci(int *i, int *j){
    cout<<"Liczby przed zamiana: "<<*i<<" "<<*j<<endl;
    int temp = *i;
    *i = *j;
    *j = temp;
    cout<<"Liczby po zamianie: "<<*i<<" "<<*j<<endl;
    return;
}

int main(){
    int i,j;
    cout<<"Podaj pierwsza liczbe: ";
    cin>>i;
    cout<<"Podaj druga liczbe: ";
    cin>>j;
    zamianaWartosci(&i, &j);
    return 0;
}
