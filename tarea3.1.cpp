#include <iostream>
#include <cmath>

double calcularHipotenusa(double ladoA, double ladoB) {
    double hipotenusa = std::sqrt(std::pow(ladoA, 2) + std::pow(ladoB, 2));
    return hipotenusa;
}

int main() {
    double ladoA, ladoB;

    std::cout << "Ingrese la longitud del lado A: ";
    std::cin >> ladoA;

    std::cout << "Ingrese la longitud del lado B: ";
    std::cin >> ladoB;

    double hipotenusa = calcularHipotenusa(ladoA, ladoB);

    std::cout << "La longitud de la hipotenusa es: " << hipotenusa << std::endl;

    return 0;
}