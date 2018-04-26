#include <iostream>
using namespace std;

int sumaIterativa(int *p)
{
    int sum=0;
    for (int i=0;i<5;i++){
        sum=sum + *p;
        p++;
    }
    return sum;
}
int sumaRecursiva(int *p,int len)
{
    cout<<*p<<" ";//puedes omittir this line
    if (len == 1)
        return *p;
    return *p +sumaRecursiva(++p,--len);
}
/*void swapnormal(int *a, int *b)
{
    *a=a-b;
    *b=*a+*b;
    *a=b-a;
}
void invierte(int *p,int len)
{
    int *fin= p+len-1;
    for (int i=0;i<len/2;i++){
        swapnormal(p++,fin--);
    }
}*/
void invierte (int *p , int len)
{
    int temp;
    int *fin=p+len-1;
    for (;fin>=p;p++,fin--){
        temp=*p;
        *p=*fin;
        *fin=temp;
    }
}
int tamanoCadena(char *cadena)
{
    int tam=0;
    for (;*cadena!='\0';tam++,cadena++);
    return tam;
}
void copiar(char *a, char *b)
{
    for(;*b!='\0';a++,b++)
        *a=*b;
    a[tamanoCadena(b)]='\0'; // para que si s tiene mas contenido entonces lo paramos con fin de cadena
}
void concatena(char *a,char *b)
{
    for(;*b!='\0';a++,b++){
        a[tamanoCadena(a)]=*b;
    }
}
int main()
{
    int arreglo []={1,2,3,4,5};
    int *p = arreglo;
    char cadena []= {'H','o','l','a','\0'};//si tuviese '\0' entonces no sabria cuando se acabo la cadena
    char *pchar = cadena;
    char s[11]= "hola";
    char *a=s;
    char t[]="mundo";
    char *b=t;
    cout<<sumaIterativa(p)<<endl;
    cout<<sumaRecursiva(p,5)<<endl;
    cout<<"\nLa cadena invertida es: ";
    invierte (p,5);
    for (int i=0;i<5;i++){
        cout<<arreglo[i]<<", ";
    }
    cout<<"\nEl tamano de la cadena es: "<<tamanoCadena(pchar)<<endl;
    //copiar(a,b);
    //cout<<a;
    concatena(a,b);
    cout<<a<<endl;
    return 0;
}
