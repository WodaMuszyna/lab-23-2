// Karol Jabłoński 06.04.2023
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool czyAnagram(string s1, string s2){
    if(s1.length() != s2.length()) return false;
    transform(s2.begin(), s2.end(), s2.begin(), [](unsigned char c){ return tolower(c);});
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    for(int i=0; i<s2.length(); i++){
            if(s1[i] != s2[i]){
                return false;
            }
    }
    return true;
}

int main(){
    string s1 = "coscos";
    string s2 = "soCocS";
    string a = czyAnagram(s1,s2) ? "tak" : "nie";
    cout<<a<<endl;
    return 0;
}
