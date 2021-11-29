#include "arbol.h"
using namespace std;
NODO* CrearNodo(int dato,NODO *padre){
NODO *nodo=new Nodo;
nodo->dato=dato;
nodo->derecha=NULL;
nodo->izquierda=NULL;
nodo->padre=padre;
return nodo;
}
/*ARBOL CrearArbol(){
ARBOL arbol=new Arbol;
arbol->raiz=NULL;
return arbol;
}*/
void Insertar(NODO *&arbol,int dato,NODO *padre){
    if(arbol==NULL){
    NODO *nodo=CrearNodo(dato,padre);
    arbol=nodo;
    }
    else{
        if(dato<arbol->dato){
        Insertar(arbol->izquierda,dato,arbol);
        }else if(dato>arbol->dato){
        Insertar(arbol->derecha,dato,arbol);
        }

    }
}
void Eliminar(NODO *arbol,int numero){
    if(arbol==NULL){
    return;
    }else if(numero < arbol->dato){
    Eliminar(arbol->izquierda,numero);
    }else if(numero > arbol->dato){
    Eliminar(arbol,numero);
    }else{
    EliminarNodo(arbol);
    }

}
void EliminarNodo(NODO *nodoEliminar){
    if(nodoEliminar->derecha && nodoEliminar->izquierda){
    NODO *menor=Minimo(nodoEliminar->derecha);// SE VA ALA DERECHA Y LUEGO IZ
    nodoEliminar->dato=menor->dato;
    EliminarNodo(menor);
    }else if(nodoEliminar->izquierda){
    Reemplazar(nodoEliminar,nodoEliminar->izquierda);
    DestruirNodo(nodoEliminar);
    }else if(nodoEliminar->derecha){
    Reemplazar(nodoEliminar,nodoEliminar->derecha);
    DestruirNodo(nodoEliminar);
    }else{
    Reemplazar(nodoEliminar,NULL);
    DestruirNodo(nodoEliminar);
    }
}
void Reemplazar(NODO *arbol,NODO *nodo){
        if(arbol->padre){
            if(arbol->dato==arbol->padre->izquierda->dato){
                arbol->padre->izquierda=nodo;
            }
            else if(arbol->dato==arbol->padre->derecha->dato){
            arbol->padre->derecha=nodo;
            }
        }
        if(nodo){
        nodo->padre=arbol->padre;
        }
}
NODO *Minimo(NODO *arbol){
    if(arbol==NULL){
    return NULL;
    }
    if(arbol->izquierda){
    return Minimo(arbol->izquierda);
    }else{

    return arbol;
    }
}
void MostrarArbol(NODO *arbol,int cont){
if(arbol==NULL){
return;
}
else{
    MostrarArbol(arbol->derecha,cont++);
    for(int i=0;i<cont;i++){
    cout<<"   ";
    }
    cout<<arbol->dato<<endl;
    MostrarArbol(arbol->izquierda,cont++);
}
}
bool Buscar(NODO *arbol ,int numero){
if(arbol==NULL){
return false;
}else if(arbol->dato==numero){
    return true;
    }else if(numero<arbol->dato){
    return Buscar(arbol->izquierda,numero);
    }
        else{
        return Buscar(arbol->derecha,numero);
        }
}
void DestruirNodo(NODO *nodo){
nodo->derecha=NULL;
nodo->izquierda=NULL;
delete nodo;
}

void PreOrden(NODO *arbol){
    if(arbol==NULL){
    return;
    }else{
    cout<<arbol->dato<<" - ";
    PreOrden(arbol->izquierda);
    PreOrden(arbol->derecha);
    }
}
void PostOrden(NODO *arbol){
    if(arbol==NULL){
    return;
    }else{
    PostOrden(arbol->izquierda);
    PostOrden(arbol->derecha);
    cout<<arbol->dato<<" - ";
    }
}
void InOrden(NODO *arbol){
    if(arbol==NULL){
    return;
    }else{
    InOrden(arbol->izquierda);
    cout<<arbol->dato<<" - ";
    InOrden(arbol->derecha);
    }
}


