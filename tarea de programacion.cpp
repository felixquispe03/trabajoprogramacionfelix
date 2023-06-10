#include <iostream>
#include <string>

using namespace std;

int main() {
    // Precios para cada ubicación
    double precios[] = {50.00, 80.00, 120.00, 160.00};
    string ubicaciones[] = {"general", "preferencia", "platea", "vip"};

    // Variables para almacenar la ubicación elegida y el número de entradas
    string ubicacion;
    int num_entradas;

    // Solicitar al usuario la ubicación y el número de entradas
    cout << "Ingrese la ubicacion (general, preferencia, platea o vip): ";
    cin >> ubicacion;
    cout << "Ingrese la cantidad de entradas: ";
    cin >> num_entradas;

    // Buscar el índice de la ubicación elegida utilizando switch
    int indice = -1;
    switch (ubicacion[0]) {
        case 'g':
            indice = 0;
            break;
        case 'p':
            if (ubicacion == "preferencia") {
                indice = 1;
            } else {
                indice = 2;
            }
            break;
        case 'v':
            indice = 3;
            break;
        default:
            // Si la ubicación no es válida, imprimir un mensaje de error
            cout << "Ubicacion no valida" << endl;
            return 0;
    }

    // Calcular el costo total basado en la ubicación elegida y el número de entradas
    double costo_total = num_entradas * precios[indice];
    if (ubicacion == "vip") {
        string bebida;
        cout << "Elija su bebida (gaseosa, cerveza o agua): ";
        cin >> bebida;

        switch (bebida[0]) {
            case 'g':
                costo_total += 10.00;
                break;
            case 'c':
                costo_total += 10.00;
                break;
            case 'a':
                costo_total += 5.00;
                break;
            default:
                // Si la bebida no es válida, imprimir un mensaje de error
                cout << "Bebida no valida" << endl;
                return 0;
        }
    }

    // Verificar si la suma de las entradas supera los 400 y enviar un mensaje de "Usuario no preferente"
    if (costo_total < 400) {
        cout << "Usuario no preferente" << endl;
        return 0;
    }

    // Imprimir el costo total
    cout << "Total a pagar: $" << costo_total << endl;

    return 0;
}
