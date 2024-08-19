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
