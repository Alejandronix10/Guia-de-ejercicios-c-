#include <iostream>
using namespace std;

int main() {
    int num = 4;  // se declara una variable entera y un valor inicial 

    // verificamos si el numero es par o impar y usamos la condicion if else 
    if (num % 2 == 0) {
        cout << "el numero " << num << " es par " << endl;  // si el numero es divisible por 2 sera par
    } else {
        cout << "el numero " << num << " es impar " << endl;  // si el numero no es divisible por 2 en este caso sera impar
    }

    return 0;  
}
