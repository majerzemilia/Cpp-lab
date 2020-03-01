#include <iostream>
#include "obiekty.h"

using namespace std;

Wielokat::Wielokat(const Wielokat &w): rozmiar{w.rozmiar}, licznik{w.licznik}, tab{new Punkt[rozmiar]} {	//	copy ctor

    cout<<"copy ctor"<<endl;
    copy(w.tab, w.tab+rozmiar, tab);	//	stl std::copy
}

Wielokat::Wielokat(Wielokat &&w): rozmiar{w.rozmiar}, licznik{w.licznik}, tab{w.tab} {						//	move ctor

    cout<<"move ctor"<<endl;
    w.rozmiar = 0;
    w.licznik = 0;
    w.tab = nullptr;
}

Wielokat &Wielokat::operator=(const Wielokat &w){									//	copy assignment

    cout<<"copy assignment"<<endl;
    if(this == &w) return *this;
    delete[] tab;
    rozmiar = w.rozmiar;
	licznik = w.licznik;
	tab = new Punkt[rozmiar];
    copy(w.tab, w.tab+rozmiar, tab);
    return *this;
}

Wielokat &Wielokat::operator=(Wielokat &&w) {										//	move assignment

    cout<<"move assignment"<<endl;
    if(this == &w) return *this;
	delete[] tab;
	rozmiar = w.rozmiar;
	licznik = w.licznik;
	tab = w.tab;
	w.rozmiar = 0;
	w.licznik = 0;
	w.tab = nullptr;
	return *this;
}

void Wielokat::dodaj_obiekt(const Punkt &p){

    if(licznik == rozmiar){

        string wyjatek = "Osiagnieto maksymalna liczbe elementow w tablicy";
        throw wyjatek;
    }
    tab[licznik++] = p;
}
