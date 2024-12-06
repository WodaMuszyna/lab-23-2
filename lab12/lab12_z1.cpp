// Karol Jabłoński 18.05.2023
#include <iostream>
using namespace std;

class Ptaki{
protected:
    string gromada;
    bool wedrowny;
public:
    Ptaki(string gr, bool wed){
        gromada = gr;
        wedrowny = wed;
    }
};

class Wroblowe : virtual public Ptaki{
protected:
    string rzad;
public:
    Wroblowe(string gr, string rz, bool wed): Ptaki(gr, wed){
        rzad = rz;
    }
};

class Gawron : virtual public Ptaki, virtual public Wroblowe{
protected:
    string rodzina;
    string gatunek;
public:
    Gawron(string gr, string rz, string rod, string gat, bool wed): Ptaki(gr, wed), Wroblowe(gr, rz, wed){
        rodzina = rod;
        gatunek = gat;
    }
    void wypiszWszystkiePola(){
        cout<<"gromada="<<gromada<<endl;
        cout<<"wedrowny="<<boolalpha<<wedrowny<<endl;
        cout<<"rzad="<<rzad<<endl;
        cout<<"rodzina="<<rodzina<<endl;
        cout<<"gatunek="<<gatunek<<endl;
        return;
    }
};

int main(){
    Gawron g("ptak", "ptakow", "ptaki", "ptak", true);
    Gawron *gaw = new Gawron("ptak2", "ptakow2", "ptaki2", "ptak2", false);
    g.wypiszWszystkiePola();
    cout<<endl<<endl;
    gaw->wypiszWszystkiePola();
    delete gaw;
    return 0;
}
