#ifndef CAPA_H
#define CAPA_H
#include<Lista.h>
#include<Neurona.h>
class Neurona;
class Capa
{
public:
    Lista<Neurona*> neuronas;

    Capa();
    void AgregarNeurona(Neurona *neurona);
};

#endif // CAPA_H
