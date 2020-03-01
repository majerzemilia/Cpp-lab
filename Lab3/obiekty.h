#ifndef obiekty_h
#define obiekty_h
#include <iostream>
using namespace std;

class Punkt{

    float x,y;

public:
    Punkt(float x=0, float y=0): x{x}, y{y}{};

};

class Wielokat{

    int rozmiar;
    int licznik;
    Punkt *tab;

public:
    Wielokat(int rozmiar=3): rozmiar{rozmiar}, licznik{0}, tab{new Punkt[rozmiar]}{};

    Wielokat(const Wielokat &w);
	Wielokat(Wielokat &&w);

	Wielokat &operator=(const Wielokat &w);
	Wielokat &operator=(Wielokat &&w);

	int zwroc_licznik()const {return this->licznik;}

	void dodaj_obiekt(const Punkt &p);

	~Wielokat() {delete[] tab;}
};


#endif

