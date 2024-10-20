#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <chrono>
#include <iomanip>
#include <1.cpp>

int main() {
    std::string archivoCSV;
    std::cout << "Ingrese el nombre del archivo CSV: ";
    std::cin >> archivoCSV;

    auto inicioCarga = std::chrono::high_resolution_clock::now();
    bool cargado = cargarDatosDesdeCSV(archivoCSV);
    auto finCarga = std::chrono::high_resolution_clock::now();

    if (!cargado) {
        return 1;
    }

    auto tiempoCarga = std::chrono::duration_cast<std::chrono::milliseconds>(finCarga - inicioCarga);
    mostrarEficiencia("Carga de Datos desde CSV", tiempoCarga, conditionalCount,
                      "Lectura Secuencial y Uso de HashMaps",
                      "unordered_map, vector");

    // Reiniciar contador de condicionales
    conditionalCount = 0;

    int opcion;
    do {
        mostrarMenu();
        std::cin >> opcion;
        auto inicioProceso = std::chrono::high_resolution_clock::now();
        switch (opcion) {
            case 1:
                mostrarResultadosPrincipales();
                break;
            case 2:
                agregarPartido();
                break;
            case 3:
                eliminarPartido();
                break;
            case 4:
                modificarPartido();
                break;
            case 5:
                manejarConsultasDinamicas();
                break;
            case 6:
                std::cout << "Saliendo del programa.\n";
                break;
            default:
                std::cerr << "Opción inválida.\n";
        }
        auto finProceso = std::chrono::high_resolution_clock::now();
        auto tiempoProceso = std::chrono::duration_cast<std::chrono::milliseconds>(finProceso - inicioProceso);
        mostrarEficiencia("Proceso Seleccionado", tiempoProceso, conditionalCount,
                          "Algoritmos y Estructuras Utilizadas",
                          "unordered_map, vector, sort");
        conditionalCount = 0; // Reiniciar contador después de cada proceso
    } while (opcion != 6);

    return 0;
}
