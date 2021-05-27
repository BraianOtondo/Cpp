#include <iostream>
#include"lista.h"

using namespace std;

int main(){
LISTA lista;
lista=CrearLista();
int num;
cout<<"Ingrese numero: "<<endl;
 cin >>num;
while(num!=0){
InsertarFinal(lista,num);
cout<<"Ingrese numero: "<<endl;
 cin >>num;
}
ImprimirLista(lista);
LiberarLista(lista);
ImprimirLista(lista);


    return 0;
}
