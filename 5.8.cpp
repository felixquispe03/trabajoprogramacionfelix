#include <iostream>
#include <cmath>

int main() {
    double x;

    // Solicitar al usuario el valor inicial de x
    std::cout << "Ingrese el valor inicial de x: ";
    std::cin >> x;

    // Calcular y presentar los valores de la función para los diferentes valores de x
    for (double i = 0; i <= 5; i += 0.5) {
        double resultado = std::cos(3 * (x + i)) - 2 * (x + i);
        std::cout << "Para x = " << (x + i) << ", el resultado es: " << resultado << std::endl;
    }

    return 0;
}
