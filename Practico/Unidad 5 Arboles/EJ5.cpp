#include <iostream>
#include "./librerias/ArbolBinario.h"

int main()
{
    ArbolBinario<int> Paquete;

    Paquete.put(1001);
    Paquete.put(5002);
    Paquete.put(3003);
    Paquete.put(2004);
    Paquete.put(4500);
    Paquete.put(7005);
    Paquete.put(8006);

    std::cout << "Lista de reservas antes de las modificaciones:" << std::endl;
    Paquete.print(); 

    Paquete.remove(2004);
    Paquete.remove(4500);

    Paquete.put(3500);

    try
    {
        int mesa = Paquete.search(1001);
        std::cout << "El paquete con número 1001 está activo." << std::endl;
    }
    catch (int e)
    {
        std::cout << "El paquete con número 1001 no está en el sistema." << std::endl;
    }

    return 0;
}