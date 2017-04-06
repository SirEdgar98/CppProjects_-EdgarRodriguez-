#include<map>
#include<ostream>
#include<iostream>



struct Person 
{
	std::string name;
	int age;
};
void main(void)
{
	//Constructor del map
	std::map<std::string, Person> persons;

	// Insertar elementos en el map
	persons["48269849W"] = { "Edgar",18 }; // cada un a de las key son unicas, va entre[]
	persons["48356935J"] = { "Paco", 32 };
	persons["48356935J"] = { "Paco", 32 }; // YA que es igual al anterior no cambia nada, si la edad o el nombre fuera diferente, se modificaria

	//Constructor sin argumentos
	std::map<char, int> first;
	first['a'] = 10;
	first['b'] = 20;
	first['c'] = 30;
	first['d'] = 40;

	//Construcrtor con iteradores sobre otro map
	std::map <char, int> second(first.begin(), first.end());
	
	//constructor por copia
	std::map<char, int> third(second);


	
	
	//insertar personas en el map
	persons["48269849W"] = { "Edgar",18 }; 
	persons["88356935J"] = { "Paco", 32 };
	persons["63336983J"] = { "Javi", 29 };

	// EL MAP ORDENA AUTOMATICAMENTE LAS KEYS; I EL begin APUNTA EL PRIMERO DE TODOS ORDENADO
	
	//instertar atraves de pair
	persons.insert(std::pair<std::string, Person>("34578563O", { "Maria",49 }));
	//					Dentro del pair hay			FIRST			SECOND
	// Se puede atarcar al firs o al pair con first() o second()


	//typedef: para acortar declaraciones de variables
	//permite definir tipos de nombre
	//Insertar todos los elementos de persoen en DicPersons Persons1 hasta que encuentra al iterador con el find;
	typedef std::map<std::string, Person> DicPerson;
	DicPerson Persons1;
	Persons1.insert(persons.begin(), persons.find("63336983J"));


	//BORRAR ELEMENTOS DEL MAP
	auto it = persons.find("88356935J");
	if (it != persons.end())persons.erase(it);
	
	// DELETE POR KEY
	persons.erase("48269849W");
	



	//READ // ACCESO

	//Acceso a un valor usando la key
	std::cout << persons["48269849W"].name << std::endl;

	//recorer un map

	for (auto it = Persons1.begin(); it != Persons1.end(); ++it) 
	{
		std::cout << it->first << "=>" << it->second.name << std::endl;




	}


}
