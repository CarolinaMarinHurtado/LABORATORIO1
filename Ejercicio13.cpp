#include <iostream>
using namespace std;

int Ejercicio13()
{
    int n, i, j, sumaPrimos = 0;

    cout << "Ingrese un numero: "<<endl;
    cin >> n;

    cout << "\nLos numeros primos menores que " << n << " son:" << endl;
    for (i = 2; i <= n; i++)
    {
        int contador = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                contador++;
                break;
            }
        }
        if (contador < 1)
        {
            cout << i << " " << endl;
            sumaPrimos += i; // Esto suma el numero primo al contador i
        }
    }
    cout << "\nLa suma de los numeros primos antes de " << n << " es: " << sumaPrimos << endl;
    return 0;
}
