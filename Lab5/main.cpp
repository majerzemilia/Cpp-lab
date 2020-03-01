//
// Created by Emilia on 21.05.2019.
//
#include <iostream>
#include "Lista.cpp"
using namespace std;

const char* min(const char *a, const char *b, const char *c){
    if(a[0]<=b[0] && a[0]<=c[0]) return a;
    else if (b[0]<=a[0] && b[0]<=c[0]) return b;
    return c;
}

template <typename T> T min(T &a, T &b, T &c){
    if (a<=b && a<=c) return a;
    else if (b<=a && b<=c) return b;
    return c;
}

int main(){

    try {
        const char *d = "tata", *e = "mama", *f = "tata";
        cout << min(d, e, f) << endl;
        int a = 0, b = 2, c = 500;
        cout << min(a, b, c) << endl;
        cout<<endl;

        Lista<int> lista;
        lista.wstaw(1);
        lista.wstaw(2);
        lista.wstaw(3);
        cout << lista;
        lista.usun();
        lista.usun();
        cout << lista;
        Lista<double> lista2;
        lista2.wstaw(1.0);
        lista2.wstaw(1.5);
        cout<<lista2;
        lista2.usun();
        lista2.usun();
        lista2.usun();
    }
    catch(Wyjatek &w){
        cout<<w<<endl;
    }
}