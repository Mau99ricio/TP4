#ifndef NEURONA_H
#define NEURONA_H

#include<Lista.h>
class Neurona
{

public:
    float carga;
    float umbral;

    Lista<Nodo*> conexiones;
    Neurona();


};

#endif // NEURONA_H
