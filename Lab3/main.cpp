#include <iostream>
#include "obiekty.h"
using namespace std;

int main()
{
    try{
        Punkt p1(3.0,5.0);
        Punkt p2,p3,p4;
        Wielokat w1;
        Wielokat w2(5);
        cout<<"Liczba elementow w wielokacie w1: "<<w1.zwroc_licznik()<<endl;
        w1.dodaj_obiekt(p1);
        cout<<"Liczba elementow w wielokacie w1: "<<w1.zwroc_licznik()<<endl;
        w1.dodaj_obiekt(p2);
        cout<<"Liczba elementow w wielokacie w1: "<<w1.zwroc_licznik()<<endl;
        w1.dodaj_obiekt(p3);
        cout<<"Liczba elementow w wielokacie w1: "<<w1.zwroc_licznik()<<endl<<endl;

        Wielokat w3(w1);
        cout<<"Liczba elementow w wielokacie w3(w1): "<<w3.zwroc_licznik()<<endl;
        cout<<"Liczba elementow w wielokacie w1: "<<w1.zwroc_licznik()<<endl<<endl;

        Wielokat w4{move(w1)};
        cout<<"Liczba elementow w wielokacie w4{move(w1)}: "<<w4.zwroc_licznik()<<endl;
        cout<<"Liczba elementow w wielokacie w1: "<<w1.zwroc_licznik()<<endl<<endl;

        Wielokat w5;
        w5 = w4;
        cout<<"Liczba elementow w wielokacie w5 = w4: "<<w5.zwroc_licznik()<<endl;
        cout<<"Liczba elementow w wielokacie w4: "<<w4.zwroc_licznik()<<endl<<endl;

        Wielokat w6;
        w6 = move(w3);
        cout<<"Liczba elementow w wielokacie w6 = move(w3): "<<w6.zwroc_licznik()<<endl;
        cout<<"Liczba elementow w wielokacie w3: "<<w3.zwroc_licznik()<<endl<<endl;

        w1.dodaj_obiekt(p4);
        cout<<"Liczba elementow w wielokacie w1: "<<w1.zwroc_licznik()<<endl;
    }
    catch(string s){
        cout<<"Wyjatek: "<<s<<endl;
    }
}

