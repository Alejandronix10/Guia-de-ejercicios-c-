#include <iostream>
using namespace std;

int main() {
    float peso = 7.65, altura = 1.75; // se declara las variables tanto de peso como de altura en este caso se usa float 
    float imc = peso / (altura * altura); // calcula el imc usando la formula 

    cout << "imc: " << imc << endl; // imprime el valor dado del imc

    return 0;
}
