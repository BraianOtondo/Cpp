#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED
#include <iostream>
struct StructUsuario{
int id;
char nombreyApellido[20];
char direccion[50];
LISTA lista;// Lista de vinos seleccionada (id de vino):	Lista de Números
int edadUsuario;
char nacionalidad[10];
};
typedef struct StructUsuario *USUARIO;
USUARIO CrearUsuario(int id,const char nombreyApellido[],const char direccion[],LISTA lista,int edadUsuario,const char nacionalidad[]);
void EliminarUsuario(USUARIO usuario);
void SetIDUsuario(USUARIO usuario,int id);
void SetNombreYApellido(USUARIO usuario,const char nombreYApellido[]);
void SetDireccionUsuario(USUARIO usuario,const char direccion[]);
void SetListaUsuario(USUARIO usuario,LISTA lista);
void SetEdadUsuario(USUARIO usuario,int edadUsuario);
void SetNacionalidadUsuario(USUARIO usuario,const char nacionalidad[]);
int GetIDUsuario(USUARIO usuario);
char *GetNombreYApellidoUsuario(USUARIO usuario);
char *GetDireccionUsuario(USUARIO usuario);
LISTA GetListaUsuario(USUARIO usuario);
int GetEdadUsuario(USUARIO usuario);
char *GetNacionalidadUsuario(USUARIO usuario);
void MostrarUsuario(USUARIO usuario);
void InsertarVinoEnUsuario(USUARIO usuario,VINO vino);
#endif // USUARIO_H_INCLUDED
