#include <iostream>
#include <stdlib.h>
#include<string.h>
using namespace std;
class Persona{
private://Atributos que solo las funciones pueden entrar
    int dni;
    char nombre[30];
public://Metodos
    Persona(int,const char[]);//constructor
    void Leer();
    void Correr();
};
//Constructor sirve para iniciar los atributos
Persona::Persona(int _dni,const char _nombre[]){
dni=_dni;
strcpy(nombre,_nombre);
}
void Persona::Leer(){// se pone asi para no confundir metodos de clases distintas
cout<<"Soy "<<nombre<<" y estoy leyendo"<<endl;
}
void Persona::Correr(){
cout<<"Soy "<<nombre<<" y estoy corriendo"<<endl;
}

int main(){
Persona p1=Persona(42091994,"Braian");
Persona p2(424525415,"Tomas");
    p1.Leer();
    p2.Correr();
    return 0;
}
