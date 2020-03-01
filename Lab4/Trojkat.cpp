#include "Trojkat.h"

using namespace std;

namespace Geometria{

    Trojkat::Trojkat(const Punkt &srodek, const Punkt &p1, const Punkt &p2, const Punkt &p3, string etykieta):
            Figura(srodek, etykieta), p1{p1}, p2{p2}, p3{p3} {}

    string Trojkat::opis() const{

        ostringstream ss1, ss2, ss3;
        p1.zapisz(ss1);
        p2.zapisz(ss2);
        p3.zapisz(ss3);
        return Figura::opis() + "p1: " +  ss1.str() + "p2: " + ss2.str() + "p3: " + ss3.str();
    }

    float Trojkat::pole() const{

        return 0.5*abs((p2.getX() - p1.getX())*(p3.getY() - p2.getY()) - (p2.getY() - p1.getY())*(p3.getX() - p2.getX()));
    }

    bool Trojkat::wczytaj(istream &is){

        Figura::wczytaj(is);
        p1.wczytaj(is);
        p2.wczytaj(is);
        p3.wczytaj(is);
        return is.good();
    }

}