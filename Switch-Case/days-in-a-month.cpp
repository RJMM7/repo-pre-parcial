#include <iostream>

using namespace std;

int main () {

    int dia;

    cout << "Por favor digite un numero del 1 al 12 y le dire cuantos dias tiene ese mes: ";
    cin >> dia;

    switch (dia) {
        case 1:
            cout << "El mes enero tiene 31 dias";
            break;

        case 2:
            cout << "El mes febrero tiene 28 dias (o 29 en anios bisiestos)";
            break;

        case 3:
            cout << "El mes marzo tiene 31 dias";
            break;

        case 4:
            cout << "El mes abril tiene 30 dias";
            break;

        case 5:
            cout << "El mes mayo tiene 31 dias";
            break;

        case 6:
            cout << "El mes junio tiene 30 dias";
            break;

        case 7:
            cout << "El mes julio tiene 31 dias";
            break;

        case 8:
            cout << "El mes agosto tiene 31 dias";
            break;

        case 9:
            cout << "El mes septiembre tiene 30 dias";
            break;

        case 10:
            cout << "El mes octubre tiene 31 dias";
            break;

        case 11:
            cout << "El mes noviembre tiene 30 dias";
            break;

        case 12:
            cout << "El mes diciembre tiene 31 dias";
            break;

        default:
            cout << "No se haga el chistosito, no esta en las opciones";
            break;
    }

    return 0;
}