#include "Figura.h"

namespace Geometria{

    Figura::Figura(const Punkt &srodek, const string &etykieta): srodek{srodek}, etykieta{etykieta}{}

    string Figura::opis() const{

        string result = "Etykieta: " + etykieta;
        ostringstream ss;
        srodek.zapisz(ss);
        result += "\nSrodek: " + ss.str();
        return result;
    }

    bool Figura::zapisz(ostream &os) const{

        os<<opis();
        return os.good();
    }

    bool Figura::wczytaj(istream &is){

        is>>etykieta;
        srodek.wczytaj(is);
        return is.good();
    }

}
