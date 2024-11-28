#include <iostream>
using namespace std;

int main() {
    float capital = 5000.0;  // capital inicial
    float tasa = 0.10;       // tasa de interes en este caso sera el 10%
    float tiempo = 5.0;      // tiempo en años sera de 5 años

    // usamos para calcular el interes 
    float interes = capital * tasa * tiempo;

    // nos da el resultado
    cout << "su interes simple es : " << interes << endl;

    return 0; 
}
