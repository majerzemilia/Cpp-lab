#ifndef obiekty_h
#define obiekty_h
#include <iostream>
using namespace std;

class Macierz;

class Wektor {

    int x,y;

public:
    Wektor(): x{0},y{0}{};
    Wektor(int x, int y): x{x}, y{y}{};

    Wektor operator- ()const;
    Wektor operator* (const Macierz &m)const;
    bool operator!= (const Wektor &w)const;
    int operator[] (int)const;
    operator int() const;
    friend ostream & operator<< (ostream &wyjscie, const Wektor &w);
    friend Wektor operator* (const int &i, const Wektor &w);
    friend Wektor operator* (const Wektor &w, const int &i);
};

class Macierz {

    int mxx, mxy, myx, myy;

public:
    Macierz(): mxx{0}, mxy{0}, myx{0}, myy{0}{};
    Macierz(int mxx, int mxy, int myx, int myy): mxx{mxx}, mxy{mxy}, myx{myx}, myy{myy} {};

    Macierz operator+ (const Macierz &m)const;
    Macierz &operator+= (const Macierz &m);

    Macierz &operator-- ();
    Macierz operator--(int);

    friend ostream & operator<< (ostream &wyjscie, const Macierz &m);

    friend class Wektor;
};

ostream & operator<< (ostream &wyjscie, const Wektor &w);

ostream & operator<< (ostream &wyjscie, const Macierz &m);

Wektor operator* (const int &i, const Wektor &w);

Wektor operator* (const Wektor &w, const int &i);

#endif

