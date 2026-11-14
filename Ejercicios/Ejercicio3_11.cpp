//3.11. ¿Qué muestra en pantalla el siguiente programa?
#include <iostream>
using namespace std;

int main() {
	cout << "Ejercicio 3.11\n";
	cout << "----------------\n";

	int count{ 1 };

	while (count <= 10) {
		cout << (count % 2 == 1 ? "****" : "++++++++++") << "\n";
		++count;
	}
	cout << "----------------\n";
}

/*
count va del 1 al 10. El connt % 2 == 1 es para saber si el número es impar, en ese caso imprime "****"
de lo contrario imprime "++++++++++".
El resultado final son 10 línias, donde las linias impares tienen "****" y las pares tienen "++++++++++"
*/	