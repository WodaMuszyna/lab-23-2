// Karol Jabłoński 20.04.2023
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main(){
    int a[5][5], b[5][5], c[5][5], ab[5][5], ac[5][5];
    fstream pa,pb,pc,pd,pe;
    pa.open("AA.txt", ios::in);
    pb.open("BB.txt", ios::in);
    pc.open("CC.txt", ios::in);
    pd.open("D.txt", ios::out);
    pe.open("E.txt", ios::out);
    if(pa.good() && pb.good() && pc.good()){
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                pa>>a[i][j];
                pb>>b[i][j];
                pc>>c[i][j];
            }
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            ab[i][j] = 0;
            ac[i][j] = 0;
            for(int k=0; k<5; k++){
                ab[i][j] += a[i][k] * b[k][j];
                ac[i][j] += a[i][k] * c[k][j];
            }
            ac[i][j] += b[i][j];
            ab[i][j] -= c[i][j];
            pd<<ac[i][j]<<" ";
            pe<<ab[i][j]<<" ";
        }
        pd<<endl;
        pe<<endl;
    }
    pa.close();
    pb.close();
    pc.close();
    pd.close();
    pe.close();

    return 0;
}