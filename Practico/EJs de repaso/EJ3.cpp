#include <iostream>
#include <limits> 

using namespace std;

void marcarasiento(bool *seat) {
    *seat = true;
}

int main() {
    const int numseats = 10;
    bool seats[numseats] = {false};
    int seat;

    cout << "Estado inicial de los asientos:" << endl;
    for (int i = 0; i < numseats; i++) {
        cout << "Asiento " << i + 1 << ": " << (seats[i] ? "reservado" : "libre") << endl;
    }

    cout << "Ingrese el asiento que desea marcar (1-" << numseats << "): ";

    while (!(cin >> seat) || seat < 1 || seat > numseats) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada no válida. Por favor ingrese un número entre 1 y " << numseats << ": ";
    }

    if (seats[seat - 1]) {
        cout << "El asiento " << seat << " ya está reservado." << endl;
    } else {
        marcarasiento(&seats[seat - 1]);
        cout << "Asiento marcado: " << seat << endl;
    }

    for (int i = 0; i < numseats; i++) {
        cout << "Asiento " << i + 1 << ": " << (seats[i] ? "reservado" : "libre") << endl;
    }
    return 0;
}
