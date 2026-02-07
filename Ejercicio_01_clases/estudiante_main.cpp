#include <iostream>
#include "estudiante.h"

int main() {

    std::cout << "Sistema de Gestión de Estudiante" << std::endl;
    std::cout << std::endl;

    Estudiante estudiante1;

    std::cout << "Estudiante 1 (constructor por defecto):" << std::endl;
    estudiante1.mostrarInformacionCompleta();
    std::cout << std::endl;

    estudiante1.actualizarNombre("Airam Garcia Diaz");
    estudiante1.actualizarCodigo("EST-2024-001");
    estudiante1.actualizarEdad(20);
    estudiante1.actualizarPromedio(9.2);
    estudiante1.actualizarActivo(true);

    std::cout << "Estudiante 1 después de actualizar:" << std::endl;
    estudiante1.mostrarInformacionCompleta();
    estudiante1.calcularEstadoAcademico();
    std::cout << std::endl;

    Estudiante estudiante2("Elias Torres Romero", "EST-2024-002", 22, 7.5, true);

    std::cout << "Estudiante 2 (constructor con parámetros):" << std::endl;
    estudiante2.mostrarInformacionCompleta();
    estudiante2.calcularEstadoAcademico();
    std::cout << std::endl;

    std::cout << "Incrementando edad del estudiante 2:" << std::endl;
    estudiante2.incrementarEdad();
    estudiante2.mostrarEdad();
    std::cout << std::endl;

    std::cout << "Intentando actualizar promedio con valor inválido:" << std::endl;
    estudiante2.actualizarPromedio(15.0);
    estudiante2.mostrarPromedio();
    std::cout << std::endl;

    return 0;
}
