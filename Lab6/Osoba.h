//
// Created by Emilia on 28.05.2019.
//

#ifndef LAB6ZADANIE_OSOBA_H
#define LAB6ZADANIE_OSOBA_H
#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;

class Osoba {

    string imie;
    string nazwisko;
    int rok_ur;
    string klucz;
    static string imiona[5];
    static string nazwiska[5];
public:
    Osoba();
    string getKlucz()const{return klucz;}
    int getRokUr() const{return rok_ur;}
    string getNazwisko() const {return nazwisko;}
    friend ostream& operator<< (ostream &out, const Osoba &o);
    friend bool operator<(const Osoba &o1, const Osoba &o2);

};


#endif //LAB6ZADANIE_OSOBA_H
