#ifndef CONEXION_H
#define CONEXION_H
#include<Neurona.h>
class Neurona;
class Conexion
{

public:
    Neurona *r;
    float peso;
    Conexion(Neurona *neurona,float peso);
    float getPeso();
};

#endif // CONEXION_H
