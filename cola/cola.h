#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED
#include<iostream>
#include<stdbool.h>
struct Nodo{
int dato;
Nodo *siguiente;
};
typedef Nodo NODO;
struct Cola{
NODO *primero;
NODO *ultimo;
int tam;
};
typedef struct Cola *COLA;
COLA CrearCola();
NODO *CrearNodo(int dato);
bool EstaVacia(COLA cola);
void Encolar(COLA cola,int dato);
void Desencolar(COLA cola,int &dato);
#endif // COLA_H_INCLUDED
