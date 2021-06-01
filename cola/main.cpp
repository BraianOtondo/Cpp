#include <iostream>
#include "cola.h"
using namespace std;

int main(){
int dato;
COLA cola;
cola=CrearCola();
Encolar(cola,1);
Encolar(cola,2);
Encolar(cola,3);
Encolar(cola,4);
Encolar(cola,5);
/*cout<<cola->primero->dato<<endl;
cout<<cola->primero->siguiente->dato<<endl;
cout<<cola->ultimo->dato<<endl;*/
while(cola->primero!=NULL){
Desencolar(cola,dato);
cout<<"El dato :"<<dato<<" fue eliminado"<<endl;
}
cout<<cola->primero->dato<<endl;

return 0;
}
