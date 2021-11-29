#ifndef ARBOL_H_INCLUDED
#define ARBOL_H_INCLUDED
#include <iostream>
#include<stdbool.h>
typedef struct Nodo{
int dato;
struct Nodo *derecha;
struct Nodo *izquierda;
struct Nodo *padre;
}NODO;
NODO* CrearNodo(int dato);
bool EstaVacio(NODO nodo);
void Insertar(NODO *&arbol,int dato,NODO *padre);
void MostrarArbol(NODO *arbol,int cont);
bool Buscar(NODO *arbol ,int numero);
void PreOrden(NODO *arbol);
void PostOrden(NODO *arbol);
void InOrden(NODO *arbol);
NODO *Minimo(NODO *arbol);
void EliminarNodo(NODO *nodoEliminar);
void Reemplazar(NODO *arbol,NODO *nodo);
void DestruirNodo(NODO *nodo);
void Eliminar(NODO *arbol,int numero);
#endif // ARBOL_H_INCLUDED
