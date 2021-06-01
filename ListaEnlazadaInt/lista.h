#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include<iostream>
#include<stdbool.h>
#include<string.h>
typedef struct Nodo{
int dato;
struct Nodo *siguiente;
}NODO;

struct Lista{
NODO *cabeza;
int tam;
};
typedef struct Lista *LISTA;
LISTA CrearLista();
NODO* CrearNodo(int dato);
void EliminarNodo(Nodo *nodo);
void obtenerElemento(LISTA lista,int *dato, int pos);
bool EstaVacia(LISTA lista);
void InsertarFinal(LISTA lista,int dato);
void Insertar(LISTA lista,int dato,int pos);
void EliminarInicio(LISTA lista);
void LiberarLista(LISTA lista);
void EliminarUltimo(LISTA lista);
void Eliminar(LISTA lista, int pos);
void ImprimirLista(LISTA lista);
void InsertarInicio(LISTA lista,int dato);
void INsertar(LISTA lista,int dato,int pos);
#endif // LISTA_H_INCLUDED
