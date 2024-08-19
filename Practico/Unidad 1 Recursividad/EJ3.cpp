/*
 Ejercicio N°3
Implementar una función recursiva que dado un número entero lo muestre de forma
 invertida ej: 10523 de mostrar 32501. Dar aviso de error en caso de uso de números
 negativos y mostrar primero el número a invertir y después el número invertido.

 */
#include <iostream>
using namespace std;

int invertirNumero(int num, int invertido = 0)
{
    if (num < 0)
    {
        cout << "Error: No se puede invertir un número negativo." << endl;
        return -1;
    }

    if (num == 0)
    {
        return invertido;
    }

    invertido = (invertido * 10) + (num % 10);
    return invertirNumero(num / 10, invertido);
}

int main()
{
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;

    int numeroInvertido = invertirNumero(numero);
    cout << "Número a invertir: " << numero << endl;
    cout << "Número invertido: " << numeroInvertido << endl;

    return 0;
}
