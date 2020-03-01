#include "Pierscien.h"

using namespace std;

namespace Geometria{

    Pierscien::Pierscien(const Punkt &srodek, const string &etykieta, float promien, float promien_wewn):
            Kolo(srodek, etykieta, promien), promien_wewn{promien_wewn}{}

    string Pierscien::opis()const{

        return Kolo::opis() + "promien_wewn: " + to_string(promien_wewn) + "\n";
    }

    float Pierscien::pole()const{

        return Kolo::pole() - 3.14*promien_wewn*promien_wewn;
    }

    bool Pierscien::wczytaj(istream &is){

        Kolo::wczytaj(is);
        is>>promien_wewn;
        return is.good();
    }
}
