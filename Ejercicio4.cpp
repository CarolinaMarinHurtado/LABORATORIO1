#include <iostream>

using namespace std;

int Ejercicio4()
{
   int hora1, hora2;
   int horas, minutos,nuevaHora, totalmin,nuevomin,resultado;


    cout << "\nIngrese la primera hora usando la hora militar sin puntos ni comas: "<<endl;
    cin >> hora1;

    cout << "\nIngrese la segunda hora sin puntos ni comas"<<endl;
    cin >> hora2;


    horas = hora2 / 100;
    minutos = hora2 % 100;


    totalmin= hora1 / 100 * 60 + hora1 % 100 + horas * 60 + minutos;
    nuevaHora = totalmin / 60 % 24;
    nuevomin = totalmin % 60;
    resultado = nuevaHora * 100 + nuevomin;

    cout << "\nLa nueva hora es: " << resultado << endl;

    return 0;
}
