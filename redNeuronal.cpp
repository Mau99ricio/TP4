#include<RedNeuronal.h>
#include <math.h>
RedNeuronal::RedNeuronal()
{
}
void RedNeuronal::AgregarCapa(Capa *capa){
    capas.Insertar(capa);
}
float RedNeuronal::funcionActivacion(float x, int i, Neurona *actual){
    for (int c =0; c< capas.getI(i-1)->neuronas.Longitud();c++){
        Neurona *n = capas.getI(i-1)->neuronas.getI(c);
        Conexion *nuevaConexion;
        for(int z=0; z<n->conexiones.Longitud(); z++){
            if(n->conexiones.getI(i)->getNeurona() == actual){
                nuevaConexion = n->conexiones.getI(i);
            }
        }
        x += n->carga*nuevaConexion->peso;

    }
    float y =(exp(x)-exp(-x))/(exp(x)+exp(-x));
    return y;
}
