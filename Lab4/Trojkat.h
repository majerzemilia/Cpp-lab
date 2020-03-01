#ifndef LAB4ZADANIE2_TROJKAT_H
#define LAB4ZADANIE2_TROJKAT_H


#include <string>
#include <iostream>
#include "Punkt.h"
#include "Figura.h"

using namespace std;

namespace Geometria{

    class Trojkat: public Figura{

    public:
        Trojkat(const Punkt &srodek, const Punkt &p1, const Punkt &p2, const Punkt &p3, string etykieta);
        virtual ~Trojkat(){};
        virtual string opis() const;
        virtual float pole() const;
        virtual bool wczytaj(istream &is);

    protected:
        Punkt p1,p2,p3;
    };


}

#endif //LAB4ZADANIE2_TROJKAT_H
