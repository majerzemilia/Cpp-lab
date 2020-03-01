//
// Created by Emilia on 28.05.2019.
//

#include "Osoba.h"

string Osoba::imiona[5] = {"Emilia", "Tomasz", "Julian", "Maria", "Anna"};
string Osoba::nazwiska[5] = {"Kowal", "Nowak", "Polak", "Majerz", "Smoter"};

Osoba::Osoba() {
    imie = imiona[rand()%5];
    nazwisko = nazwiska[rand()%5];
    rok_ur = 1950 + rand()%61;
    klucz = nazwisko+imie;
}

ostream &operator<<(ostream &out, const Osoba &o) {
    return out<<"Imie: "<<o.imie<<", nazwisko: "<<o.nazwisko<<", rok urodzenia: "<<to_string(o.rok_ur)<<endl;
}

bool operator<(const Osoba &o1, const Osoba &o2) {
    return o1.klucz < o2.klucz;
}

