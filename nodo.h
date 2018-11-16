#ifndef NODO_H
#define NODO_H
#include <iostream>

using namespace std;
//NODOLISTA.H//////////////////////////////////////////////////////////////////
template <class T>
class Nodo {
    T dato ;
    Nodo<T>* siguiente ;
public:
    Nodo(T d){
        dato= d ;
        siguiente= nullptr;
    }

    T getDato() {
        return dato ;
    }
    void setSiguiente(Nodo<T> *s) {
        siguiente= s ;
    }
    Nodo<T>* getSiguiente() {return siguiente;}
};
#endif // NODO_H
