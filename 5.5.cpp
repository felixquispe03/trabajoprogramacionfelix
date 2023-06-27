#include <iostream>

int main() {
    int limiteMaximo;
    int base;

    // Leer el límite máximo
    std::cout << "Ingresa el límite máximo: ";
    std::cin >> limiteMaximo;

    // Leer la base
    std::cout << "Ingresa la base: ";
    std::cin >> base;

    int potencia = 1;

    // Calcular y visualizar las potencias
    while (potencia < limiteMaximo) {
        std::cout << potencia << std::endl;
        potencia *= base;
    }

    return 0;
}
