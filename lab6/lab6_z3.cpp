// Karol Jabłoński 30.03.2023
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    int a[3][3], b[3][3], c[3][3];
    srand((unsigned int)time(NULL));
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            a[i][j] = rand()%1000;
            b[i][j] = rand()%1000;
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"     ";
        for(int j=0; j<3; j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"     ";
        for(int j=0; j<3; j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
