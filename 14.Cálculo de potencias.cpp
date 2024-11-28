#include <iostream>
using namespace std;

// usamos la funcion int para calcular el cuadrado de un numero
int calcularCuadrado(int num) {
    return num * num;
}

// aqui tambien usamos la funcion int para calcular el cubo de un numero 
int calcularCubo(int num) {
    return num * num * num;
}

int main() {
    int num;

    // el usario debe ingresar un numero entero 
    cout << "porfavor ingrese un numero entero: ";
    cin >> num;

    // llamamos las funciones para calcular el cuadrado y el cubo
    int cuadrado = calcularCuadrado(num);
    int cubo = calcularCubo(num);

    // nos da el resulatado
    cout << "el cuadrado de " << num << " es: " << cuadrado << endl;
    cout << "el cubo de " << num << " es: " << cubo << endl;

    return 0;
}