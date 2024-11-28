#include <iostream>
#include <cmath> // usamos la libreria cmath 

using namespace std;

int main() {
    // declaramos la variable double 
    double num = 5.95;

    // se redondea el numero 
    int numRedondeado = round(num);

    // nos imprime el resultado 
    cout << "el numero es: " << num << endl;
    cout << "el numero redondeado es: " << numRedondeado << endl;

    return 0;
}