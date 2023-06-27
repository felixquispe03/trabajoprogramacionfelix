#include <iostream>

int main() {
    int lineas;
    std::cout << "Ingrese la cantidad de líneas: ";
    std::cin >> lineas;

    char letra = 'Z';

    for (int i = 0; i < lineas; i++) {
        for (char j = letra; j >= 'A'; j--) {
            std::cout << j;
        }
        std::cout << std::endl;

        letra--;
    }

    return 0;
}
