//4. Se ingresa un entero por teclado. Se desea determinar si el número ingresado es primo o no.
//Utilice bucles "while".

#include <iostream>
using namespace std;
int main(){
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    int N=1;
    int contador=0;

    while (N<=numero){

        if (numero%N==0){
            contador=contador+1;
        }
        N=N+1;
    }
    if (contador==2)
        cout << numero << " es primo.";
    else
        cout << numero << " no es primo.";
    return 0;
}
