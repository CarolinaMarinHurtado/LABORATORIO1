# include <iostream>
using namespace std ;

int Ejercicio6()
{
    int a,i;
    float e=1;
    float factorial;
    cout<<"Ingrese el numero de elementos que quiere usar para obtener la aproximacion: "<<endl;
    cin>>a;

    factorial=1;

    for(i=1; i<a; i++){
        factorial=factorial*i;
        e+=(1/factorial);
    }
    cout<<"e es aproximandamente: " << e << endl;
    return 0;
}
