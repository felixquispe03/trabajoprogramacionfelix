#include <iostream>
#include <climits>

int main() {
    int n;
    std::cout << "Ingrese la cantidad de números: ";
    std::cin >> n;

    int numero;
    int maximo = INT_MIN;  // Valor mínimo posible
    int minimo = INT_MAX;  // Valor máximo posible
    int suma = 0;

    for (int i = 1; i <= n; i++) {
        std::cout << "Ingrese el número " << i << ": ";
        std::cin >> numero;

        if (numero > maximo) {
            maximo = numero;
        }

        if (numero < minimo) {
            minimo = numero;
        }

        suma += numero;
    }

    double media = static_cast<double>(suma) / n;

    std::cout << "El número más grande es: " << maximo << std::endl;
    std::cout << "El número más pequeño es: " << minimo << std::endl;
    std::cout << "La media es: " << media << std::endl;

    return 0;
}
