#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "vino.h"
struct Nodo{
VINO vino;
struct Nodo *siguiente;
};

struct Lista{
Nodo *cabeza;
int tam;
};
typedef struct Lista *LISTA;
LISTA CrearLista();
struct Nodo* CrearNodo(VINO vino);
void EliminarNodo(struct Nodo*nodo);
void obtenerElemento(LISTA lista,VINO *vino, int pos);

#endif // LISTA_H_INCLUDED
