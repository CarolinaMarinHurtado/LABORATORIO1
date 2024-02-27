#include <iostream>

using namespace std;

int Ejercicio8()
{
    int a, b, c;
    int sumademultiplos = 0;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    for (int i = 1; i < c; i++) {
        if (i % a == 0 || i % b == 0) {
            sumademultiplos += i;
        }
    }

    cout << "\nLa suma de los multiplos de " << a << " y " << b << " menores que " << c << " es: " << sumademultiplos << endl;

    return 0;
}
