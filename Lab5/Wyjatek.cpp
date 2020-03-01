//
// Created by Emilia on 21.05.2019.
//

#include "Wyjatek.h"

ostream& operator<< (ostream& out, const Wyjatek &w){
    return out << w.opis;
}