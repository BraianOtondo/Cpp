#include <iostream>
using namespace std;
class Persona{
private:
    string nombre;
    int edad;
public:
    Persona(string,int);
    virtual void Mostrar();//solo va en la clase padre
};
class Alumno:public Persona{
private:
    int notaFinal;
public:
    Alumno(string,int,int);
    void Mostrar();
};
class Profesor:public Persona{
private:
    string materia;
public:
    Profesor(string,int,string);
    void Mostrar();
};
Profesor::Profesor(string _nombre,int _edad,string _materia):Persona(_nombre,_edad){
materia=_materia;
}
void Profesor::Mostrar(){
Persona::Mostrar();
cout<<"Materia: "<<materia<<endl;
}
Alumno::Alumno(string _nombre,int _edad,int _notaFinal):Persona(_nombre,_edad){
notaFinal=_notaFinal;
}
void Alumno::Mostrar(){
Persona::Mostrar();
cout<<"Nota final: "<<notaFinal<<endl;
}
Persona::Persona(string _nombre, int _edad){
nombre=_nombre;
edad=_edad;
}
void Persona::Mostrar(){
cout<<"Nombre: "<<nombre<<endl;
cout<<"Edad: "<<edad<<endl;
}



int main(){

/*Alumno alumno1("Braian",20,10);
alumno1.Mostrar();
Alumno *alumno2("Pepe",21,9);*/
Persona *persona[3];
persona[0]=new Persona("Braian",21);
persona[1]=new Alumno("Marcos",24,10);
persona[2]=new Profesor("Roberto",54,"Organizacion");

persona[0]->Mostrar();
cout<<"--------------------------"<<endl;
persona[1]->Mostrar();
cout<<"--------------------------"<<endl;
persona[2]->Mostrar();
delete persona[0];
delete persona[1];
delete persona[2];

    return 0;
}
