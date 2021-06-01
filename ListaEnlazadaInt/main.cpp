#include <iostream>
#include"lista.h"

using namespace std;

int main(){
LISTA lista,listacopi;
lista=CrearLista();
listacopi=CrearLista();
INsertar(lista,4,0);
INsertar(lista,5,1);
ImprimirLista(lista);
//INsertar(lista,3,2);
CopiarLista(lista,listacopi);
cout<<"LISTAS"<<endl;
ImprimirLista(lista);
ImprimirLista(listacopi);
LiberarLista(lista);
    return 0;
}
