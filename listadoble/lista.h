#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include <iostream>
struct Nodo{
int dato;
struct Nodo *siguiente;
struct Nodo *anterior;
};
typedef struct Nodo NODO;
struct Lista{
NODO *primero;
NODO *ultimo;
int tam;
};
typedef struct Lista *LISTA;
NODO *CrearNodo(int dato);
LISTA CrearLista();
void InsertarInicio(LISTA lista,int dato);
void InsertarFinal(LISTA lista,int dato);
void Insertar(LISTA lista, int dato,int pos);
void EliminarInicio(LISTA lista);
void MostrarLista(LISTA lista);

#endif // LISTA_H_INCLUDED
