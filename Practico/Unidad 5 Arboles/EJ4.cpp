#include <iostream>
#include "./librerias/ArbolBinario.h"

int main()
{
    ArbolBinario<int> Restaurante;

    Restaurante.put(15);
    Restaurante.put(10);
    Restaurante.put(20);
    Restaurante.put(5);
    Restaurante.put(12);
    Restaurante.put(18);
    Restaurante.put(25);

    std::cout << "Lista de reservas antes de las modificaciones:" << std::endl;
    Restaurante.print(); 

    Restaurante.remove(10);
    Restaurante.remove(20);

    Restaurante.put(13);

    try
    {
        int mesa = Restaurante.search(12);
        std::cout << "La mesa con número 12 está activo." << std::endl;
    }
    catch (int e)
    {
        std::cout << "La mesa con número 12 no está en el sistema." << std::endl;
    }

    return 0;
}