# include <iostream>
using namespace std ;

int Ejercicio5 ()
{
    int n, a, i ,j ;
    cout << " Ingrese un numero impar para generar el patron : " ;
    cin >> n ;

    if(n%2==1){
        a=(n/2);
        for (j = 0; j < a ; ++j) {
        for (i = 0; i < a-j; ++i)
            cout << " ";
        for (i = 0; i < 2*j+1; ++i)
             cout << "*" ;
        cout << endl ;
        }
        for (j=a; j>=0; --j) {
        for (i=0; i<a-j; ++i)
            cout << " " ;
        for (i=0; i<2*j+1; ++i)
            cout << "*" ;
        cout << endl ;
        }
    }
    else{
            if(n%2==0){
                cout<<"Es par"<<endl;
            }
        }
    return 0;
}
