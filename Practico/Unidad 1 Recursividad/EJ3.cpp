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
