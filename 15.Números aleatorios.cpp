#include <iostream>

using namespace std;

int main() {
    // aqui nos genera un numero ramdon 
    int randomNum = (3 * 5 + 7) % 100 + 1; 

    // nos muestra el numero generado
    cout << "el numero aleatorio generado es: " << randomNum << endl;

    return 0;
}
