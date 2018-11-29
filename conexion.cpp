#include <conexion.h>
Conexion::Conexion(Neurona *neurona,float peso)
{
    this->r=neurona;
    this->peso=peso;

}
float Conexion::getPeso(){
    return this->peso;
}

Neurona* Conexion::getNeurona(){
    return this->r;
}
