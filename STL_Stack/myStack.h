

class myStack
{
	struct node
	{
		int info;
		node *next;
	};

	node *first; //Puntero al primer elemento

public:
	//Constructores
	myStack(); //Por defecto
	myStack( myStack &myStack); //Constructor por copia
	myStack(int *array); //Constructor por lista de inicializacion con una array
	~myStack();

	void pop();
	void push(int elememnt);
	int front();
	bool isEmpty();
	int size();

};

