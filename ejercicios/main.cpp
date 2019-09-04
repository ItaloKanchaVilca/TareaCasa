#include <iostream>

using namespace std;
//Implementar un programa que recibe un numero y indique si dicho numero es primo o no

/*
int main()
{
    int i,numero,cont=0;

    cout <<"Ingrese un numero: ";
    cin>>numero;
    for(i=1;i<=numero;i++){
        if(numero%i==0){
            cont++;
        }
    }
    if (cont>2){
        cout<<"El numero es compuesto";
    }
    else{
        cout<<"El numero es primo";
    }
    return 0;
}
*/

//Implementar un programa que imprima loss numeros primos menores a 100

/*
int main()
{
    int numeroM=0,c=0,c2=0,res=0,nc=0;
cout<<"Introduce el limite de numeros: ";
cin>>numeroM;
for(c=numeroM;c>=1;c--){
    for(c2=c;c2>=1;c2--){
        res=c%c2;
        if(res==0){
            nc=nc+1;
    }
    }
    if(nc==2){
    cout<<" "<<c;
    }
    nc=0;
    }

    return 0;
}
*/

//Implementar un programa que recibe un numero por teclado e indique si dicho numero es perfecto o no

int main ()
{
    int numero,suma=0;
    cout<<"Ingrese un numero para saber si es perfecto: ";
    cin>> numero;
    for(int contador=1;contador<numero;contador++){
        if(numero%contador==0){
            suma+=contador;
        }
    }
    if(suma==numero){
        cout<<"Si es perfecto";
    }
    else{
        cout<<"No es perfecto";
    }

    return 0;
}
