/*
 Ejercicio N°6
Crear un programa que pida al usuario un número entero positivo "n". Luego implementar
 una función recursiva que cuente la cantidad de dígitos pares que ocupan posiciones
 impares (identificándolas de izquierda a derecha) en "n". Ej.: si el número es 22005
 el resultado es 2, y si fuera 1414 el resultado es 0

 */
#include <iostream>
using namespace std;

int contarParesEnPosImpar(int n, int pos) {
    if (n == 0) {
        return 0;
    }

    int ultimoDigito = n % 10;

    int contador = 0;
    if (pos % 2 != 0 && ultimoDigito % 2 == 0) {
        contador++;
    }

    return contador + contarParesEnPosImpar(n / 10, pos + 1);
}

int main() {
    int n;

    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    int resultado = contarParesEnPosImpar(n, 1);
    cout << "La cantidad de dígitos pares en posiciones impares es: " << resultado << endl;

    return 0;
}
