// Karol Jabłoński 06.04.2023
#include <iostream>
#include <string>
using namespace std;

string zamienWielkoscLiter(string s){
    string kopia = "";
    for(int i=0; i<s.length(); i++){
        if((int)s[i] >=65 && (int)s[i]<=90){
            kopia.push_back(tolower(s[i]));
            continue;
        }
        if((int)s[i]>=97 && (int)s[i] <= 122){
            kopia.push_back(toupper(s[i]));
            continue;
        }
        kopia.push_back(s[i]);
    }
    return kopia;
}

int main(){
    string t = "aBcdEFg123";
    cout<<zamienWielkoscLiter(t)<<endl;
    return 0;
}
