#include <iostream>

using namespace std;

int Ejercicio3()
{
    int mes,dia;

    cout<<"Ingrese el mes con numero que desea leer" << endl;
    cin>>mes;

    cout<<"Ingrese el dia con numero que desea leer" << endl;
    cin>>dia;

    if (mes>=13 | dia<=0 | dia>=32){
        cout<<"fecha invalida"<< endl;
    }

    else{
        if (mes<=0 | dia<=0 | dia>=32){
            cout<<"fecha invalida"<< endl;
        }
        else{
            if(mes==2 & dia==29){
                cout<<"Esta fecha es valida solo en año bisiesto"<<endl;
            }
            else{
            cout<< "La fecha es: " << dia << "/" << mes << " la cual es valida" << endl;
            }
         }


    }


    return 0;
}
