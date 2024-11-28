#include <iostream>
using namespace std;

int main() {
    // declara dos variables numericas
    int num1 = 30;
    int num2 = 15;

    bool result1; // declara las variables booleanas
    bool result2;

    result1 = num1 > num2;  // Compara si num1 es mayor que num2
    result2 = num1 == num2; // Compara si num1 es igual a num2

    // muestra el resultado
    cout << "resultado de num1 > num2: " << result1 << endl; 
    cout << "resultado de num1 == num2: " << result2 << endl; 

    return 0;
}