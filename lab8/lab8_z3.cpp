// Karol Jabłoński 20.04.2023
#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <string>
#include <algorithm>
using namespace std;

char z[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9','0','.',',','?','+','-','=',';',':',' '};
string m[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..",".----","..---",".--","....-",".....","-....","--...","---..","----.","-----",".-.-.-","--..--","..--..",".-.-.","-....-","-...-","-.-.-.","---..."," "};
   

string encode(string s){
    string output = "";
    for(int i=0; i<s.length(); i++){
        if(s[i]>=65 && s[i]<=90) s[i] = (int)s[i]+32;
        output += m[distance(z, find(z, z+45, s[i]))] + "_";
    }
    return output;
}
string decode(string s){

    string output = "";
    string let = "";
    istringstream ss(s);

    while(getline(ss, let, '_'))
    {
        if(let == " "){
            output += " ";
            continue;
        }
        int index = 0;
        while(let != m[index] && index < 45)
        {
            ++index;
        }

        output += 'a' + index;
    }

    return output;
}

int main(){
    int o;
    string plik,data;
    fstream pin,pout;
    cout<<"Wybierz operacje:"<<endl;
    cout<<"  1) Zakoduj tekst"<<endl;
    cout<<"  2) Odkoduj tekst"<<endl;
    cin>>o;
    switch(o){
        case 1:
            cout<<"Podaj nazwe pliku tekstowego z tekstem do zakodowania"<<endl;
            cin>>plik;
            plik = plik.substr(0, plik.find("."));
            pin.open(plik+".txt", ios::in);
            pout.open(plik+"-morse.txt", ios::out);
            if(!pin.good()){
                cout<<"Blad! Nie znaleziono pliku!"<<endl;
                break;
            }
            while(getline(pin, data)){
                pout<<encode(data);
            }
            pin.close();
            pout.close();
            cout<<"Zakodowany tekst zostal zapisany w pliku "<<plik<<"-morse.txt"<<endl;
            break;
        case 2:
            cout<<"Podaj nazwe pliku tekstowego z tekstem do odkodowania"<<endl;
            cin>>plik;
            plik = plik.substr(0, plik.find("."));
            pin.open(plik+".txt", ios::in);
            pout.open(plik+"-plain.txt", ios::out);
            if(!pin.good()){
                cout<<"Blad! Nie znaleziono pliku!"<<endl;
                break;
            }
            while(getline(pin, data)){
                pout<<decode(data);
            }
            pin.close();
            pout.close();
            cout<<"Odkodowany tekst zostal zapisany w pliku "<<plik<<"-plain.txt"<<endl;
            break;
        default:
            cout<<"Nieprawidlowa opcja"<<endl;
            exit(0);
            break;
    }
    return 0;
}