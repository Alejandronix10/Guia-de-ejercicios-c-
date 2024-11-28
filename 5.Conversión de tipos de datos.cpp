
#include <iostream>
using namespace std;

int main() {
    double numDouble = 7.80; // declara una variable de tipo double 
    int numInt = (int)numDouble; // convertimos numDouble de tipo double al valor decimal
    cout << "numero en tipo int: " << numInt << endl; // imprime el decimal

    numInt = 3; // asigna el valor a la variable 
    double numDoubleConVari = (double)numInt; // convertimos numint de tipo int a tipo double
    cout << "numero en tipo double: " << numDoubleConVari << endl; // muestra el valor cortido al double

    return 0;
}
