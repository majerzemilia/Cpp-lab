#include <iostream>
#include "obiekty.h"

using namespace std;


Wektor Wektor::operator- ()const{

        return Wektor(-x, -y);
}

Wektor Wektor::operator* (const Macierz &m)const{

    return Wektor(m.mxx*x + m.mxy*y, m.myx*x + m.myy*y);
}

int Wektor::operator[] (int i)const{

    if (i == 0)
        return x;
    else
        return y;
}

Macierz Macierz::operator+ (const Macierz &m)const{

        return Macierz(this->mxx + m.mxx, this->mxy + m.mxy, this->myx + m.myx, this->myy + m.myy);
}

Macierz& Macierz::operator+= (const Macierz &m){

        this->mxx += m.mxx;
        this->mxy += m.mxy;
        this->myx += m.myx;
        this->myy += m.myy;
        return *this;
}

ostream & operator<< (ostream &wyjscie, const Wektor &w) {

   return wyjscie << "x = " <<w.x << endl << "y = " <<w.y<< endl;
 }

ostream & operator<< (ostream &wyjscie, const Macierz &m) {

   return wyjscie << "mxx = " <<m.mxx << endl << "mxy = "<< m.mxy << endl << "myx = " << m.myx <<endl << "myy = " << m.myy << endl ;
 }


Wektor operator* (const int &i, const Wektor &w){

    return Wektor(w.x*i, w.y*i);
}

Wektor operator* (const Wektor &w, const int &i){

    return Wektor(w.x*i, w.y*i);
}

Macierz &Macierz::operator-- () {		//	prefix form

	mxx--;
    mxy--;
	myx--;
	myy--;
	return *this;
}

Macierz Macierz::operator-- (int) {	//	postfix form

	Macierz temp = *this;
	mxx--;
    mxy--;
    myx--;
    myy--;
    return temp;
}

bool Wektor::operator!= (const Wektor &w)const{

    return x != w.x || y != w.y;
}

Wektor::operator int() const{

    return (int) (x*x + y*y);
}

