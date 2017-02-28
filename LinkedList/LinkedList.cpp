// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Node.h"

using namespace std;

int main()
{
	int x, d;
	Node newNode = new Node();
	cout << "Enter no. of nodes in linked list" << endl;
	cin >> x;

	for (int i = 0; i < x; i++) {
		cout << "Enter daat for %d node" << endl;
		cin >> d;
		newNode.appendToTail(d);
	}
    return 0;
}

