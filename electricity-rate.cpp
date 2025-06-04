#include <iostream>

using namespace std;

int main () {

    int consumo;

    cout << "Por favor, ingrese su consumo de electricidad (kWh): ";
    cin >> consumo;

    if(consumo <=100 && consumo >=0) {
        cout << "Usted tiene una tarifa baja";
    } else if(consumo > 100 && consumo <= 200) {
        cout << "Usted tiene una tarifa media";
    } else if(consumo > 200) {
        cout << "Usted tiene una tarifa alta";
    } else {
        cout << "Su consumo no puede ser negativo";
    }

    return 0;
}