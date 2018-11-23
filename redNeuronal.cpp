#include<RedNeuronal.h>
#include <math.h>
RedNeuronal::RedNeuronal()
{
}
void RedNeuronal::AgregarCapa(Capa capa){

}
float RedNeuronal::funcionActivacion(float x){

    float y =(exp(x)-exp(-x))/(exp(x)+exp(-x));
    return y;
}
