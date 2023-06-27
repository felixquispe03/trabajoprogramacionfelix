#include <iostream>
#include <cmath>

int main() {
    double radio;
    const double PI = 3.14159;

    // Leer el radio de la esfera
    std::cout << "Ingrese el radio de la esfera: ";
    std::cin >> radio;

    // Calcular el área y el volumen de la esfera
    double area = 4 * PI * std::pow(radio, 2);
    double volumen = (4.0 / 3.0) * PI * std::pow(radio, 3);

    // Mostrar el área y el volumen de la esfera
    std::cout << "Área de la esfera: " << area << std::endl;
    std::cout << "Volumen de la esfera: " << volumen << std::endl;

    return 0;
}
