#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED

struct StructUsuario{
    int id;
    char nombre[20];
    char apellido[20];
    char DirLocPro[50];
    int edad;
    char nacionalidad[20];

};
typedef struct StructUsuario *USUARIO;


#endif // USUARIO_H_INCLUDED
