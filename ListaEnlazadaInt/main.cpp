#include <iostream>
#include"lista.h"

using namespace std;

int main(){
LISTA lista;
lista=CrearLista();
INsertar(lista,4,0);
INsertar(lista,5,1);
ImprimirLista(lista);
//INsertar(lista,3,2);
Eliminar(lista,1);
ImprimirLista(lista);
LiberarLista(lista);
    return 0;
}
