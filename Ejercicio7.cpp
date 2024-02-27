#include <iostream>

using namespace std;

int Ejercicio7()
{
    int a = 0, b = 1, c, n, sumaPares = 0;

    cout << "Ingrese el valor de n: " << endl;
    cin >> n;

    while (a < n) {
        if (a % 2 == 0) {
            sumaPares += a;
        }
        c = a + b;
        a = b;
        b = c;
    }

    cout << "\nLa suma de los numeros pares de la serie de Fibonacci menores a " << n << " es: " << sumaPares << endl;

    return 0;
}
