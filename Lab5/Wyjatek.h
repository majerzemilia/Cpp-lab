//
// Created by Emilia on 21.05.2019.
//

#ifndef LAB5PRZYKLADOWY_WYJATEK_H
#define LAB5PRZYKLADOWY_WYJATEK_H
#include <iostream>
#include <string>
using namespace std;

class Wyjatek {
    string opis;
public:
    explicit Wyjatek(const string &s): opis{s}{}
    friend ostream& operator<< (ostream& out, const Wyjatek&);
};


#endif //LAB5PRZYKLADOWY_WYJATEK_H
