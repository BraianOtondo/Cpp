#include "lista.h"
using namespace std;
LISTA CrearLista(){
LISTA lista = new Lista;
    if (lista == NULL){
    return NULL;
    }
lista->cabeza= NULL;
lista->tam= 0;
return lista;
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
void InsertarInicio(LISTA lista,int dato){
NODO *nodo=CrearNodo(dato);
nodo->siguiente=lista->cabeza; // nodo apunta a la cabeza
lista->cabeza=nodo;// lista-> cabeza ahora es nodo
lista->tam++;
}
void ObtenerElemento(LISTA lista,int *dato, int pos){
int i;

    NODO *aux;
    aux=lista->cabeza;
    for(i=0; i < pos; i++) {
        aux = aux->siguiente;
    }
    *dato = aux->dato;

}
bool EstaVacia(LISTA lista) {
    if(lista->cabeza== NULL){
    return true;
    }
    return false;
}
void ImprimirLista(LISTA lista){
int tam,i;

if(EstaVacia(lista)==false){
tam=lista->tam;
   for(i=0;i<tam;i++){
        int dato;
        ObtenerElemento(lista,&dato,i);
    cout<<dato;
  cout<<"- ";

   }
   cout<<endl; //Mientras cabeza no sea NULL

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
void InsertarFinal(LISTA lista,int dato){
    if(EstaVacia(lista)){
    InsertarInicio(lista,dato);
    }else{
    NODO *nodo=CrearNodo(dato);
    NODO *puntero=lista->cabeza; //*puntero tiene la cabeza si cambia esta variable cambia cabeza por el * y el =
        while(puntero->siguiente){ //Mientras puntero tenga siguiente, si tiene null entonces sale del bucle
        puntero=puntero->siguiente;//solo esta recorriendo, no esta asignando, cuando encuentra el puntero con null se detiene
        }
    puntero->siguiente=nodo;// ahora cuando encontro el puntero que tiene null, le asigna su siguiente el nodo creado
    lista->tam++;
    }
}
//LiberarLista (remueve los elementos de la lista)
void Insertar(LISTA lista,int dato,int pos){
int i;
if(pos<0||pos>lista->tam){
cout<<"Indice invalido"<<endl;
}
if(pos==0){
    InsertarInicio(lista,dato);
}else{
    struct Nodo* nodo=CrearNodo(dato);
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
void Eliminar(LISTA lista, int pos){
if(pos<0||pos>=lista->tam){
  cout<<"Indice invalido"<<endl;
}

if(!EstaVacia(lista)){
     Nodo *ant,*actual;
    if (pos==0) {
    EliminarInicio(lista);
    } else {
        // prepara para remover
        ant=NULL;
        actual = lista->cabeza;
        for(int i=0;i<pos;i++) {
            ant = actual;
            actual = actual->siguiente;
        }

        ant->siguiente = actual->siguiente;
        delete(actual);
        actual = NULL;
    }
    lista->tam--;
}
}
