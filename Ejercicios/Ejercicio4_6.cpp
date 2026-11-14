//4.6  Qué hace este código

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << '@';
        }
        cout << '\n';
    }
    return 0;
}

/*
Hay dos bucles, uno dentro de otro.
El de fuera se repite 10 veces, uno por linía.
El de dentro 5 veces y escribe el símbolo @.
Después de escribir 5 símbolos @, hace un salto de línea.
El resultado es un rectángulo de 10 líneas y 5 columnas de símbolos @.
*/