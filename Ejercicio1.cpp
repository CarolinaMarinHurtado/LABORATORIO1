#include <iostream>

using namespace std;

int Ejercicio1()
{
    char letra;
    cout<<"Por favor ingrese una letra: "<<endl;
    cin>>letra;

    if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'||letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U'){
        cout<<letra<<"\nes una vocal"<<endl;
    }
    else if(letra=='a'||letra=='b'||letra=='c'||letra=='d'||letra=='e'||letra=='f'||letra=='g'||letra=='h'||letra=='i'||letra=='j'||letra=='k'||letra=='l'||letra=='m'||letra=='n'||letra=='o'||letra=='p'||letra=='q'||letra=='r'||letra=='s'||letra=='t'||letra=='u'||letra=='v'||letra=='w'||letra=='x'||letra=='y'||letra=='z'){
        cout<<"\n"<<letra<<" es una consonante"<<endl;
    }
    else{
        cout<<"\nNo es una letra"<<endl;
    }
    return 0;
}
