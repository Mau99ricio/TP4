#ifndef NEURONA_H
#define NEURONA_H
#include<Lista.h>
#include <Conexion.h>
class Conexion;
class Capa;
class Neurona
{
public:
    float carga;
    //float umbral;
    Lista<Conexion*> conexiones;
    Neurona();
    void AgregarConexion(Neurona *neurona, float peso);
    void aplicarCarga(float carga);
};

#endif // NEURONA_H

