#include <iostream>

using namespace std;

int Ejercicio2()
{
    int bille50, bille20, bille10, bille5, bille2, bille1;
    int cantideseada, mone100, mone200;


    cout << "Ingrese la cantidad deseada" << endl;
    cin>>cantideseada;

    mone100 = cantideseada;

    bille50=(mone100-mone100%50000)/50000;
    mone100=mone100%50000;

    bille20=(mone100-mone100%20000)/20000;
    mone100=mone100%20000;

    bille10=(mone100-mone100%10000)/10000;
    mone100=mone100%10000;

    bille5=(mone100-mone100%5000)/5000;
    mone100=mone100%5000;

    bille2=(mone100-mone100%2000)/2000;
    mone100=mone100%2000;

    bille1=(mone100-mone100%1000)/1000;
    mone100=mone100%1000;

    mone200=(mone100-mone100%200)/200;
    mone100=mone100%200;

    cout << "Valor de billetes de 1000: " << bille1 << endl;
    cout << "Valor de billetes de 10000: " << bille10 << endl;
    cout << "Valor de billetes de 2000: " << bille2 << endl;
    cout << "Valor de billetes de 20000: " << bille20 << endl;
    cout << "Valor de billetes de 5000: " << bille5 << endl;
    cout << "Valor de billetes de 50000: " << bille50 << endl;

    cout << "Valor de monedas de 100: " << mone100 << endl;
    cout << "Valor de monedas de 200: " << mone200 << endl;
    cout << endl;

    return 0;
}
