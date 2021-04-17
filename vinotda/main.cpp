#include <iostream>
#include<string.h>
#include "vino.h"
#include"vino.c"
#include"lista.h"
#include "lista.c"
using namespace std;

int main(){
VINO vino,vino2;
LISTA lista;
lista=CrearLista();
vino=CrearVino(1,"eti","bode","seg","var",2,"terr");
vino2=CrearVino(2,"eti","bode","seg","var",2,"terr");
InsertarInicio(lista,vino);
InsertarInicio(lista,vino2);
ImprimirLista(lista);
EliminarInicio(lista);
cout<<"XD "<<endl;
ImprimirLista(lista);
    return 0;
}
