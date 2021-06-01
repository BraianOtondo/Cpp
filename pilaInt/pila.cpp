#include "pila.h"
using namespace std;
NODO *CrearNodo(int dato){
NODO *nodo= new Nodo;
nodo->dato=dato;
nodo->siguiente=NULL;
return nodo;
}
void EliminarNodo(NODO* nodo){
delete(nodo);
}
PILA CrearPila(){
PILA pila=new Pila;
pila->cima=NULL;
pila->tam=0;
return pila;
}
bool EstaVacia(PILA pila){
    if(pila->cima==NULL){
    return true;
    }
    return false;
}
void Push(PILA pila,int dato){
NODO *nodo=CrearNodo(dato);
nodo->siguiente=pila->cima; // nodo apunta a la cabeza
pila->cima=nodo;// lista-> cabeza ahora es nodo
pila->tam++;
}
void MostrarPila(PILA pila){
if(EstaVacia(pila)){
cout<<"LA PILA ESTA VACIA"<<endl;
}else{
    NODO* puntero;
    puntero=pila->cima;     // apunta al inicio de la lista
        while(puntero!=NULL){
            cout<<puntero->dato;
            cout<<"-";
            puntero=puntero->siguiente;

        }


    }

}
void Pop(PILA pila,int &dato){
    if(!EstaVacia(pila)){
    NODO* eliminado=pila->cima;
    dato=eliminado->dato;
    pila->cima=eliminado->siguiente;
    EliminarNodo(eliminado);
    pila->tam--;
    }else{
    cout<<"LA PILA ESTA VACIA"<<endl;
    }
}
void DestruirPila(PILA pila){
    int dato;
    while(!EstaVacia(pila)){
    Pop(pila,dato);
    }
pila=NULL;
}
