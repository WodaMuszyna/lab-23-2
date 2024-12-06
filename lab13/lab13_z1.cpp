//Karol Jabłoński 25.05.23
#include <iostream>
#include <algorithm>
using namespace std;

class Wielomian{
public:
    int stopien;
    double* wsp;

    Wielomian(int st){
        wsp = new double[st + 1];
        stopien = st;
    }

    void ustawWartosc(int stop, double wartosc){
        wsp[stop] = wartosc;
    }

};
    Wielomian operator +(Wielomian w1, Wielomian w2){
        int w = max(w1.stopien, w2.stopien);
        Wielomian Ws(w);

        for(int i=0; i<=w; i++){
            if(i<=w1.stopien && i<=w2.stopien){
                Ws.wsp[i] = w1.wsp[i]+w2.wsp[i];
            }else if(i<=w1.stopien){
                Ws.wsp[i] = w1.wsp[i];
            }else{
                Ws.wsp[i]=w2.wsp[i];
            }
        }
        return Ws;
    }

    Wielomian operator -(Wielomian w1, Wielomian w2){
        int w = max(w1.stopien, w2.stopien);
        Wielomian Wr(w);

        for(int i=0; i<=w; i++){
            if(i<=w1.stopien && i<=w2.stopien){
                Wr.wsp[i] = w1.wsp[i]-w2.wsp[i];
            }else if(i<=w1.stopien){
                Wr.wsp[i] = w1.wsp[i];
            }else{
                Wr.wsp[i]=w2.wsp[i];
            }
        }
        return Wr;
    }
    ostream& operator <<(ostream& s, Wielomian w){
        string res = "";
        if(w.wsp[0] > 0){
            res.append(to_string(w.wsp[0])+"x^"+'0');
        }else{
            res.append("("+to_string(w.wsp[0])+")x^"+'0');
        }
        for(int i=1; i<=w.stopien; i++){
            if(w.wsp[i] != 0){
                if(w.wsp[i] > 0){
                    res.append(" + "+to_string(w.wsp[i])+"x^"+to_string(i));
                }else{
                    res.append(" + ("+to_string(w.wsp[i])+")x^"+to_string(i));
                }
            }
        }
        res += '\n';
        return s<<res;
    }

    Wielomian operator *(Wielomian w1, Wielomian w2){
        int w = w1.stopien+w2.stopien;
        Wielomian Wi(w);
        for(int i=0; i<=(w1.stopien+w2.stopien); i++){
            Wi.wsp[i]=0;
        }
        for(int i=0; i<=w1.stopien; i++){
            for(int j=0; j<=w2.stopien; j++){
                Wi.wsp[i+j] += w1.wsp[i]*w2.wsp[j];
            }
        }
        return Wi;
    }

int main(){
    Wielomian w(3);
    Wielomian ww(3);
    int wart1[3] = {1, 3, 3};
    int wart2[3] = {2, -1, 8};
    for(int i=0; i<3; i++){
        w.ustawWartosc(i, wart1[i]);
        ww.ustawWartosc(i, wart2[i]);
    }
    cout<<"Dla danych wielomianow:"<<endl;
    cout<<w;
    cout<<ww;
    cout<<"Suma: ";
    cout<<w+ww;
    cout<<"Roznica: ";
    cout<<w-ww;
    cout<<"Iloczyn: ";
    cout<<w*ww;
    return 0;
}
