#include <iostream>

using namespace std;

int main(){
int *a=new int;
*a=4;
cout << "a: "<<a<< endl;//Direccion del new int
cout << "*a: "<<*a<< endl;//contenido del puntero que apunta
cout << "&a: "<<&a<< endl;//direccion del puntero a
cout<<"------------------------------------------------"<<endl;
int num;//al no tener un valor, automaticamente tiene 0 cero
a=&num;

cout << "&a: "<<&a<< endl;
cout<<"a: "<<a<<endl;
void *b;
b=a;//B apunta a la direccion que está en A
//CASTEO SIRVE PARA ACCEDER AL DATO, YASEA DIRECCION O CONTENIDO
cout<<"Casteo de b en int (direccion):"<<(int*)b<<endl;//DIRECCION DEL PUNTERO AL QUE APUNTA B que sabemos que es int
cout<<"Lo que tiene B(Direccion):"<<b<<endl;//DIRECCION DEL PUNTERO AL QUE APUNTA B que no sabemos el dato
cout<<"Casteo de b en int (contenido):"<<*(int*)b<<endl;// IMPRIME 0 PORQUE EL CONTENIDO DEL B es EL MISMO QUE A
//PARA SABER EL CONTENIDO DE UN VOID, SI o SI SE USA CASTEO. O sino te va imprimir basura
cout << "a: "<<a<< endl;
cout << "*a: "<<*a<< endl;
//EL CASTEO NOS PERMITE ACCEDER A LA DIRECCION DEL PUNTERO QUE APUNTA O AL CONTENIDO
    delete a;
    return 0;
}
