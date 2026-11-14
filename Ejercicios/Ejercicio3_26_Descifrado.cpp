//3.26  Protección de la privacidad mediante criptografía - Descifrado
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Introduce el numero cifrado de 4 cifras: ";
    cin >> numero;

    int a = numero / 1000;
    int b = numero / 100 % 10;
    int c = numero / 10 % 10;
    int d = numero % 10;

    // Primero deshacer el intercambio
    int aux = a;
    a = c;
    c = aux;
    aux = b;
    b = d;
    d = aux;

    // Despues deshacer el +7 (restar 7 es lo mismo que sumar 3 con el resto de 10)
    a = (a + 3) % 10;
    b = (b + 3) % 10;
    c = (c + 3) % 10;
    d = (d + 3) % 10;

    cout << "Original: " << a << b << c << d << "\n";
    return 0;
}

/*
Es el mismo proceso pero al revés
    - Primero deshacemos el intercambio.
    - Luego deshacemos el +7 (sumando 3 con el resto de 10).
    - Resyar 7 en este sistema es lo mismo que sumar 3 y quedarse con el resto de dividir entre 10.
*/