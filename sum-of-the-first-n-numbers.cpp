#include <iostream>

using namespace std;

int main () {

    int suma = 0;
    double numero;

    cout << "Por favor, digite un numero: ";
    cin >> numero;

    for(int i = 1; i <= suma; i++) {
        suma = numero + i;
    }

    cout << "Su numero: " << numero << ", y la suma de los primeros n numeros son: " << suma;

    return 0;
}