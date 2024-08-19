#include <iostream>
using namespace std;

bool contieneDigito(int n, int d) {
    if (n == 0) {
        return false;
    }

    if (n % 10 == d) {
        return true;
    }

    return contieneDigito(n / 10, d);
}

int main() {
    int n, d;

    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    cout << "Ingrese un dígito a buscar en el número: ";
    cin >> d;

    if (contieneDigito(n, d)) {
        cout << "Verdadero: El dígito " << d << " está en el número " << n << "." << endl;
    } else {
        cout << "Falso: El dígito " << d << " no está en el número " << n << "." << endl;
    }

    return 0;
}
