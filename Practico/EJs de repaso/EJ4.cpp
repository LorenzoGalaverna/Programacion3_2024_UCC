#include <iostream>
#include <limits> 

using namespace std;

int sumarEntero(int a, int b){
    return a + b;
}

double potencia(double base, double exponente){
    double resultado = 1;
    for (int i = 0; i < exponente; i++){
        resultado *= base;
    }
    return resultado;
}

double areacirculo(double radio){
    return 3.14159 * potencia(radio, 2);
}

int main() {
    int opcion;
    cout << "Ingrese la operación que desea realizar:" << endl;
    cout << "1. Sumar dos enteros" << endl;
    cout << "2. Calcular la potencia de un número" << endl;
    cout << "3. Calcular el área de un círculo" << endl;
    while (!(cin >> opcion) || opcion < 1 || opcion > 3) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada no válida. Por favor ingrese un número entre 1 y 3: ";
    }
    if (opcion == 1){
        int a, b;
        cout << "Ingrese el primer número: ";
        cin >> a;
        cout << "Ingrese el segundo número: ";
        cin >> b;
        cout << "La suma de los números es: " << sumarEntero(a, b) << endl;
    } else if (opcion == 2){
        double base, exponente;
        cout << "Ingrese la base: ";
        cin >> base;
        cout << "Ingrese el exponente: ";
        cin >> exponente;
        cout << "La potencia es: " << potencia(base, exponente) << endl;
    } else if (opcion == 3){
        double radio;
        cout << "Ingrese el radio del círculo: ";
        cin >> radio;
        cout << "El área del círculo es: " << areacirculo(radio) << endl;
    } else {
        cout << "Opción no válida." << endl;
    }

    return 0;
}
