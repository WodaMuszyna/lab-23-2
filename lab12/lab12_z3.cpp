// Karol Jabłoński 22.05.2023
#include <iostream>
using namespace std;

class Pojazd{
protected:
    double przebieg;
    int rok_prod;
public:
    Pojazd(){
        przebieg = 0.0;
        rok_prod = 2023;
    }

    Pojazd(double prz, int rok){
        przebieg = prz;
        rok_prod = rok;
    }

    ~Pojazd(){
        cout<<"Przebieg: "<<przebieg<<" Rok produkcji: "<<rok_prod<<endl;
    }

    void jazda(double km){
        cout<<"Jazda "<<km<<"km..."<<endl;
        przebieg += km;
        cout<<"Stan licznika po jezdzie: "<<przebieg<<endl;
    }    

    void przekrec_licznik(double km){
        cout<<"Przebieg przed kreceniem: "<<przebieg<<endl;
        przebieg = km;
        cout<<"Przebieg po kreceniu: "<<przebieg<<endl;
    }

};

class Samochod : virtual public Pojazd{
protected:
    double pojemnosc;
    int moc;
public:
    Samochod(): Pojazd(){
        pojemnosc = 1.0;
        moc = 85;
    }

    Samochod(double prz, int rok, double poj, int m): Pojazd(prz, rok){
        pojemnosc = poj;
        moc = m;
    }

    ~Samochod(){
        cout<<"Przebieg: "<<przebieg<<" Rok produkcji: "<<rok_prod<<" Pojemnosc silnika: "<<pojemnosc<<" Moc: "<<moc<<endl;
    }

    double km_na_kw(){
        return moc * 0.74;
    }

    void mapa_silnika(int dod){
        cout<<"Moc przed mapa: "<<moc<<endl;
        moc += dod;
        cout<<"Moc po mapie: "<<moc<<endl;
    }

};

class Lodz : virtual public Pojazd{
protected:
    double dlugosc;
    double szerokosc;
public:
    Lodz(): Pojazd(){
        dlugosc = 10.0;
        szerokosc = 5.0;
    }

    Lodz(double prz, int rok, double dl, double sz): Pojazd(prz, rok){
        dlugosc = dl;
        szerokosc = sz;
    }

    ~Lodz(){
        cout<<"Przebieg: "<<przebieg<<" Rok produkcji: "<<rok_prod<<" Dlugosc: "<<dlugosc<<" Szerokosc: "<<szerokosc<<endl;
    }

    double wielkosc_pokladu(){
        return dlugosc * szerokosc;
    }

    bool czy_wiekszy_poklad(Lodz &l){
        if(wielkosc_pokladu() > l.wielkosc_pokladu()){
            return true;
        }else{
            return false;
        }
    }



};

class Amfibia : virtual public Samochod, virtual public Lodz{
protected:
    bool sprawnosc;
    double grubosc_pancerza;
public:
    Amfibia(): Samochod(), Lodz(){
        sprawnosc = true;
        grubosc_pancerza = 10.0;
    }

    Amfibia(double prz, int rok, double poj, int m, double dl, double sz, bool s, double gr): Samochod(prz, rok, poj, m), Lodz(prz, rok, dl, sz){
        sprawnosc = s;
        grubosc_pancerza = gr;
    }

    ~Amfibia(){
        cout<<"Przebieg: "<<przebieg<<" Rok produkcji: "<<rok_prod<<" Pojemnosc: "<<pojemnosc<<" Moc: "<<moc<<" Dlugosc: "<<dlugosc<<" Szerokosc: "<<szerokosc<<" Sprawnosc: "<<boolalpha<<sprawnosc<<" Grubosc pancerza: "<<grubosc_pancerza<<endl;
    }

    bool zmien_stan(){
        sprawnosc = !sprawnosc;
        return sprawnosc;
    }

    void dodaj_uzbrojenie(double mm){
        grubosc_pancerza += mm;
        cout<<"Dodano "<<mm<<"mm uzbrojenia. Calkowita grubosc: "<<grubosc_pancerza<<endl;
    }

};



int main(){
    Pojazd *p1 = new Pojazd();
    Pojazd *p2 = new Pojazd(268724.4, 1988);
    Samochod *s1 = new Samochod();
    Samochod *s2 = new Samochod(34563.0, 2017, 2.3, 185);
    Lodz *l1 = new Lodz();
    Lodz *l2 = new Lodz(2356123.5, 1998, 23.0, 13.5);
    Amfibia *a1 = new Amfibia();
    Amfibia *a2 = new Amfibia(23984513.2, 1942, 12.5, 350, 8.5, 3.0, false, 15.0);
    p1->jazda(2.5);
    p2->przekrec_licznik(153125.0);
    delete p1;
    delete p2;
    s1->mapa_silnika(20);
    cout<<"Moc s2 w kW: "<<s2->km_na_kw()<<endl;
    delete s1;
    delete s2;
    cout<<"Wielkosc pokladu l2: "<<l2->wielkosc_pokladu()<<endl;
    cout<<"Czy l1 wiekszy od l2? "<<boolalpha<<l1->czy_wiekszy_poklad(*l2)<<endl;
    delete l1;
    delete l2;
    cout<<"Zmiana stanu sprawnosci a1 na: "<<a1->zmien_stan()<<endl;
    a2->dodaj_uzbrojenie(5.5);
    delete a1;
    delete a2;
    return 0;
}