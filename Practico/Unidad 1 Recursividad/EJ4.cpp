#include <iostream>
#include <vector>
using namespace std;

int encontrarMaximo(const vector<int>& vec, int n) {
    if (n == 1) {
        return vec[0];
    }

    int maxDelResto = encontrarMaximo(vec, n - 1);
    return max(vec[n - 1], maxDelResto);
}

int main() {
    int n;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Ingrese los elementos del vector:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int maximo = encontrarMaximo(vec, n);
    cout << "El mayor elemento del vector es: " << maximo << endl;

    return 0;
}
