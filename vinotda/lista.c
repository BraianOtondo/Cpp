#include "vino.h"
#include <iostream>
#include<string.h>
#include "lista.h"
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
void ImprimirLista(LISTA lista){
int tam,i;
if(lista!=NULL){
tam=lista->tam;
   for(i=0;i<tam;i++){
        VINO vino;
        obtenerElemento(lista,&vino,i);
  MostrarVino(vino);
  cout<<"----------------------------"<<endl;

   } //Mientras cabeza no sea NULL


}
else{
    printf("No existe la lista\n");
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




/*void Insertar(Lista* lista,LIBRO libro,int pos){
int i;
if(lista==NULL){
    cout<<"Esta lista no esta inicializada"<<endl;
}
if(pos<0||pos>lista->tam){
return INDICE_INVALIDO;
}
Nodo* nuevonodo;
if(pos==0){
    return InsertarPrincipio(lista,libro);
}
else{
    Nodo *aux;
    aux=lista->cabeza;
    for(i=0;i<pos-1;i++){
    aux=aux->siguiente;//
    }
    nuevonodo=CrearNodo(libro);//
    nuevonodo->siguiente=aux->siguiente;
    if(nuevonodo==NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
    }
    aux->siguiente=nuevonodo;//
}
lista->tam++;
return OK;
}
*/
