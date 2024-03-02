#include <iostream>

using namespace std;

int Ejercicio14()
{
    int numero, palindromo=0, factor=0;
    int multiplicacion,a,b,c; //a es el origininal, b para el contrario y c para comparar es la temporal

    cout << "Ingrese un numero de tres cifras: "<<endl;
    cin >> numero;

    if (numero < 100 || numero > 999) {
        cout << "El numero ingresado no es de tres cifras." <<endl;
    }


    for (int i = 100; i < 1000; ++i) {
        multiplicacion = numero* i;
        a = multiplicacion;
        b = 0;
        c = multiplicacion;

        while (c > 0) {
            b = (b * 10) + (c % 10);
            c=c/10;
        }

        if (a == b && a > palindromo && i == 777) {
            palindromo = a;
            factor = i;
        }
    }

    cout << "\nEl palindromo mas grande que se puede obtener: " << palindromo<<endl;
    cout << "\nSe obtiene al multiplicar " << numero << " por " << factor<<endl;

    return 0;
}
