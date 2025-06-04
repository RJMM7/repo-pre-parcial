#include <iostream>

using namespace std;

int main () {

    int numero = 23;


    do
    {
        cout << "Intente adivinar el numero, solo tiene 5 intentos" << endl;
        cout << "Su intento es: ";
        cin >> numero;
    } while (numero == 23);
    

    return 0;
}