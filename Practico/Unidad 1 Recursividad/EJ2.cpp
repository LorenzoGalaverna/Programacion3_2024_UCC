#include <iostream>
using namespace std;

int sumaNaturales(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sumaNaturales(n - 1);
}

int main() {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;
    cout << "La suma de los primeros " << n << " números naturales es: " << sumaNaturales(n) << endl;
    return 0;
}