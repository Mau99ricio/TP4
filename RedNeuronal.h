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
    void AgregarCapa(Capa *capa);
    void Entrenar ();
    float funcionActivacion(float x,int i, Neurona *actual);
  //  Capa capaAnterior(int i){return  capas.getI(i-1);}
};

#endif // RED_H

