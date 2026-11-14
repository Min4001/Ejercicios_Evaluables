/*3.25. Factorial
El factorial de un entero no negativo n se escribe n! (se lee «n factorial») y se define de la siguiente manera:
n! = n · (n − 1) · (n − 2) · … · 1 (para valores de n mayores que 1)
y n! = 1 para n = 0 o n = 1.
Por ejemplo, 5! = 5 · 4 · 3 · 2 · 1, que es igual a 120. Utiliza instrucciones while en cada uno de los apartados siguientes*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Introduce un numero (0 a 20): ";
    cin >> n;

    unsigned long long factorial = 1;   // 0! y 1! valen 1
    int i = 2;
    while (i <= n) {
        factorial = factorial * i;
        i = i + 1;
    }

    cout << n << "! = " << factorial << "\n";
    return 0;
}

/*
El factorial de 5 es 5·4·3·2·1.
El codigo empieza con un 1 guardado en factorial y va multiplicando por 2,
luego por 3, luego por 4, y así hasta llegar al número pedido.
Empiezo con 1 y no con 0 porque cualquier número multiplicado por 0 daría 0.
*/