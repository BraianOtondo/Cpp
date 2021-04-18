#include "vino.h"
#include <iostream>
#include<string.h>
#include "lista.h"
#include"usuario.h"
using namespace std;
USUARIO CrearUsuario(int id,const char nombeyApellido[],const char direccion[],LISTA lista,int edadUsuario,const char nacionalidad[]){
USUARIO usuario = new StructUsuario;
SetIDUsuario(usuario,id);
SetNombreYApellido(usuario,nombeyApellido);
SetDireccionUsuario(usuario,direccion);
SetListaUsuario(usuario,lista);
SetEdadUsuario(usuario,edadUsuario);
SetNacionalidadUsuario(usuario,nacionalidad);
return usuario;
}
void EliminarUsuario(USUARIO usuario){
delete usuario;
}
void SetIDUsuario(USUARIO usuario,int id){
usuario->id=id;
}
void SetNombreYApellido(USUARIO usuario,const char nombreYApellido[]){
strcpy(usuario->nombeyApellido,nombreYApellido);
}
void SetDireccionUsuario(USUARIO usuario,const char direccion[]){
strcpy(usuario->direccion,direccion);
}
void SetListaUsuario(USUARIO usuario,LISTA lista){
usuario->lista=lista;
}
void SetEdadUsuario(USUARIO usuario,int edadUsuario){
usuario->edadUsuario=edadUsuario;
}
void SetNacionalidadUsuario(USUARIO usuario,const char nacionalidad[]){
strcpy(usuario->nacionalidad,nacionalidad);
}
int GetIDUsuario(USUARIO usuario){
return usuario->edadUsuario;
}
char *GetNombreYApellidoUsuario(USUARIO usuario){
return usuario->nombeyApellido;
}
char *GetDireccionUsuario(USUARIO usuario){
return usuario->direccion;
}
LISTA GetListaUsuario(USUARIO usuario){
return usuario->lista;
}
int GetEdadUsuario(USUARIO usuario){
return usuario->edadUsuario;
}
char *GetNacionalidadUsuario(USUARIO usuario){
return usuario->nacionalidad;
}
void MostrarUsuario(USUARIO usuario){
cout<<"ID: "<<GetIDUsuario(usuario)<<endl;
cout<<"Nombre y Apellido: "<<GetNombreYApellidoUsuario(usuario)<<endl;
cout<<"LISTA: "<<endl;
ImprimirLista(GetListaUsuario(usuario));
cout<<"Edad de Usuario: "<<GetEdadUsuario(usuario)<<endl;
cout<<"Nacionalidad: "<<GetNacionalidadUsuario(usuario)<<endl;
}
