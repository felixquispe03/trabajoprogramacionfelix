#include <iostream>

int main() {
    double a, b, c, d, e, f;

    // Lectura de coeficientes
    std::cout << "Ingrese los coeficientes del sistema lineal:" << std::endl;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;
    std::cout << "d: ";
    std::cin >> d;
    std::cout << "e: ";
    std::cin >> e;
    std::cout << "f: ";
    std::cin >> f;

    // Cálculo de la solución
    double determinante = a * d - b * c;

    if (determinante == 0) {
        // El sistema no tiene solución única
        std::cout << "El sistema no tiene solución única." << std::endl;
    } else {
        double x = (e * d - b * f) / determinante;
        double y = (a * f - e * c) / determinante;

        // Mostrar la solución
        std::cout << "La solución del sistema es:" << std::endl;
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;
    }

    return 0;
}