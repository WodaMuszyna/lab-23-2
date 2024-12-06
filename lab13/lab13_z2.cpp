//Karol Jabłoński 25.05.2023
#include <iostream>
using namespace std;

class Zesp{
public:
    int x,i;
    Zesp(){ x=0; i=0;}
    Zesp(int x, int i){ this->x = x; this->i = i;}
    ~Zesp(){}
};

Zesp operator +(Zesp a, Zesp b){
    Zesp c;
    c.x = a.x + b.x;
    c.i = a.i + b.i;
    return c;
}

bool operator >(Zesp a, Zesp b){ return ((a.x + a.i) > (b.x + b.i));}
bool operator <(Zesp a, Zesp b){ return ((a.x + a.i) < (b.x + b.i));}
Zesp operator -(Zesp &a){ return Zesp(-a.x, -a.i);}
Zesp operator -(Zesp a, Zesp b){ return a+(-b);}
Zesp operator *(Zesp a, Zesp b){
    Zesp c;
    c.x = a.x * b.x;
    c.i = a.i * b.i;
    return c;
}
bool operator ==(Zesp a, Zesp b){ return ((a.x == b.x) && (a.i == b.i));}
Zesp operator ++(Zesp &a, int){ return Zesp(a.x++, a.i++);}
Zesp operator --(Zesp &a){ return Zesp(--a.x, --a.i);};
ostream& operator <<(ostream& s, const Zesp& a){ return s<<" "<<a.x<<" + "<<a.i<<"i";}


int main(){
    Zesp a(3,4), b(-2, 6), c(1,1), d(5,1);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl<<endl;
    cout<<"a+b="<<a+b<<endl;
    cout<<"d-c="<<d-c<<endl;
    cout<<"b*d="<<b*d<<endl;
    cout<<"a>b="<<boolalpha<<(a>b)<<endl;
    cout<<"c<d="<<(c<d)<<endl;
    cout<<"a==b="<<(a==b)<<endl;
    cout<<"b++="<<b++<<endl;
    cout<<"--c="<<--c<<endl;
}
