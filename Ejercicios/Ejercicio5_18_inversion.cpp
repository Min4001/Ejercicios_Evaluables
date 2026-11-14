//5.18  Inversión de cifras

#include <iostream>
using namespace std;

int invertir(int numero) {
    int resultado = 0;
    while (numero > 0) {
        int ultima = numero % 10;            // ultima cifra
        resultado = resultado * 10 + ultima; // la ponemos al final del resultado
        numero = numero / 10;                // quitamos la ultima cifra
    }
    return resultado;
}

int main() {
    int n;
    cout << "Introduce un numero: ";
    cin >> n;
    cout << "Invertido: " << invertir(n) << "\n";   // 7631 -> 1367
    return 0;
}

/*
Para dar la vuelta a un numero:
- sacar la ultima cifra con % 10.
- multiplicar el resultado por 10 y sumarle la ultima cifra.
- quitar la ultima cifra del numero con / 10.
Asi el resultado va creciendo de derecha a izquierda y el numero va disminuyendo de izquierda a derecha.
*/