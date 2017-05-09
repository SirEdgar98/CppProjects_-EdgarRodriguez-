#include "myStack.h"



myStack::myStack()
{
}

myStack::myStack(myStack & myStack)
{
}


myStack::~myStack()
{
}


//Metodos
void myStack::pop()
{

}

void myStack::push(int element)
{
	node *n = new node;
	n->info = element;
	n->next = first;
	first = n;
}

int myStack::front()
{

}

bool myStack::isEmpty()
{
	return false;
}

int myStack::size()
{
	
}

