//
// Created by Emilia on 21.05.2019.
//
#ifndef LAB5PRZYKLADOWY_LISTA_H
#define LAB5PRZYKLADOWY_LISTA_H

#include <iostream>
#include <memory>
#include "Wyjatek.h"
using namespace std;

template <typename T> class Lista;
template <typename T>
struct Node{
    T val;
    Node *next;
};

template <typename T> ostream& operator<< (ostream&, Lista<T>&);
template <typename T> class Lista{
    Node<T> *head;
    Lista(const Lista &l){}
    Lista operator=(const Lista &l){}

public:
    explicit Lista();
    ~Lista();
    void wstaw(T v);
    void usun();
    friend ostream& operator<< <> (ostream&, Lista<T>&);
};

#endif //LAB5PRZYKLADOWY_LISTA_H
