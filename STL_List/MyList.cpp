#include "MyList.h"


//Constructor por defecto
MyList::MyList()
{
	first = nullptr;
	last = nullptr;
	numberNodes = 0;
}

//Constructor por copia
MyList::MyList(MyList & myList)
{
	while (!myList.isEmpty())
	{
		push_front(myList.back());
		myList.pop_back();
	}
}

//Destructor
MyList::~MyList()
{
	while (!isEmpty())
	{
		pop_back();
	}

	first = nullptr;
	last = nullptr;
	numberNodes = 0;
}

//Metodos
int MyList::front()
{
	return first->data;
}

int MyList::back()
{
	return last->data;
}

void MyList::push_front(int data)
{
	node *n = new node;
	n->data = data;
	n->previous = nullptr;

	if (first == nullptr)
	{
		n->next = nullptr;
		last = n;
	}

	else
	{
		n->next = first;
		first->previous = n;
		
	}
	first = n;

	numberNodes++;

}

void MyList::pop_front()
{
	first = first->next;
	delete first->previous;
	numberNodes--;
}

void MyList::push_back(int data)
{

}

void MyList::pop_back()
{
	last = last->previous;
	delete last->next;
	numberNodes--;
}

int MyList::size()
{
	return numberNodes;
}

bool MyList::isEmpty()
{
	if (first == nullptr) return true;
	else return false;
}
