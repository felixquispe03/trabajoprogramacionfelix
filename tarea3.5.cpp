#include <iostream>
#include <cmath>

double calcularEnergia(double masa) {
    const double c = 2.997925e10; // Velocidad de la luz en m/s
    double energia = masa * std::pow(c, 2);
    return energia;
}

int main() {
    double masa;

    std::cout << "Ingrese la masa en gramos: ";
    std::cin >> masa;

    double energia = calcularEnergia(masa);

    std::cout << "La cantidad de energía producida es: " << energia << " joules." << std::endl;

    return 0;
}