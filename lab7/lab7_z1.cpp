// Karol Jabłoński 06.04.2023
#include <iostream>
#include <string>
using namespace std;
int znaki[256];

int main(){
    string s = "aAbBcCdDeEfFgGiI";
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' ||
           s[i] == 'o' || s[i] == 'O' || s[i] == 'i' || s[i] == 'I' || s[i] == 'u' || s[i] == 'U'){
               if((int)s[i] >=65 && (int)s[i]<=90){
                    znaki[(int)s[i]+32]++;
                    continue;
               }
               znaki[(int)s[i]]++;
           }
    }
    for(int i=0; i<256; i++){
        if(znaki[i] != 0){
            cout<<(char)i<<"("<<i<<"): "<<znaki[i]<<endl;
        }
    }
    return 0;
}
