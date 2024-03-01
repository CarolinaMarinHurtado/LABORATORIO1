#include <iostream>

using namespace std;

int Ejercicio11()
{
    int num, resultado=1, i=2, a,b;

    cout<<"Este programa recibe un numero y calcula el mcm de todos los numeros enteros entre 1 y el numero ingresado"<<endl;
    cout<<"\nIngrese el numero al que desea calcular el mcm"<<endl;
    cin>>num;

    for (i=2; i<=num; i++){
        a=resultado;
        b=i;

        while (b){
            a=a%b;
            swap(a,b);//recibe dos parámetros e intercambia el valor del uno por el otro
        }
        resultado=(resultado*i)/a;
    }
    cout<<"\nEl minimo comun multiplo es: "<<resultado<<endl;

    return 0;

}
