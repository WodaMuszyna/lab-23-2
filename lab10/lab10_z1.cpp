//Karol Jabłoński 04.05.23
#include <iostream>
using namespace std;

struct Auto{
    double bak;

    Auto(){
        bak = 0.0;
    }

    void tankowanie(double ilosc){
        if(bak+ilosc<=50){
          bak += ilosc;
          cout<<"Zatankowano "<<ilosc<<" l paliwa. Stan baku: "<<bak<<endl;
          return;
        }else{
            cout<<"Nie mozna zatankowac wiecej niz 50l paliwa"<<endl;
        }
        return;
    }

    void jazda(double km){
        if(bak>=km/10.0){
            bak -= km/10.0;
            cout<<"Przejechano "<<km<<" km"<<endl;
            cout<<"Stan paliwa: "<<bak<<endl;
            return;
        }else{
            cout<<"Brak paliwa"<<endl;
            return;
        }
    }
    void stan_paliwa(){
        cout<<"Stan paliwa: "<<bak<<endl;
        return;
    }
};

int main(){
    Auto a = Auto();
    cout<<"Stan baku przed tankowaniem: "<<endl;
    a.stan_paliwa();
    a.tankowanie(5.0);
    cout<<"Stan baku po tankowaniu: "<<endl;
    a.stan_paliwa();
    cout<<"Jazda: "<<endl;
    a.jazda(10.0);
    a.jazda(40.0);
    a.jazda(5.0);
    return 0;
}
