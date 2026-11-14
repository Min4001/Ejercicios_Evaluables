//4.8  Cálculo del producto de enteros impares 

#include <iostream>
using namespace std;

int main() {
    int producto = 1;
    for (int i = 1; i <= 15; i += 2) {
        producto = producto * i;
    }

    cout << "El producto de los enteros impares desde 1 hasta 15 es: " << producto << "\n";
    return 0;
}

/* Quiero calcular el producto de los enteros impares desde 1 hasta 15.
Inicio una variable producto a 1.
Luego, utilizo un bucle for que recorre los enteros desde 1 hasta 15, incrementando de 2 en 2 para obtener solo los impares.
En cada iteración, multiplico el valor actual de producto por el entero impar actual (i).
Al final del bucle, imprimo el resultado del producto.
*/