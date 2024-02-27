#include <iostream>
#include <math.h>
using namespace std;

int Ejercicio9 ()
{
    int suma=0;
    int n;
    cout<<"ingrese un numero entero"<< endl;
    cin>>n;

    while (n>0){
        suma=suma + pow((n%10),(n%10));
        n=n/10;

    }
    cout<<"la suma de los digitos del numero que ingreso elevados a si mismo es: "<< suma <<endl;
    return 0;
}

