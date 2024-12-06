// Karol Jabłoński 18.05.2023
#include <iostream>
#include <cmath>
using namespace std;

class Figura{
protected:
    string nazwa;
public:
    Figura(){
        nazwa = "Figura";
    }
    Figura(string nazwa){
        nazwa = nazwa;
    }
    virtual double Obwod() = 0;
    virtual double Pole() = 0;
    void wypisz(){
        cout<<nazwa<<" o polu "<<Pole()<<" i obwodzie "<<Obwod()<<endl;
        return;
    }
};

class Kolo : public Figura{
protected:
    double promien;
public:
    Kolo(){
        promien = 0;
        nazwa = "Kolo";
    }
    Kolo(double pr){
        promien = pr;
    }
    Kolo(double pr, string naz){
        promien = pr;
        nazwa = naz;
    }
    virtual double Obwod(){ return 2*3.14*promien;}
    virtual double Pole(){ return 3.14*promien*promien;}
};

class Kwadrat : public Figura{
protected:
    double bok;
public:
    Kwadrat(){
        bok = 0;
        nazwa = "Kwadrat";
    }
    Kwadrat(double b){
        bok = b;
    }
    Kwadrat(double b, string naz){
        bok = b;
        nazwa = naz;
    }
    virtual double Obwod(){ return 4*bok;}
    virtual double Pole(){ return bok*bok;}
};

class Trojkat : public Figura{
protected:
    double a;
    double b;
    double c;
public:
    Trojkat(){
        a=0;
        b=0;
        c=0;
        nazwa = "Trojkat";
    }
    Trojkat(double a, double b, double c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
    Trojkat(double a, double b, double c, string nazwa){
        this->a = a;
        this->b = b;
        this->c = c;
        this->nazwa = nazwa;
    }
    virtual double Obwod(){ return a+b+c;}
    virtual double Pole(){ double p = Obwod()/2; return sqrt(p*(p-a)*(p-b)*(p-c));}
};

int main(){
    Kwadrat k(6);
    k.wypisz();
    Trojkat t(3,4,5);
    t.wypisz();
    return 0;
}
