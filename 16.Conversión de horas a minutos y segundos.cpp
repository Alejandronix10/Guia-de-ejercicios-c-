#include <iostream>

using namespace std;

int main() {
    // declaramos la variable entero para las horas
    int horas;

    // ingresamos el numero de horas
    cout << "Ingresa el numero de horas: ";
    cin >> horas;

    // convertimos a minutos y segundos 
    int min = horas * 60;  
    int seg = min * 60; 

    // imprime el resulatdo
    cout << horas << " horas son equivalentes a: " << min << " minutos y " << seg << " segundos " << endl;

    return 0;
}
