#include <deque>
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
	};	std::deque<int> d6;
	//Set some initial values:
		for (int i = 1; i<6; i++) d6.push_back(i); // 1 2 3 4 5 

		std::deque<int>::iterator it = d6.insert(d6.begin() + 2, 10); // 1 2 10 4 5 

	// "it" now points to the newly inserted 10
		d6.insert(it, 2, 20); // 1 2 20 20 20 3 4 5 

	// "it" no longer valid!
	it = d6.begin() + 2;


	std::vector<int> myvector(2, 30);
	d6.insert(it, myvector.begin(), myvector.end());
	// 1 2 30 30 20 20 10 2 3 4 5
}

