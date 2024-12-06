// Karol Jabłoński 20.04.2023
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main(){
    int a[5][5], b[5][5], c[5][5];
    fstream pa,pb,pc;
    pa.open("A.txt", ios::out);
    pb.open("B.txt", ios::out);
    pc.open("C.txt", ios::out);
    srand(time(0));
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            pa<<rand()%10<<" ";
            pb<<rand()%10<<" ";
            if(i == j){
                pc<<"1 ";
            }else{
                pc<<"0 ";
            }
        }
        pa<<endl;
        pb<<endl;
        pc<<endl;
    }
    pa.close();
    pb.close();
    pc.close();
    return 0;
}