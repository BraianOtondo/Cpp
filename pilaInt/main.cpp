#include <iostream>
#include"pila.h"
using namespace std;
//LIFO
int main(){
PILA pila;
int dato;
pila=CrearPila();
Push(pila,1);
Push(pila,2);
Push(pila,3);
Push(pila,4);
Push(pila,5);
MostrarPila(pila);
Pop(pila,dato);
cout<<"El dato eliminado fue: "<<dato<<endl;
DestruirPila(pila);
MostrarPila(pila);
    return 0;
}
