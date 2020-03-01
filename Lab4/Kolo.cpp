#include "Kolo.h"


namespace Geometria{

    Kolo::Kolo(const Punkt &srodek, const string &etykieta, float promien): Figura(srodek,etykieta), promien{promien}{}

    string Kolo::opis()const{

        ostringstream ss;
        return Figura::opis() + "promien: " + to_string(promien) + "\n";
    }

    float Kolo::pole()const{

        return 3.14*promien*promien;
    }

    bool Kolo::wczytaj(istream &is){

        Figura::wczytaj(is);
        is>>promien;
        return is.good();
    }

}
