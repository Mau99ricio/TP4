#include<RedNeuronal.h>
#include <math.h>
RedNeuronal::RedNeuronal()
{
}
void RedNeuronal::AgregarCapa(Capa *capa){
    capas.Insertar(capa);
}
float RedNeuronal::funcionActivacion(float x, int i){
    for (int c =0; c< capas.getI(i-1)->neuronas.Longitud();c++){
        Neurona *n = capas.getI(i-1)->neuronas.getI(c);

    }
    float y =(exp(x)-exp(-x))/(exp(x)+exp(-x));
    return y;
}
