/*4.15 Calcular π

Calcula el valor de π a partir de la serie infinita:
π = 4 − 4/3 + 4/5 − 4/7 + 4/9 − 4/11 + …
Muestra una tabla como la que aparece a continuación con las aproximaciones de π obtenidas al calcular los
primeros 200 000 términos de esta serie. ¿Cuántos términos debes utilizar hasta obtener por primera vez un
valor que empiece por 3.14159?
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 0;
    int signo = 1;
    int primeraVez = 0;

    cout << "term\tpi\n";
    cout << fixed << setprecision(8);

    for (int i = 1; i <= 200000; i++) {
        pi = pi + signo * 4.0 / (2 * i - 1);   // 4/1, 4/3, 4/5, ...
        signo = -signo;                        // cambia + por - en cada vuelta

        if (primeraVez == 0 && pi >= 3.14159 && pi < 3.14160) {
            primeraVez = i;
        }

        // para no llenar la pantalla, mostramos los 10 primeros y uno de cada 20000
        if (i <= 10 || i % 20000 == 0) {
            cout << i << "\t" << pi << "\n";
        }
    }

    cout << "Primer termino que empieza por 3.14159: " << primeraVez << "\n";
    return 0;
}

/*
π se puede acercar sumando y restando fracciones de la forma 4/(2n-1) con n=1,2,3,...
Los números de abajo son 1, 3, 5, 7... (impares). Eso se consigue con 2*n-1.
El signo va cambiando de + a - en cada vuelta.
Para eso se usa la variable signo que vale 1 o -1 y se multiplica por -1 cada vez.
El codigo repite esto 200000 veces y revisa en cada vuelta si el resultado ya empieza por 3.14159.
Si es así, guarda el número de vuelta en la variable primeraVez.
En pantalla solo se muestra unos pocos resultados para no llenar la pantalla. Los 10 primeros y uno de cada 20000.
*/