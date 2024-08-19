#include <iostream>
using namespace std;

int potencia(int base, int exponente)
{
    if (exponente==0){
        return 1;
    }
    else{
        return base*potencia(base, exponente-1);
    }
}

int main()
{
    int base;
    int exponente;
    int resultado;

    cout << "ingrese el valor de la base: ";
    cin >> base;
    cout << "ingrese el valor del exponente: ";
    cin >> exponente;
    resultado = potencia(base, exponente);
    cout << "Resultado: " << resultado << endl;
    return 0;
}
