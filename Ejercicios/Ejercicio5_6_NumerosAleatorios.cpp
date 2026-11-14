/*5.6  Números aleatorios

Escribe instrucciones que asignen a la variable n enteros aleatorios comprendidos en los siguientes intervalos:
a) 1 ≤ n ≤ 2
b) 1 ≤ n ≤ 100
c) 0 ≤ n ≤ 9
d) 1000 ≤ n ≤ 1112
e) −1 ≤ n ≤ 1
f) −3 ≤ n ≤ 11

Formula: n = minimo + rand() % (maximo - minimo + 1)
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int n;

    n = 1 + rand() % 2;         cout << "a) " << n << "\n";   // 1 a 2

    n = 1 + rand() % 100;       cout << "b) " << n << "\n";   // 1 a 100

    n = rand() % 10;            cout << "c) " << n << "\n";   // 0 a 9

    n = 1000 + rand() % 113;    cout << "d) " << n << "\n";   // 1000 a 1112

    n = -1 + rand() % 3;        cout << "e) " << n << "\n";   // -1 a 1

    n = -3 + rand() % 15;       cout << "f) " << n << "\n";   // -3 a 11

    return 0;
}

/*
rand() da un numero aleatorio muy grande.
Para meterlo en un intervalo se usa una formula: n = minimo + rand() % cuantos_valores_hay
Ejemplo: de 1 a 100 hay 100 valores, asi que es 1 + rand () % 100.
El % deja un resultado entre 0 y 99, y al sumar 1 queda entre 1 y 100.
Para -3 a 11 hay 15 valores, asi que es -3 + rand() % 15.
La linia srand(time(0)) sirve para que cada vez que se ejecute el programa, los números aleatorios sean diferentes.
*/