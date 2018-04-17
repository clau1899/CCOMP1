#include <iostream>

using namespace std;
//imprime un numero de maximo de 5 digitos, cifra a cifra con espacios, usando division entera y modulo
int main()
{
    int x;
    cout << "Ingrese el numero " << endl;
    cin>>x;
    cout<<x/10000<<'\t'<<(x%10000)/1000<<'\t'<<((x%10000)%1000)/100<<'\t'<<(((x%10000)%1000)%100)/10<<'\t'<<((((x%10000)%1000)%100)%10)%10<<endl;
    return 0;
}
