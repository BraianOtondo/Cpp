#include <cstdlib>
#include <iostream>
#include "model/linkedList.h"

using namespace std;

int main(int argc, char *argv[]) {
	
	// Creating new LinkedList
	LinkedList *listA = new LinkedList();
	std::cout << ":: Creamos una nueva Lista Enlazada con sus Nodos ::\n" << std::endl;
	
	// Adding new Nodes
	listA->addNode(3);
	listA->addNode(5);
	listA->addNode(7);
	
	// Showing
	std::cout << ":: Ahora mostramos la Lista Enlazada ::" << std::endl;
	listA->display(listA->getHead());
	
	// Add new Node
	listA->addNode(9);
	
	// Show the new list
	std::cout << "\n:: Ahora pasamos a mostrar la nueva Lista Enlazada con el elemento nuevo ::" << std::endl;
	listA->display(listA->getHead());
	
	
	listA->deleteNode(listA->getHead());
	std::cout << "\n:: Ahora pasamos a mostrar la nueva Lista Enlazada con el elemento eliminado ::" << std::endl;
	listA->display(listA->getHead());
	
	
	LinkedList *listB = new LinkedList();
	listB->addNode(13);
	listB->addNode(15);
	listB->addNode(17);
	
	LinkedList *listC = new LinkedList();
	listC->addNode(43);
	
	listC->concatenate(listC->getHead(), listA->getHead());
	listC->concatenate(listC->getHead(), listB->getHead());
	
	std::cout << "\n:: Ahora pasamos a mostrar la nueva Lista Enlazada creada con los elementos de las listas anteriormente creadas ::" << std::endl;
	listC->display(listC->getHead());
	
	delete listA;
	delete listB;
	delete listC;
	
	return 0;
}