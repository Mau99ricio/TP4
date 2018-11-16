#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include <Nodo.h>

template <class T>
class Lista {
    Nodo<T> *cabeza ;
public:
    Lista<T>(){ cabeza= nullptr ;}

    void Insertar(T dato) {
        Nodo<T>* n = new Nodo<T>(dato) ;
        Nodo<T>* t= cabeza ;
        cabeza = n ;
        cabeza->setSiguiente(t);
    }

    int Longitud() {
        Nodo<T> *n= cabeza ;
        int c=0 ;
        while (n!=nullptr){
            c++;
            n= n->getSiguiente();
        }
        return c;
    }

    T getI(int i) {
        Nodo<T> *n= cabeza ;
        int c=0 ;
        while (n!=nullptr&& c<i){
            c++;
            n= n->getSiguiente();
        }
        return n!=nullptr?n->getDato():nullptr;
    }

};


#endif // LISTA_H
