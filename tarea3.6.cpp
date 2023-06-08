#include <iostream>

double convertirPiesAYardas(double pies) {
    const double yardas_por_pie = 1.0 / 3.0;
    return pies * yardas_por_pie;
}

double convertirPiesAPulgadas(double pies) {
    const double pulgadas_por_pie = 12.0;
    return pies * pulgadas_por_pie;
}

double convertirPiesACentimetros(double pies) {
    const double pulgadas_por_pie = 12.0;
    const double cm_por_pulgada = 2.54;
    return pies * pulgadas_por_pie * cm_por_pulgada;
}

double convertirPiesAMetros(double pies) {
    const double cm_por_metro = 100.0;
    return convertirPiesACentimetros(pies) / cm_por_metro;
}

int main() {
    double pies;

    std::cout << "Ingrese la medida en pies: ";
    std::cin >> pies;

    double yardas = convertirPiesAYardas(pies);
    double pulgadas = convertirPiesAPulgadas(pies);
    double centimetros = convertirPiesACentimetros(pies);
    double metros = convertirPiesAMetros(pies);

    std::cout << "Equivalente en yardas: " << yardas << std::endl;
    std::cout << "Equivalente en pies: " << pies << std::endl;
    std::cout << "Equivalente en pulgadas: " << pulgadas << std::endl;
    std::cout << "Equivalente en centímetros: " << centimetros << std::endl;
    std::cout << "Equivalente en metros: " << metros << std::endl;

    return 0;
}