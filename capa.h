#ifndef CAPA_H
#define CAPA_H
#include<Lista.h>
#include<Neurona.h>

class Capa
{
public:
    Lista<Neurona*> neuronas;

    capa();
    void AgregarNeurona(Neurona *neurona);
};

#endif // CAPA_H
