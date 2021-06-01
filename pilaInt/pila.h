#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED
#include<iostream>
#include<stdbool.h>
struct Nodo{
int dato;
Nodo *siguiente;
};
typedef Nodo NODO;
struct Pila{
NODO *cima;
int tam;
};
typedef struct Pila *PILA;
NODO *CrearNodo(int dato);
PILA CrearPila();
bool EstaVacia(PILA pila);
void Push(PILA pila,int dato);
void Pop(PILA pila,int &dato);
void DestruirPila(PILA pila);
void MostrarPila(PILA pila);
#endif // PILA_H_INCLUDED
