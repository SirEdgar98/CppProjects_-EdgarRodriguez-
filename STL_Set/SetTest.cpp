#include<set>
#include<iostream>
#include <string>
#include <algorithm>
#include <iterator>

//Constructor sin argumen

void main()
{
	//Constructor sin argumentos
	std::set<int> c1, c2;

	c1.insert(1);

	c1.insert(4);

	c1.insert(3);

	//Constructor con lista d

	std::set <std::string> c4({ "abc", "def", "ghijk" });

	//Constructor por copia

	std::set <std::string> s5(c4);

	//Constructor usando iter

	std::set<std::string> s6(c4.begin(), c4.end());


	//Recorrer con iteradores

	std::set<std::pair<std::string, int>> s;

	s.insert({ "Jordi",21 });

	s.insert({ "María", 25 });

	s.insert({ "Josep",27 });

	s.insert({ "David", 22 });

	s.insert({ "Ana",21 });

	for (auto it = s.begin(); it != s.end(); ++it)
	{
		std::cout << '-' << it->second << std::endl;
	}

	//UNION

	std::set<int> c1, c2, c3;

	c1.insert(1);

	c1.insert(4);

	c1.insert(3);

	c2.insert(2);

	c2.insert(4);

	std::set_union(c1.begin(), c1.end(), c2.begin(), c2.end(), std::inserter(c3, c3.begin())); // inserter esta en la libreria <iterator>

	for (auto &x : c3)

	{
		std::cout << x << "-";
	}

}
