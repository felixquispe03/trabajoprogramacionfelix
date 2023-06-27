#include <iostream>

int main() {
    int n;
    std::cout << "Ingrese el valor de 'n': ";
    std::cin >> n;

    double suma = 0.0;

    for (int i = 1; i <= n; i++) {
        double termino = (i * i) / (3.0 * i);
        suma += termino;
    }

    std::cout << "La suma de los 20 primeros términos de la serie es: " << suma << std::endl;

    return 0;
}
