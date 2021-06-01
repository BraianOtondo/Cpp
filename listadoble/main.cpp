#include <iostream>
#include"lista.h"
using namespace std;

int main(){
LISTA lista=CrearLista();
InsertarFinal(lista,5);//0 1
InsertarFinal(lista,9);//1 2
MostrarLista(lista);
EliminarInicio(lista);
MostrarLista(lista);

MostrarLista(lista);
cout<<"PRIMERO: "<<lista->primero->dato<<endl;
//cout<<"SIGUIENTE DE PRIMERO: "<<lista->primero->siguiente->dato<<endl;
//cout<<"ANTERIOR DE ULTIMO: "<<lista->ultimo->anterior->dato<<endl;
cout<<"ULTIMO: "<<lista->ultimo->dato<<endl;

    return 0;
}
