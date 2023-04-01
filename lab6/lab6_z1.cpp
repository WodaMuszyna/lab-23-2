// Karol Jabłoński 30.03.2023
#include <iostream>
using namespace std;

void calcMatrix(float m[2][2]){
    float det,ndet;
    det = (m[0][0] * m[1][1]) - (m[0][1] * m[1][0]);
    if(det == 0.0){
        cout<<"Macierz nie jest odwracalna"<<endl;
        return;
    }
    ndet = 1.0/det;
    cout<<"Macierz odwrotna:"<<endl;
    cout<<ndet*m[1][1]<<"   "<<ndet*(-1.0)*m[0][1]<<endl;
    cout<<ndet*(-1.0)*m[1][0]<<"   "<<ndet*m[0][0]<<endl;
    return;
}

int main(){
    float m[2][2];
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"Podaj m["<<i<<"]["<<j<<"]"<<endl;
            cin>>m[i][j];
        }
    }
    calcMatrix(m);
    return 0;
}
