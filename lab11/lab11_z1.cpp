// Karol Jabłoński 11.05.2023
#include <iostream>
using namespace std;

class Zliczanie{
    static int i;
public:
    Zliczanie(){i++;}
    static void ile(){
        cout<<"Aktywnych istniejacych obiektow: "<<i<<endl;
    }
};

int Zliczanie::i = 0;

int main(){
    Zliczanie z1,z2,z3;
    z1.ile();
    return 0;
}
