#pragma once
class MyList
{
	//Atributos
	struct node 
	{
		int data;
		node *next;
		node *previous;
	};
	node *first;
	node *last;
	
	int numberNodes;

public:
	//Constructores
	MyList();							//Constructor por defecto
	MyList(MyList &myList);				//Constructor por copia

	~MyList();							//Destructor



	
	//Metodos

	int front();						//front
	int back();							//Back
	void push_front(int data);					//push_front
	void pop_front();					//ppp_front
	void push_back( int data);					//push_front
	void pop_back();					//pop_back
	int size();							//size
	bool isEmpty();						//isEmpty

};

