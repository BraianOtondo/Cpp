#include <iostream>
#include "arbol.h"
using namespace std;

int main(){
NODO *arbol=new Nodo;
arbol=NULL;
Insertar(arbol,30,NULL);//P
Insertar(arbol,20,NULL);//L
Insertar(arbol,31,NULL);//M
Insertar(arbol,19,NULL);//N
Insertar(arbol,27,NULL);//K
Insertar(arbol,39,NULL);//I
Insertar(arbol,26,NULL);//E
Insertar(arbol,24,NULL);//D
Insertar(arbol,28,NULL);//O
Insertar(arbol,36,NULL);//F
Insertar(arbol,43,NULL);//G
Insertar(arbol,10,NULL);//C
Insertar(arbol,25,NULL);//J
Insertar(arbol,34,NULL);//H
Insertar(arbol,37,NULL);//Q
Insertar(arbol,8,NULL);//Z
Insertar(arbol,11,NULL);//B
Insertar(arbol,33,NULL);//J
Insertar(arbol,35,NULL);//R
Insertar(arbol,38,NULL);//T
Insertar(arbol,32,NULL);//A
cout<<"P"<<arbol->dato<<endl;
cout<<"M"<<arbol->derecha->dato<<endl;
cout<<"I"<<arbol->derecha->derecha->dato<<endl;
cout<<"G"<<arbol->derecha->derecha->derecha->dato<<endl;
cout<<"F"<<arbol->derecha->derecha->izquierda->dato<<endl;
cout<<"Q"<<arbol->derecha->derecha->izquierda->derecha->dato<<endl;
cout<<"T"<<arbol->derecha->derecha->izquierda->derecha->derecha->dato<<endl;
cout<<"H"<<arbol->derecha->derecha->izquierda->izquierda->dato<<endl;
cout<<"J"<<arbol->derecha->derecha->izquierda->izquierda->izquierda->dato<<endl;
cout<<"R"<<arbol->derecha->derecha->izquierda->izquierda->derecha->dato<<endl;
cout<<"A"<<arbol->derecha->derecha->izquierda->izquierda->izquierda->izquierda->dato<<endl;
cout<<"L"<<arbol->izquierda->dato<<endl;
cout<<"N"<<arbol->izquierda->izquierda->dato<<endl;
cout<<"K"<<arbol->izquierda->derecha->dato<<endl;
cout<<"D"<<arbol->izquierda->derecha->izquierda->dato<<endl;
cout<<"O"<<arbol->izquierda->derecha->derecha->dato<<endl;
cout<<"E"<<arbol->izquierda->izquierda->izquierda->dato<<endl;

//cout<<arbol->izquierda->dato;
    return 0;
}
