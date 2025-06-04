#include <iostream>

using namespace std;

int main () {

    int suma = 0, numero;

    cout << "Por favor, digite un numero: ";
    cin >> numero;

    for(int i = 1; i <= numero; i++) {
        suma += i;

        cout << "La suma de todos los numeros es: " << suma << endl;
    }

    return 0;
}