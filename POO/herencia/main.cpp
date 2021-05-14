#include <iostream>

using namespace std;
class Persona{
private:
    string nombre;
    int edad;
public:
    Persona(string,int);
    void MostrarPersona();

};
Persona::Persona(string _nombre,int _edad){
nombre=_nombre;
edad=_edad;
}
void Persona::MostrarPersona(){
cout<<"Nombre: "<<nombre<<endl;
cout<<"Edad: "<<edad<<endl;
}
class Alumno:public Persona{ //Puedo acceder a todo lo publico de una Persona
private:
    string codigoAlumno;
    int notaFinal;
public:
Alumno(string,int,string,int);//CONSTRUCTOR DE ALUMNO
void MostrarAlumno();
};
Alumno::Alumno(string _nombre,int _edad,string _codigoAlumno,int _notaFinal):Persona(_nombre,_edad){
codigoAlumno=_codigoAlumno;
notaFinal=_notaFinal;
}
void Alumno::MostrarAlumno(){
MostrarPersona();
cout<<"Codigo de alumno: "<<codigoAlumno<<endl;
cout<<"Nota final: "<<notaFinal<<endl;
}
int main(){
Alumno alumno1("Braian",20,"322",10);
alumno1.MostrarAlumno();
    return 0;
}
