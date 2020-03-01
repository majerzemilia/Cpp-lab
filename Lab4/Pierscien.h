#ifndef LAB4ZADANIE2_PIERSCIEN_H
#define LAB4ZADANIE2_PIERSCIEN_H


#include <string>
#include <iostream>
#include "Kolo.h"

using namespace std;

namespace Geometria{

    class Pierscien: public Kolo{

    public:
        Pierscien(const Punkt &srodek, const string &etykieta, float promien, float promien_wewn);
        virtual ~Pierscien(){};
        virtual string opis() const;
        virtual float pole() const;
        virtual bool wczytaj(istream &is);

    protected:
        float promien_wewn;
    };


}


#endif //LAB4ZADANIE2_PIERSCIEN_H
