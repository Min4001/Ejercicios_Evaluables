//5.26  Torres de Hanói
// Idea: Mover n discos de la torre A a la torre C usando la torre B como auxiliar.
#include <iostream>
using namespace std;

void hanoi(int n, int origen, int destino, int auxiliar) {
    if (n == 1) {                                 // caso base: un solo disco
        cout << origen << " -> " << destino << "\n";
    }
    else {
        hanoi(n - 1, origen, auxiliar, destino);  // 1) n-1 discos al auxiliar
        cout << origen << " -> " << destino << "\n"; // 2) el disco grande al destino
        hanoi(n - 1, auxiliar, destino, origen);  // 3) n-1 discos del auxiliar al destino
    }
}

int main() {
    int n;
    cout << "Numero de discos: ";
    cin >> n;
    hanoi(n, 1, 3, 2);
    return 0;
}

/*
- Mover todos los discos menos el mas grande a la varilla 2.
- Mover el disco grande de la 1 a la 3.
- Mover los discos de la 2 a la 3.
El caso base es cuando solo hay un disco, que se mueve directamente de la varilla de origen a la de destino.
El codigo pide el número de discos y llama a la función hanoi con los parámetros:
- n: número de discos
- origen: torre de origen
- destino: torre de destino
- auxiliar: torre auxiliar
*/