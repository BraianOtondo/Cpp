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
VINO vino,vino2,vino3,vino5,vino6;
usuario=CrearUsuario(1054,"Jose Martinez","San Martin 549",20,"Argentina");
vino=CrearVino(10,"eti","bode","seg","var",2,"terr");
vino2=CrearVino(20,"eti","bode","seg","var",2,"terr");
vino3=CrearVino(40,"eti","bode","seg","var",2,"terr");
vino5=CrearVino(50,"eti","bode","seg","var",2,"terr");
vino6=CrearVino(60,"eti","bode","seg","var",2,"terr");

InsertarFinal(usuario->lista,vino);
InsertarFinal(usuario->lista,vino2);
InsertarFinal(usuario->lista,vino3);
InsertarFinal(usuario->lista,vino5);
InsertarFinal(usuario->lista,vino6);
cout<<"!!!!!!!!!!!!!!"<<endl;
//VINO vino4;
//vino4=CrearVino(30,"eti","bode","seg","var",2,"terr");
//Insertar(usuario->lista,vino4,5);
//MostrarUsuario(usuario);
//LISTA lista;
ImprimirLista(usuario->lista);
//EliminarUltimo(usuario->lista);
Eliminar(usuario->lista,4);
cout<<"dsaADSA"<<endl;

ImprimirLista(usuario->lista);

return 0;
}
