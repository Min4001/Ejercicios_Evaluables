//5.21  Lanzamiento de una moneda 
// 0 = cruz (Tails), 1 = cara (Heads)
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip() {
    return rand() % 2;
}

int main() {
    srand(time(0));
    int caras = 0;
    int cruces = 0;

    for (int i = 1; i <= 100; i++) {
        if (flip() == 1) {
            cout << "Heads\n";
            caras = caras + 1;
        }
        else {
            cout << "Tails\n";
            cruces = cruces + 1;
        }
    }

    cout << "Heads: " << caras << "\n";
    cout << "Tails: " << cruces << "\n";
    return 0;
}

/*
La funcion flip devuelve 0 o 1 al azar.
Si sale 0, es cruz (Tails), si sale 1, es cara (Heads).
El codigo lanza la moneda 100 veces y va contando cuantas caras y cuantas cruces han salido.
Al final muestra el total de caras y cruces. Deberia de salir aproximadamente 50 de cada una.
*/