#include "stdafx.h"
#include "Node.h"


Node::Node(int d) { data = d; }

void Node::appendToTail(int d) {
	Node *end = new Node(d);
	Node *n = this;
	while (n->next != NULL) {
		n = n->next;

	}
}


