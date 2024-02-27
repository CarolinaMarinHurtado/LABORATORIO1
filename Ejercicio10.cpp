#include<iostream>
using namespace std;


int Ejercicio10()
{
    int n, i, j, contador = 0;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    for (i = 2; contador < n; i++) {
        int esPrimo = 1; // Suponemos que el número es primo

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                esPrimo = 0; // Si se encuentra un divisor, no es primo
                break;
            }
        }

        if (esPrimo) {
            contador++;
            if (contador == n) {
                cout << "El primo numero " << n << " es: " << i << endl;
            }
        }
    }

    return 0;
}
