#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

/******************************************************************************/
/* Definiciones de Tipos de Datos */
/*--------------------------------*/
/* Tipo de Estructura Nodo */
struct Node {
	int data;
	Node *next;
};

/*--------------------------------*/
/* Tipo de Clase LinkedList */

struct LinkedList {
    Node *head, *node;

	public:
		/******************************************************************************/
		/* Definicion de Primitivas */
		/*--------------------------*/

		/*
		PRE : La lista no debe haber sido creada.
		POST: La lista queda creada y preparada para ser usada.
		*/
		LinkedList();
	
		/*
		PRE : La lista debería haber sido creada.
		POST: Se crean los nodos de la lista y se enlazan.
		*/
		void addNode(int n);
		
		/*
		PRE : La lista debería haber sido creada y debe existir al menos un nodo.
		POST: Se retorna el nodo raíz.
		*/
		Node* getHead();
		
		/*
		PRE : La lista debería haber sido creada y debe existir al menos un nodo.
		POST: Se muestran los nodos de la lista enlazada.
		*/
		void display(Node *head);
		
		/*
		PRE : La lista debería haber sido creada y debe existir al menos un nodo.
		POST: Se elimina el nodo.
		*/
		void deleteNode(Node *nodeBefore);
		
		/*
		PRE : Debe existir al menos dos listas creadas.
		POST: Se concatenan las dos listas.
		*/
		void concatenate(Node *a, Node *b);
};

#endif
