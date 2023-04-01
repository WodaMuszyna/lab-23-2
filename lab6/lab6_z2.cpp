// Karol Jabłoński 30.03.2023
#include <iostream>
using namespace std;

int main(){
    int oct, dec=0, index=0, pow=1;
    int arr[10];
    cout<<"Podaj liczbe w systemie osemkowym: "<<endl;
    cin>>oct;
    while(oct != 0){
        arr[index] = (oct % 10);
        oct /= 10;
        dec += arr[index] * pow;
        pow *= 8;
        ++index;
    }
    cout<<"Liczba w systemie dziesientym: "<<dec<<endl;
    return 0;
}
