#include <iostream>

using namespace std;

int main () {

    // Se declaran las variables a usar
    int numero;
    int numeroVerdadero = 23;
    int intentos = 0;
    int intentosMaximos = 5;

    

    do {

        // Se le presenta informacion general del juego al jugador
        cout << "Intenta adivinar el numero" << endl;

        // Al final se le muestra la cantidad de intentos que lleva
        cout << "Recuerda que solo tienes 5 intentos y este es tu intento: " << intentos << endl;

        // Al usuario se le pide que escriba un numero entre el 1 y el 50
        cout << "Por favor ingresa un numero entre 1 y 50: ";
        cin >> numero;

        // Se verifica que el numero este dentro del rango aceptado
        if(numero < 1 || numero > 50) {
            cout << "-------------------------------------------------" << endl;
            cout << "Numero fuera de rango, por favor intente de nuevo" << endl;
            cout << "-------------------------------------------------" << endl;
        } continue;

        // Los intentos van en incremento
        intentos++;

        // Mientras el while se cumpla, entonces se seguira ejecutando el codigo de do
    } while(numeroVerdadero != numero && intentos <= intentosMaximos);

    return 0;
}