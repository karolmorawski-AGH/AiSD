// listy-wiazane.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

struct node
{
	int val;
	node* next;
	node* prev;
};

int main()
{
	node* H = NULL;

	std::cout << "Lista:\n";
	add(H, 12);
	add(H, 11);
	add(H, 10);
	add(H, 9);
	add(H, 8);
	add(H, 7);
	add(H, 6);
	add(H, 5);
	add(H, 4);
	add(H, 3);
	add(H, 2);
	add(H, 1);
	show(H);
	std::cout << endl << "Lista po:\n";
	show(H);


	std::cout << endl << endl;
	system("pause");
	return 0;
}
