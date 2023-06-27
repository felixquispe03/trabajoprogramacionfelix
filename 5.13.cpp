#include <iostream>

int main() {
    int limite;
    std::cout << "Ingrese el límite superior: ";
    std::cin >> limite;

    std::cout << "Números de tres cifras que cumplen la condición:" << std::endl;

    for (int num = 100; num <= limite; num++) {
        int digit1 = num / 100;        // Obtener el primer dígito
        int digit2 = (num / 10) % 10;  // Obtener el segundo dígito
        int digit3 = num % 10;         // Obtener el tercer dígito

        int sumaCuadrados = (digit1 * digit1) + (digit2 * digit2) + (digit3 * digit3);
        int cociente = num / 3;

        if (sumaCuadrados == cociente) {
            std::cout << num << std::endl;
        }
    }

    return 0;
}
