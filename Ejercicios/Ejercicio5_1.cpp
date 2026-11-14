/*5.1 Evaluación de expresiones
fabs = valor absoluto
floor = redondea hacia abajo
ceil = redondea hacia arriba
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;

    x = fabs(7.5);   cout << "a) " << x << "\n";

    x = floor(7.5);  cout << "b) " << x << "\n";

    x = fabs(0.0);   cout << "c) " << x << "\n";

    x = ceil(0.0);   cout << "d) " << x << "\n";

    x = fabs(-6.4);  cout << "e) " << x << "\n";

    x = ceil(-6.4);  cout << "f) " << x << "\n";

    x = ceil(-fabs(-8 + floor(-5.5)));  cout << "g) " << x << "\n";

    return 0;
}

/*
a) 7.5
b) 7
c) 0
d) 0
e) 6.4
f) -6
g) -14

El g se resuelve de dentro hacia afuera:
-5.5 -> floor(-5.5) = -6
-8 + (-6) = -14
fabs(-14) = 14
-14
ceil(-14) = -14
*/