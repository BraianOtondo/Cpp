#include <iostream>
#include<stdlib.h>
//ELIMINA OBJETOS
using namespace std;
class Perro{
private:
    string nombre,raza;
public:
    Perro(string,string);
    ~Perro();//destructor
    void MostrarDatos();
    void Jugar();

};
Perro::Perro(string _nombre,string _raza){
nombre=_nombre;
raza=_raza;
}
Perro::~Perro(){ //destructor
}
void Perro::MostrarDatos(){
cout<<"Nombre: "<<nombre<<endl;
cout<<"Raza: "<<raza<<endl;
}
void Perro::Jugar(){
cout<<"El perro "<<nombre<<" esta jugando"<<endl;
}
int main(){

Perro perro1("Chicha","Labrador");
perro1.Jugar();
perro1.MostrarDatos();
perro1.~Perro();  //DESTRUIR EL OBJETO
    return 0;
}
