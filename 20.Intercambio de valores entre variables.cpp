#include <iostream>
using namespace std;

int main() {
    int p = 7, q = 8;  // declaramos dos variables enteras 

    // imprimimos los valores
    cout << "antes del intercambio:" << endl;
    cout << "p = " << p << ", q = " << q << endl;

    // intercambiamos los valores utilizando xor
    p = p ^ q;  

    // se imprimen los valores despues del intercambio
    cout << "despues del intercambio: " << endl;
    cout << "p = " << p << ", q = " << q << endl;

    return 0;  
}