#include <iostream>
#include<math.h>
using namespace std;
//cuando es void en el main se pone la funcion de frente, cuando la funcion tiene tipo de retorno poner cout<<[funcion]

//1
bool esMayor(int x){//evalue si la edad ingresada por teclado se refiere a una persona mayor o menor de edad.
    return (x>=18);
}
//2
void imprimeHastaN(int numero,int cont=1){//imprima los numero desde el 1 hasta n separados por comas.
    if (cont>numero)
        return;
    if (numero>=cont){
        cout<<cont;
        if (cont<numero)
            cout<<", ";
        return imprimeHastaN(numero,cont+1);
    }
}
//3
void mayMenProm(int a, int b, int c, int &mayor, int &menor, float &prom){
    (a<b && a<c)? menor=a:(b<a && b<c)?menor=b:menor=c;
    (a>b && a>c)? mayor=a:(b>a && b>c)?mayor=b:mayor=c;
    prom=(a+b+c)/3;
}
//4
bool siSonMultiplosDe2 (int x, int y){
    return (!(x%2 || y%2));
}
bool siSonMultiplos (int x, int y){
    return (!(x%y));
}
bool alCuadrado (int x, int y){
    return (x*x==y);
}
//5
bool primoRecursivo(int numero, int c=2)
{
    if (numero%c==0 && numero !=2)
        return false;
    else if (c>numero/2)
        return true;
    else
        return primoRecursivo (numero, c+1);
}
//6
int primosMenoresaN(int n,int numero=2,int cont=2){
    if (numero==n)
        return 0;
    if(cont==numero){
        cout<<numero<<endl;
        return primosMenoresaN(n,numero+=1,2);
    }
    if (numero%cont==0)
        return primosMenoresaN(n,numero+=1,2);
    return primosMenoresaN(n,numero,cont+=1);
}
//7
int imprime(int numero,int cont=1){//imprime con tabs
    if(cont==100000)
        return 0;
    int a=numero-(numero%(10000/cont));
    cout<<a/(10000/cont)<<"\t";
    return imprime(numero-a,cont*=10);
}
//8
int alreves(int n, int digitos=5)
{
  int resto, cocie;

  if (n<10)     // Si tenemos un número de dígitos menor a 2, devolvemos n
    return n;
  else
    {
      resto = n % 10;
      cocie = n / 10;
      return resto*digitos + alreves(cocie, digitos/10);
    }
}

//9
bool bisiesto(int numero){
    return(!(numero%4))?((!(numero%100)&&(numero%400))?false:true):false;
}
//10
int fibo(int numero)
{
    if((numero==0)||(numero==1))
        return 1;
    return fibo(numero-1)+fibo(numero-2);
}
//Extraaaa
int factorial(int n)
{
    if(n == 1)
        return 1;
    else
        return n*factorial(n-1);
}
int main()
{
    int x;
    cout << "Ingrese un numero por favor: " << endl;
    cin>>x;
    cout<<primoRecursivo(x)<<endl;
    primosMenoresaN(x);
    cout<<imprime(18222)<<endl;
    alreves(17771);
    //mayMenProm(a,b,c,mayor,menor,prom);
    //cout<<"el menor es: "<<menor<<endl;
    //cout<<"el mayor es: "<<mayor<<endl;
    //cout<<"el promedio es: "<<prom<<endl;
    return 0;
}
