#include <iostream>

int main() {
    int m;
    std::cout << "Ingrese la cantidad de números pares a sumar: ";
    std::cin >> m;

    int suma = 0;
    int contador = 0;
    int numero = 2; // Primer número par

    while (contador < m) {
        suma += numero;
        contador++;
        numero += 2; // Incremento para obtener el siguiente número par
    }

    std::cout << "La suma de los primeros " << m << " números pares es: " << suma << std::endl;

    return 0;
}
