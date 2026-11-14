//5.2 Aparcamiento falta acabar

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges(double horas) {
    double importe = 20;              
    if (horas > 3) {
        importe = importe + 5 * ceil(horas - 3);  
    }
    if (importe > 50) {
        importe = 50;           
    return importe;
}

int main() {
    double totalHoras = 0;
    double totalImporte = 0;
    double horas;

    cout << fixed << setprecision(2);
    cout << "Car\tHours\tCharge\n";

    for (int coche = 1; coche <= 3; coche++) {
        cout << "Horas del coche " << coche << ": ";
        cin >> horas;
        double importe = calculateCharges(horas);
        totalHoras = totalHoras + horas;
        totalImporte = totalImporte + importe;
        cout << coche << "\t" << horas << "\t" << importe << "\n";
    }

    cout << "TOTAL\t" << totalHoras << "\t" << totalImporte << "\n";
    return 0;
}

/*
calculateCharges recibe las horas y devuelve cuanto hay que pagar.
Empieza cobrando 20$ (tarifa minima) y si hay más de 3 horas, cobra 5$ por cada hora o fracción adicional.
Si el importe supera 50$, se queda en 50$ (importe máximo).
El codigo pregunta las horas de 3 coches.
Usa la funcion con cada uno, va sumando los totales y los muestra en pantalla.
*/