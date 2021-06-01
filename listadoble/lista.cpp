#include"lista.h"
using namespace std;
LISTA CrearLista(){
LISTA lista = new Lista;
lista->primero= NULL;
lista->ultimo=NULL;
lista->tam=0;
return lista;
}
NODO *CrearNodo(int dato){
NODO *nodo= new Nodo;
nodo->dato=dato;
nodo->anterior=NULL;
nodo->siguiente=NULL;
return nodo;
}
void EliminarNodo(struct Nodo*nodo){
delete(nodo);
}
bool EstaVacia(LISTA lista) {
    if(lista->primero== NULL){
    return true;
    }
    return false;
}
void EliminarInicio(LISTA lista){
 struct Nodo* eliminado=lista->primero;
if(lista->primero->siguiente==NULL){
    lista->primero=NULL;
    lista->ultimo=NULL;
    lista->primero->siguiente=NULL;
    EliminarNodo(eliminado);
    lista->tam--;
    }
if(lista->primero->siguiente){
lista->primero=lista->primero->siguiente;
lista->primero->anterior=NULL;
lista->primero->siguiente=lista->primero->siguiente->siguiente;
//lista->primero->anterior=lista->
}

}
void InsertarInicio(LISTA lista,int dato){
NODO *nodo=CrearNodo(dato);
    if(EstaVacia(lista)){
    nodo->siguiente=NULL;
    nodo->anterior=NULL;
    lista->primero=nodo;
    lista->ultimo=nodo;
    lista->tam++;
    }else{
    nodo->siguiente=lista->primero; // nodo apunta a la cabeza
    nodo->anterior=NULL;
    lista->primero=nodo;// lista-> cabeza ahora es nodo
    lista->tam++;

    }

}
void InsertarFinal(LISTA lista,int dato){
NODO *nodo=CrearNodo(dato);
  if(EstaVacia(lista)){
    nodo->siguiente=NULL;
    nodo->anterior=NULL;
    lista->primero=nodo;
    lista->ultimo=nodo;
    lista->tam++;
    }else{
    lista->ultimo->siguiente=nodo;
    nodo->siguiente = NULL;
    nodo->anterior=lista->ultimo;
    lista->ultimo=nodo;

    }

}
/*void Insertar(LISTA lista, int dato,int pos){
if(EstaVacia(lista)||(pos==0)){
InsertarInicio(lista,dato);
}else{
        int i;
        NODO* nodo=CrearNodo(dato);
        NODO* puntero=lista->primero;
        i=0;
            while((i<pos-1)){
            puntero=puntero->anterior;
            i++;
            }
        cout<<"puntero: "<<puntero->dato<<endl;
        nodo->siguiente=puntero->siguiente;
        nodo->anterior=(puntero->siguiente)->anterior;
        puntero->siguiente=nodo;
        puntero->siguiente->anterior=nodo;
        lista->tam++;
        }
}*/


void MostrarLista(LISTA lista){
if(EstaVacia(lista)){
cout<<"LA PILA ESTA VACIA"<<endl;
}else{
    NODO* puntero;
    puntero=lista->primero;     // apunta al inicio de la lista
        while(puntero!=NULL){
            cout<<puntero->dato;
            cout<<"-";
            puntero=puntero->siguiente;

        }


    }

}
