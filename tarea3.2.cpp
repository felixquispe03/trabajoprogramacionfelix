#include <iostream>
using namespace std;

int main() {
   int numero;
   cout << "Ingrese un entero: ";
   cin >> numero;
   cout << "El doble de " << numero << " es: " << numero*2 << endl;
   cout << "El triple de " << numero << " es: " << numero*3 << endl;

   if (numero % 2 == 0) {
       cout << numero << " es un número par." << endl;
   } else {
       cout << numero << " es un número impar." << endl;
   }

   return 0;
}
