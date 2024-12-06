// Karol Jabłoński 11.05.2023
#include <iostream>
#include <cmath>
using namespace std;

class Prost{
    double a,b;
public:
    Prost(){ a=1; b=1;}
    Prost(double bok){ a=bok; b=bok;}
    Prost(double x, double y){ a=x; b=y;}
    double getA(){ return a;}
    double getB(){ return b;}
    double dlPrzekatnej(){ return sqrt(a*a+b*b);}
    double pole(){ return a*b;}
    double obwod(){ return 2*a+2*b;}
    bool czyWiekszyNiz(Prost& p){
        if(pole() > p.pole()) return true;
        return false;
    }
    void info(){
        cout<<"Prost["<<a<<","<<b<<"]"<<endl;
    }
};

int main(){
    Prost p1, p2(2), p3(3,6);
    cout<<"p3 getA() => "<<p3.getA()<<endl;
    cout<<"p3 getB() => "<<p3.getB()<<endl;
    cout<<"p3 dlPrzekatnej() => "<<p3.dlPrzekatnej()<<endl;
    cout<<"p3 pole() => "<<p3.pole()<<endl;
    cout<<"p3 obwod() => "<<p3.obwod()<<endl;
    cout<<"p3 czyWiekszyNiz(p2) => "<<boolalpha<<p3.czyWiekszyNiz(p2)<<endl;
    cout<<"p1 czyWiekszyNiz(p3) => "<<p1.czyWiekszyNiz(p3)<<endl;
    cout<<"p3 info() => "; p3.info();
    cout<<"p1 info() => "; p1.info();
    return 0;
}
