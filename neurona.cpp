#include "Neurona.h"
#include<stdlib.h>
#include<time.h>
Neurona::Neurona()
{

}
void Neurona:: AgregarConexion(Neurona *neurona, float peso) {
  Conexion *con = new Conexion(neurona,peso);
  conexiones.Insertar(con);

}
void Neurona:: aplicarCarga(float carga){

     this->carga=carga;
}
int Neurona::datoCancion(string palabra){
    int t = palabra.length();
    int dato =0;
    for (int i =0; i<t;i++){
        dato += (int)palabra[i];
    }
    return dato;
}
