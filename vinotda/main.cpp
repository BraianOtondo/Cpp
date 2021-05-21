#include <iostream>
#include<string.h>
#include<stdbool.h>
#include "vino.h"
#include"vino.c"
#include"lista.h"
#include "lista.c"
#include"usuario.h"
#include"usuario.c"
using namespace std;

int main(){
USUARIO usuario;
VINO vino,vino2;
usuario=CrearUsuario(1054,"Jose Martinez","San Martin 549",20,"Argentina");
vino=CrearVino(10,"eti","bode","seg","var",2,"terr");
vino2=CrearVino(20,"eti","bode","seg","var",2,"terr");
//InsertarVinoEnUsuario(usuario,vino);
//InsertarVinoEnUsuario(usuario,vino2);
//InsertarInicio(usuario->lista,vino);
//InsertarInicio(usuario->lista,vino2);
InsertarFinal(usuario->lista,vino);
InsertarFinal(usuario->lista,vino2);
//MostrarUsuario(usuario);
ImprimirLista(usuario->lista);
delete usuario;
delete vino;
delete vino2;
/*EliminarInicio(usuario->lista);

cout<<"La lista esta: "<<endl;
if(EstaVacia(usuario->lista)==true){
    cout<<"VACIA"<<endl;
}else{
cout<<"CON DATOS"<<endl;
}

EliminarInicio(usuario->lista);
cout<<"La lista esta: "<<endl;
if(EstaVacia(usuario->lista)==true){
    cout<<"VACIA"<<endl;
}else{
cout<<"CON DATOS"<<endl;
}
//ImprimirLista(lista);
//EliminarInicio(lista);
//cout<<"XD "<<endl;
//ImprimirLista(lista);
    return 0;*/
}
