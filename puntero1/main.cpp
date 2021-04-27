#include <iostream>

using namespace std;
int main(){
    int num;
int *a=new int; //puntero int que almacena espacio de un entero osea 4 bytes
//int numero=20;
//PUNTERO APUNTA UN ESPACIO DE MEMORIA NEW INT
//LA DIRECCION DE A Y DE NEW INT
    cout <<a<< endl;
    cout<<&a<<endl;
    cout<<*a<<endl;
    cout<<"a :"<<sizeof(a)<<endl;
    cout<<"a :"<<sizeof(num)<<endl;
    delete &a;
//referenciar
int c1;//1234
int *p1;//2345
c1=5;
p1=&c1; // ASI GUARDAMOS (referenciamos) la dirección al puntero //1234
//p1 es un puntero, este puntero tiene la dirección de memoria de c1
//&DIRECCION DE MEMORIA
//desferenciar
int n1;
n1=*p1;
cout<<"*n1: "<<n1<<endl;
cout<<"P1: "<<p1<<endl;// LA DIRECCION DE P1
cout<<"*P1: "<<*p1<<endl;//accedo al valor almacenado del puntero


return 0;
}
