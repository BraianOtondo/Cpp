#include"cola.h"
using namespace std;
COLA CrearCola(){
COLA cola=new Cola;
cola->primero=NULL;
cola->ultimo=NULL;
cola->tam=0;
return cola;
}
NODO *CrearNodo(int dato){
NODO *nodo= new Nodo;
nodo->dato=dato;
nodo->siguiente=NULL;
return nodo;
}
void EliminarNodo(struct Nodo*nodo){
delete(nodo);
}
bool EstaVacia(COLA cola){
    if(cola->primero==NULL){
    return true;
    }
    return false;
}
void Encolar(COLA cola,int dato){
NODO *nodo=CrearNodo(dato);
    if(EstaVacia(cola)){
    cola->primero=nodo;
    cola->ultimo=nodo;
    }else{
    cola->ultimo->siguiente=nodo;
    cola->ultimo=nodo;

    }
cola->tam++;
}

void Desencolar(COLA cola,int &dato){
    dato =cola->primero->dato;
    if ((!EstaVacia(cola))){
    NODO *eliminado=cola->primero;
    cola->primero=cola->primero->siguiente;
    EliminarNodo(eliminado);
    cola->tam--;
    }
}
void EliminarCola(COLA cola){
    while((!EstaVacia(cola))){
         EliminarNodo(cola->primero);
     }
}



