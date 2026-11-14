//3.26  Protección de la privacidad mediante criptografía - Cifrado
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Introduce un numero de 4 cifras: ";
    cin >> numero;

    // Separar las cifras
    int a = numero / 1000;
    int b = numero / 100 % 10;
    int c = numero / 10 % 10;
    int d = numero % 10;

    // Sumar 7 y quedarse con el resto de dividir entre 10
    a = (a + 7) % 10;
    b = (b + 7) % 10;
    c = (c + 7) % 10;
    d = (d + 7) % 10;

    // Intercambiar 1a con 3a, y 2a con 4a
    int aux = a;
    a = c;
    c = aux;
    aux = b;
    b = d;
    d = aux;

    cout << "Cifrado: " << a << b << c << d << "\n";
    return 0;
}

/*
El programa pide un número de 4 cifras y lo cifra.
El codigo separa el número en sus 4 cifras:
    - con / 1000 saco la primera, y con % 10 saco la última.
    - Luego suma 7 a cada cifra y se queda con el resto de dividir entre 10.
    - Intercambia la cifra 1 con la 3, y la 2 con la 4
Para intercambiar dos valores usa una variable auxiliar.
*/