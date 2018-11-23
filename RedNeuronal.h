#ifndef RED_H
#define RED_H
#include<lista.h>
#include <capa.h>
class Capa;

class RedNeuronal
{

public:
    Lista<Capa*> capas;
    RedNeuronal();
    void AgregarCapa(Capa capa);
    void Entrenar ();
    float funcionActivacion(float x);
};

#endif // RED_H
