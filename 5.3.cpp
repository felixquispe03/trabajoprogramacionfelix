#include <iostream>

int main() {
    int positivos = 0;
    int negativos = 0;
    int ceros = 0;

    for (int i = 1; i <= 10; i++) {
        int numero;
        std::cout << "Ingresa el número " << i << ": ";
        std::cin >> numero;

        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        } else {
            ceros++;
        }
    }

    std::cout << "Cantidad de números positivos: " << positivos << std::endl;
    std::cout << "Cantidad de números negativos: " << negativos << std::endl;
    std::cout << "Cantidad de ceros: " << ceros << std::endl;

    return 0;
}
