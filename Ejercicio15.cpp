#include <iostream>

using namespace std;

int Ejercicio15()
{
    int n, lado;

    cout << "Ingrese un numero impar para formar el espiral: "<<endl;
    cin >> n;

    if (n % 2 == 0) {
        cout<< "El numero debe de ser impar." <<endl;
        return 1;
    }

    int sumadiagonal = 1;
    int valor = 1, i=1;

    // Calcular la suma de los números en la diagonal
    for ( i = 1; i <= (n - 1) / 2; ++i) {
        lado = 2 * i;

        for (int j = 0; j < 4; ++j) {
            valor += lado;
            sumadiagonal += valor; // Sumar los valores en la diagonal
        }
    }
    cout << "\nEn una espiral de " << n << "x" << n << ", la suma de sus diagonales es: " << sumadiagonal << "." << endl;

    return 0;
}
