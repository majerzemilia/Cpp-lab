#ifndef LAB4ZADANIE2_KOLO_H
#define LAB4ZADANIE2_KOLO_H


#include <string>
#include <iostream>
#include "Punkt.h"
#include "Figura.h"

using namespace std;

namespace Geometria{

    class Kolo: public Figura{

    public:
        Kolo(const Punkt &srodek, const string &etykieta, float promien);
        virtual ~Kolo(){};
        virtual string opis() const;
        virtual float pole() const;
        virtual bool wczytaj(istream &is);

    protected:
        float promien;
    };


}


#endif //LAB4ZADANIE2_KOLO_H
