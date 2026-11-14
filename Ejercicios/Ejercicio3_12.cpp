//3.12. ¿Qué muestra en pantalla el siguiente programa?
#include <iostream>
using namespace std;

int main() {
    cout << "Ejercicio 3.12\n";
    cout << "----------------\n";

    int row{ 10 };

    while (row >= 1) {
        int column{ 1 };

        while (column <= row) {
            cout << (row % 2 == 1 ? "<" : ">");
            ++column;
        }

        --row;
        cout << "\n";
    }
    cout << "----------------\n";
}

/*
row baja de 10 a 1.
while interno imprime 10 carcateres por fila.
row impar da < y row par da >.
El resultado final son 10 líneas, donde las líneas impares tienen "<" y las pares tienen ">".
Cada vez se resta 1 a row.
*/