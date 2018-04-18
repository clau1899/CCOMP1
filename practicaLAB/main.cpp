#include <iostream>

using namespace std;

bool esPerfecto (int x)
{
    int suma=0;
    for (int i=1;i<x;i++)
        if (x%i==0)
            suma+=i;
    if (suma == x)
        return true;
    return false;
}

bool esPrimo(int x, int t=1,int cont=0)
{
    if (t>x){
        if (cont == 2)
            return true;
        return false;
    }
    if (x%t==0)
        cont+=1;
    return esPrimo(x,t+1,cont);

}
int potencia (int base, int exponente)
{
    if (exponente==0)
        return 1;
    else{
        return base*potencia(base,exponente-1);
    }
}
void swapnormal(int &a, int &b)
{
    a=a-b;
    b=a+b;
    a=b-a;
}
void swapbitwise(int &a, int &b)
{
    b=a^b;
    a=a^b;
    b=a^b;
}
int main()
{
    for (int i=5;i<=10000;i++){
        if (esPerfecto(i)==1){
            cout<<"\n"<<i<<"\nDivisores:";
            for (int j=1;j<=i;j++){
                if (i%j==0)
                    cout<<j<<", ";
            }
        }

    //n numeros primos
    int x;
    cout<<"num"<<endl;
    cin>>x;
    int contador=0;
    for (int i=2;contador<x;i++){
        if (esPrimo(i)==1){
            contador=contador+1;
            cout<<i<<", ";
        }
    }
    int a,b,c,d;
    cout<<"base: "; cin>>a;
    cout<<"exponente: "; cin>>b;
    cout<<"Resultado es: "<<potencia(a,b);
    cout <<"Ingrese un numero para intercambiar ";cin>>c;
    cout<<"Ingrese otro numero para intercambiar ";cin>>d;
    swapbitwise(c,d);
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}
