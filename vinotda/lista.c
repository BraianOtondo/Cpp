#include "vino.h"
#include <iostream>
#include<string.h>
#include "lista.h"
#include<stdbool.h>
struct Nodo* CrearNodo(VINO vino){
struct Nodo* nodo= new Nodo;

nodo->vino=vino;
nodo->siguiente=NULL;
return nodo;
}
LISTA CrearLista(){
    LISTA lista = new Lista;
    if (lista == NULL){
      return NULL;
    }
    lista->cabeza= NULL;
    lista->tam= 0;
    return lista;
}
void EliminarNodo(struct Nodo*nodo){
delete(nodo);
}
void InsertarInicio(LISTA lista,VINO vino){
struct Nodo* nodo=CrearNodo(vino);
nodo->siguiente=lista->cabeza;
lista->cabeza=nodo;
lista->tam++;
}
void obtenerElemento(LISTA lista,VINO *vino, int pos){
int i;

    struct Nodo *aux;
    aux=lista->cabeza;
    for(i=0; i < pos; i++) {
        aux = aux->siguiente;
    }
    *vino = aux->vino;

}
bool EstaVacia(LISTA lista) {
    if(lista->cabeza== NULL){
    return true;
    }
    return false;
}
void ImprimirLista(LISTA lista){
int tam,i;

if(!EstaVacia(lista)){
tam=lista->tam;
   for(i=0;i<tam;i++){
        VINO vino;
        obtenerElemento(lista,&vino,i);
  MostrarVino(vino);
  cout<<"----------------------------"<<endl;

   } //Mientras cabeza no sea NULL

}else{
cout<<"LA LISTA ESTA VACIA"<<endl;
}

}
void EliminarInicio(LISTA lista){
    if(lista->cabeza){
    struct Nodo* eliminado=lista->cabeza;
    lista->cabeza=lista->cabeza->siguiente;
    EliminarNodo(eliminado);
    lista->tam--;
    }
}
int ObtenerTamanio(LISTA lista){
return lista->tam;
}
void InsertarFinal(LISTA lista,VINO vino){
if(EstaVacia(lista)){
    InsertarInicio(lista,vino);
}else{
struct Nodo* nodo=CrearNodo(vino);
struct Nodo* puntero=lista->cabeza;
    while(puntero->siguiente){
    puntero=puntero->siguiente;
    }
puntero->siguiente=nodo;
lista->tam++;
}
}
//LiberarLista (remueve los elementos de la lista)

void Insertar(LISTA lista,VINO vino,int pos){
int i;
if(pos<0||pos>lista->tam)
    cout<<"Indice invalido"<<endl;

if(EstaVacia(lista))
    cout<<"La lista esta vacia"<<endl;
if(pos==0){
    InsertarInicio(lista,vino);
}else{
    struct Nodo* nodo=CrearNodo(vino);
    struct Nodo* aux=lista->cabeza;
    for(i=0;i<pos-1;i++){
        aux=aux->siguiente;
    }
    nodo->siguiente=aux->siguiente;
    aux->siguiente=nodo;

}
lista->tam++;

}
void LiberarLista(LISTA lista){
while(lista->cabeza!=nullptr){
EliminarUltimo(lista);
}
lista=NULL;
}
void EliminarUltimo(LISTA lista){
if(!EstaVacia(lista)){
    if(lista->cabeza->siguiente){
    Nodo* puntero=lista->cabeza;
        while(puntero->siguiente->siguiente){
        puntero=puntero->siguiente;
        }
        Nodo*eliminado=puntero->siguiente;
        puntero->siguiente=nullptr;
        EliminarNodo(eliminado);
        lista->tam--;
        }else{
            Nodo* eliminado=lista->cabeza;
            lista->cabeza=nullptr;
            EliminarNodo(eliminado);
            lista->tam--;
        }

}

}

