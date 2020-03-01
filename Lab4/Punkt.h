#ifndef LAB4ZADANIE2_PUNKT_H
#define LAB4ZADANIE2_PUNKT_H


#include <string>
#include <iostream>

using namespace std;

namespace Geometria{

    class Punkt{

    public:
        Punkt(float x, float y);
        void setX(float _x){x=_x;}
        float getX() const{return x;}
        void setY(float _y){y=_y;}
        float getY() const {return y;}
        virtual bool zapisz(ostream &os) const;
        virtual bool wczytaj(istream &is);

    private:
        float x,y;
    };

}

#endif //LAB4ZADANIE2_PUNKT_H
