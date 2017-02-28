#pragma once
class Node
{
	Node *next = NULL;
	int data;


public : 
	Node(int);
	void appendToTail(int d);

};

