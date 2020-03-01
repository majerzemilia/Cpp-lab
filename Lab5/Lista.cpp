//
// Created by Emilia on 21.05.2019.
//
#include <iostream>
#include "Lista.h"
using namespace std;

template <typename T>
Lista<T>::Lista(){
    head = nullptr;
}

template<typename T>
Lista<T>::~Lista() {
    if(head == nullptr) return;
    Node <T> *curr = head;
    Node <T> *currnext;
    while(curr->next != nullptr){
        currnext = curr->next;
        delete curr;
        curr = currnext;
    }
    delete curr;
}

template<typename T>
void Lista<T>::wstaw(T v) {
    auto *el = new Node<T>;
    el->val = v;
    el->next = nullptr;
    if(head == nullptr){
        head = el;
        return;
    }
    Node<T> *curr = head;
    while(curr->next != nullptr) curr = curr->next;
    curr->next = el;
}

template<typename T>
void Lista<T>::usun() {
    if(head == nullptr){
        Wyjatek w("Nie da sie usunac z pustej listy!");
        throw w;
    }
    Node<T> *curr = head;
    if(curr->next == nullptr){
        delete curr;
        head = nullptr;
        return;
    }
    while(curr->next->next != nullptr) curr = curr->next;
    delete curr->next;
    curr->next = nullptr;
}

template <typename T>
inline ostream& operator<< (ostream& out, Lista<T> &lista){

    Node<T> *curr = lista.head;
    while(curr != nullptr) {
        out << curr->val<<((curr->next!= nullptr) ? ", " : "\n");
        curr = curr->next;
    }
    return out;
}