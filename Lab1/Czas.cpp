#include <iostream>
using namespace std;


class Czas {

    int h,m,s;
    static int suma;

public:
    Czas(): h{12}, m{0}, s{0}{ suma+=s;}
    Czas(int h, int m, int s=0):h{h},m{m},s{s}{

        if(h<0 || h>23 || m<0 || m>59 || s<0 || s>59){
            this->h = 12;
            this->m = 0;
            this->s = 0;
        }
        suma += this->s;

    }
    int liczbaGodzin(){ return h; }
    void dodajSekunde();
    bool czyRownyCzas(Czas czas1){return (czas1.h==h && czas1.m==m && czas1.s==s);}
    void wypisz(){cout<<h<<":"<<m<<":"<<s<<endl;}
    static int zwrocSume(){return suma;}
    void wczytaj(istream&is);
    void zapisz(ostream&os);

};

int Czas::suma = 0;

void Czas::dodajSekunde(){

    if(s<59){
        s++;
        return;
    }
    else{
        s = 0;
        m++;
        if(m == 60){
            m = 0;
            h++;
            if(h == 24){
                h = 0;
                m = 0;
                s = 0;
            }
        }
    }
}

void Czas::wczytaj(istream&is){

    char c;
    is>>h>>c>>m>>c>>s;
}

void Czas::zapisz(ostream&os){

    if(h<10) os<<0<<h<<":";
    else os<<h<<":";
    if(m<10) os<<0<<m<<":";
    else os<<m<<":";
    if(s<10) os<<0<<s<<endl;
    else os<<s<<endl;
}

main(){

    Czas c1{};
    cout<<"Wypisanie obiektu c1:  ";
    c1.wypisz();

    cout<<"Wypisanie obiektu c2:  ";
    Czas c2{25,16,18};
    c2.wypisz();

    cout<<"Wypisanie obiektu c3:  ";
    Czas c3{22,11,33};
    c3.wypisz();

    Czas c4{23,59,59};
    cout<<"Wypisanie obiektu c4:  ";
    c4.wypisz();

    Czas c5{22,58,59};
    cout<<"Wypisanie obiektu c5:  ";
    c5.wypisz();

    Czas c6{22,11};
    cout<<"Wypisanie obiektu c6:  ";
    c6.wypisz();

    cout<<endl<<"Wypisanie godzin w obiektach: "<<endl;
    cout<<"Obiekt c1: "<< c1.liczbaGodzin()<<endl;
    cout<<"Obiekt c2: "<< c2.liczbaGodzin()<<endl;
    cout<<"Obiekt c3: "<< c3.liczbaGodzin()<<endl;

    cout<<endl<<"Sprawdzenie funkcji czyRownyCzas: " <<endl;
    if(c1.czyRownyCzas(c2)) cout<<"czasy c1 i c2 sa rowne"<<endl;
    if(!c2.czyRownyCzas(c3)) cout<<"czasy c2 i c3 nie sa rowne"<<endl;


    cout<<endl<<"Sprawdzenie funkcji dodajSekunde: "<<endl;
    c1.dodajSekunde();
    cout<<"Obiekt c1 po dodaniu sekundy: ";
    c1.wypisz();

    c3.dodajSekunde();
    cout<<"Obiekt c3 po dodaniu sekundy: ";
    c3.wypisz();

    c4.dodajSekunde();
    cout<<"Obiekt c4 po dodaniu sekundy: ";
    c4.wypisz();

    c5.dodajSekunde();
    cout<<"Obiekt c5 po dodaniu sekundy: ";
    c5.wypisz();

    cout<<endl<<"Suma sekund w c2 ="<<c2.zwrocSume()<<" Dla obiektu c3 ="<<c3.zwrocSume()<<endl;

    cout<<endl<<"Sprawdzenie funkcji zapisz dla kolejno: c1, c3, c4, c5: "<<endl;
    c1.zapisz(cout);
    c3.zapisz(cout);
    c4.zapisz(cout);
    c5.zapisz(cout);

    cout<<endl<<"Sprawdzenie funkcji wczytaj dla c1: "<<endl;
    c1.wczytaj(cin);
    c1.wypisz();
}
