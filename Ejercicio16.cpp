#include <iostream>

using namespace std;

int Ejercicio16()
{
    int k, terminos = 0;

    cout << "Ingrese un numero para calcular la serie: ";
    cin >> k;

    cout<<"\nla serie mas larga con la semilla "<<k<<" es: "<<endl;

    while (k > 1) {
        if (k % 2 == 0) {
            k = k / 2;
        } else {
            k = 3 * k + 1;
        }
        cout << k <<" "<< endl;
        terminos++;
    }

    cout << "\nLa serie tiene " << terminos << " terminos." << endl;

    return 0;
}
