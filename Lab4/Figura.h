#ifndef LAB4ZADANIE2_FIGURA_H
#define LAB4ZADANIE2_FIGURA_H


#include <string>
#include <iostream>
#include <sstream>
#include "Punkt.h"

using namespace std;

namespace Geometria{

    class Figura{

    public:
        Figura(const Punkt &srodek, const string &etykieta);
        virtual ~Figura(){};
        void setEtykieta(const string &_etykieta) {etykieta = _etykieta;}
        virtual string opis() const;
        virtual float pole() const {return 0;} //powinna byc abstrakcyjna
        bool zapisz(ostream &os) const;
        virtual bool wczytaj(istream &is);

    protected:
        Punkt srodek;
        string etykieta;
    };
}



#endif //LAB4ZADANIE2_FIGURA_H
