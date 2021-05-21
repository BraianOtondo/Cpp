#include "linkedList.h"
#include <cstdlib>
#include <iostream>

/******************************************************************************/
/* Implementaciรณn de Primitivas */
/* LinkedList Constructor */
LinkedList::LinkedList() {
	head = NULL;
	node = NULL;
};

/******************************************************************************/
void LinkedList::addNode(int n) {
	Node *temporal = new Node();
	temporal->data = n;
	temporal->next = NULL;
	
	if (head == NULL) {
		head = temporal;
		node = temporal;
		
	} else {
		node->next = temporal;
		node = node->next;
		
	}
	
};

/******************************************************************************/
Node* LinkedList::getHead() {
	return head;
};

/******************************************************************************/
void LinkedList::display(Node *head) {
	if (head == NULL) {
		std::cout << "[ FINISHED:: 'NullNext' ]" << std::endl;
		
	} else {
		std::cout << "[ NodeData:: " << head->data << " ] - ";
		display(head->next);
	}
};

/******************************************************************************/
void LinkedList::deleteNode(Node *nodeBefore) {
	// std::cout << "NOT IMPLEMENTED!\n" << std::endl;
	Node *temporal = new Node();
	temporal = nodeBefore->next;
	nodeBefore->next = temporal->next;
	
	delete temporal;
};

/******************************************************************************/
void LinkedList::concatenate(Node *a, Node *b) {
	// std::cout << "NOT IMPLEMENTED!\n" << std::endl;
	if (a != NULL && b != NULL) {
		if (a->next == NULL) {
			a->next = b;

		} else {
			concatenate(a->next, b);
			
		}
	
	} else {
		std::cout << "\n:: Termina porque A o B es NULL ::\n" << std::endl;
		
	}
};

