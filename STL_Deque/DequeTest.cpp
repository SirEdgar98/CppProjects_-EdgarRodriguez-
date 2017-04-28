#include <deque>
#include <queue>
#include <vector>
#include <iostream>




void main()
{
	std::deque<int> d1;
	std::deque<std::string> d2(5);			// Deque con 5 elementos
	std::deque<std::string> d3(5, "abc");	// Deque con 5 strings que contienen abc
	std::deque<int> d4({ 1,2,3,4 });		// Deuqe con 4 elemntos de 1 2 3 4

	d1.push_back(1);
	d1.push_back(2);
	d1.push_front(3);

	d1[0] = 44;
	//d1[5] = 1;		//Da errror de ejecución por acceso a elemntos que no existen

	d1.pop_back();	//Eliminar el último
	d1.pop_front(); //Eliminar el primero


	for (auto &x : d3) {
		std::cout << x << "-";
	}

	//Recorriendo los elementos usando acceso directo con el operador[]
	for (unsigned i = 0; i < d3.size(); i++) {
		std::cout << d3[i] << "-";
	};

	std::deque<int> d6;
	//Set some initial values:
	for (int i = 1; i < 6; i++) d6.push_back(i); // 1 2 3 4 5 

	std::deque<int>::iterator it = d6.insert(d6.begin() + 2, 10); // 1 2 10 4 5 

// "it" now points to the newly inserted 10
	d6.insert(it, 2, 20); // 1 2 20 20 20 3 4 5 

// "it" no longer valid!
	it = d6.begin() + 2;


	std::vector<int> myvector(2, 30);
	d6.insert(it, myvector.begin(), myvector.end());
	// 1 2 30 30 20 20 10 2 3 4 5

	std::cout << "d6 contains: " << std::endl;
	for (it = d6.begin(); it != d6.end(); it++)
	{
		std::cout << ' ' << *it;
	}



	//////////////////////////////////////////////////////////////////////////
	// Queue
	// De comportamiento FIFO (First-IN First-OUT)
	std::queue<int> q1;
	q1.push(2); //en la cola hay un elemento: 2
	q1.push(3); // en la cola hay dos elementos: 2 y 3

	int p = q1.front(); //f=2 (se accede al primer elemento sin eliminarlo)
	std::cout << "El elemento que está de primero es " << p << std::endl;

	q1.pop(); //se elimina el primer elemento

	int u = q1.back(); // u=3 (se accede al último elemento sin eliminarlo)
	std::cout << "El elemento que está de último es " << u << std::endl;

	q1.pop();
	if (q1.empty()) std::cout << "La cola esta vacia" << std::endl;

	// q1.pop(); // ojo, da error si se accede a un elemento que no está por que la cola esta vacia



	std::priority_queue<int> pq1;
	pq1.push(23);
	pq1.push(245);
	pq1.push(7);

	// Copias pq1 en pq2 para imprimirla ya que para poder iterar en colas hay que ir consultando i eliminando el primer elemento
	std::priority_queue<int> pq2(pq1);
	while (!pq2.empty())
	{
		std::cout << pq2.top() << std::endl;
		pq2.pop();
	}





	struct persona 
	{
		std::string name;
		int age;

		bool operator()(const persona &a, const persona &b) 
		{
			if (a.name < b.name) return true; return false;
		};
	};

	std::priority_queue<persona, std::vector<persona>, persona> q3;
	persona p1 = { "Pepito",21 };
	persona p2 = { "Juanito",23 };
	persona p4 = { "Maria",40 };

	q3.push(p1);
	q3.push(p2);
	q3.push(p4);
	std::cout << "Elementos de persona cola de prioridad:";

	while (!q3.empty())
	{
		std::cout << q3.top().name << std::endl;
			q3.pop();
	}


}


