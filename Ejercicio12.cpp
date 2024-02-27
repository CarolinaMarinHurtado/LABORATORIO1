#include <iostream>
using namespace std;

int Ejercicio12()
{
 int n, i,j, final=0;

 cout<<"ingrese el numero al que le desea calcular el maximo factor primo: ";
 cin>>n;

 cout<<"\nlos numeros primos antes que el "<<n<< " son:"<<endl;
 for(i=2; i<=n; i++){
    int contador=0;
    for(j=2;j<=i/2;j++){
            if(i%j==0){
                contador++;
                break;
            }
        }
     if(contador<1){
         cout<<i<<" "<<endl;
         final++;
        }
 }
 cout<<"\nEl mayor factor primo de " <<n<< "  es: " << final<<endl;
}
