#include <iostream>
#include<string.h>
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
usuario=CrearUsuario(01054,"Jose Martinez","San Martin 549",20,"Argentina");
vino=CrearVino(1,"eti","bode","seg","var",2,"terr");
vino2=CrearVino(2,"eti","bode","seg","var",2,"terr");
InsertarInicio(usuario->lista,vino);
InsertarInicio(usuario->lista,vino2);
MostrarUsuario(usuario);
//ImprimirLista(lista);
//EliminarInicio(lista);
//cout<<"XD "<<endl;
//ImprimirLista(lista);
    return 0;
}
