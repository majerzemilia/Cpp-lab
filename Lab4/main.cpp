#include "Punkt.h"
#include "Figura.h"
#include "Kolo.h"
#include "Pierscien.h"
#include "Trojkat.h"

using namespace Geometria;

int main()
{
    Punkt p1(2.5,3.6), p2(3.0,4.0), p3(4.0, 5.2), p4(2.7, 5.2), p5(3.2, 4.5), p6(2.4, 5.7), p7(2.5,4.5);
    cout<<"Punkt: "<<endl;
    p1.zapisz(cout);
    cout<<endl;
    Figura *tab[4];
    tab[0] = new Figura(p1, "etykieta figura");
    tab[1] = new Kolo(p2, "etykieta kolo", 5.0);
    tab[2] = new Pierscien(p3, "etykieta pierscien", 7.5, 2.5);
    tab[3] = new Trojkat(p4, p5, p6, p7, "etykieta trojkat");


    for(int i = 0; i < 4; i++){

        tab[i]->zapisz(cout);
        cout<<"Pole: "<<tab[i]->pole()<<endl;
        cout<<"Opis: "<<tab[i]->opis()<<endl<<endl;
    }

    for(int i = 0; i < 4; i++){

        tab[i]->wczytaj(cin);
        cout<<endl;
    }

    for (int i = 0; i < 4; i++){

        delete tab[i];
    }

    return 0;

}
