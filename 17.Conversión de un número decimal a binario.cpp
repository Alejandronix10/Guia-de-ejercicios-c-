#include <iostream>
using namespace std;

int main() {
    int num = 10;  // numero decimal que vamos a convertir

    // se imprime el numero binario
    cout << "el numero en binario es: ";

    // si el numero es mayor a 0 se seguira dividiendo
    while (num > 0) {
        cout << num % 2;  // se imprime  el residuo si es tanto 0 o 1 y dividimos el numero por 2
        num = num / 2;     
    }

    cout << endl; 

    return 0;
}
