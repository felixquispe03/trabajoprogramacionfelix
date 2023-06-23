#include <iostream>

int main() {
    int suma = 0;

    for (int i = 1; i <= 4; i++) {
        int numero;
        std::cout << "Ingrese el número " << i << ": ";
        std::cin >> numero;

        suma += numero * numero * numero;
    }

    std::cout << "La suma de los cubos de los 4 primeros números mayores a 0 es: " << suma << std::endl;

    return 0;
}
