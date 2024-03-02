#include <iostream>

using namespace std;

int Ejercicio17() {
    int terminos, n = 1, i = 1;

    cout << "Ingrese la cantidad de terminos: ";
    cin >> terminos;

    while (true) {
        int divisores = 0;


        for (int j = 1; j <= n; j++) {
            if (n % j == 0) {
                divisores++;
            }
        }


        cout << "\nEl numero " << n << ", tiene " << divisores <<" divisores "<<endl;


        if (divisores > terminos) {
            cout << "\n\nEl primer numero triangular con mas de " << terminos << " divisores es: " << n << endl;
            break;
        }


        n = n + i + 1;
        i++;
    }

    return 0;
}
