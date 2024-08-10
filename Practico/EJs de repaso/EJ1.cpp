#include <iostream>
using namespace std;

void intercambiar(int &vaso1, int &vaso2)
{
    int aux = vaso1;
    vaso1 = vaso2;
    vaso2 = aux;
}

int main()
{
    int vaso1;
    int vaso2;

    cout << "ingrese el valor del vaso 1: ";
    cin >> vaso1;
    cout << "ingrese el valor del vaso 2: ";
    cin >> vaso2;
    cout << "valores de los vasos sin intercambiar: " << endl;
    cout << "vaso 1: " << vaso1 << " vaso 2: " << vaso2 << endl;
    intercambiar(vaso1, vaso2);
    cout << "valores de los vasos intercambiados: " << endl;
    cout << "vaso 1: " << vaso1 << " vaso 2: " << vaso2 << endl;

    return 0;
}
