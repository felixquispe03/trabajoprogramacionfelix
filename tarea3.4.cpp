#include <iostream>

int main() {
    double m1, m2, d;
    const double G = 6.67430e-11; // Constante de gravitación universal

    // Lectura de las masas y la distancia
    std::cout << "Ingrese la masa m1: ";
    std::cin >> m1;

    std::cout << "Ingrese la masa m2: ";
    std::cin >> m2;

    std::cout << "Ingrese la distancia d: ";
    std::cin >> d;

    // Cálculo de la fuerza de atracción
    double fuerza = (G * m1 * m2) / (d * d);

    // Mostrar el resultado
    std::cout << "La fuerza de atracción entre las masas m1 y m2 es: " << fuerza << " N" << std::endl;

    return 0;
}