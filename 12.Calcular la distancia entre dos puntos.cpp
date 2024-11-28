#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    // declaracion de variables para las coordenadas de dos puntos tanto del punto 1 y del punto 2
    float x1 = 6.0, y1 = 7.0; 
    float x2 = 3.0, y2 = 5.0; 

    // hacemos una formula calculando los puntos 
    float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // nos da el resultado 
    cout << "la distancia entre los puntos (" << x1 << ", " << y1 << ") y ("
         << x2 << ", " << y2 << ") es: " << distancia << endl;

    return 0;
}