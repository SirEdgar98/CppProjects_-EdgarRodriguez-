#include <vector>


std::vector<int> AddVectors(std::vector<int> v1, std::vector<int>v2)
{
	std::vector<int>v3;
	for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); it++) 
	{
		v3 = v1[it] + v2[it];
	}
}

void main() 
{

//Constructor sin argumentos: Vector de size 0
	std::vector<int>v1;

//Constructor con una lista de inicializacion
	std::vector<int> v12({ 10,9,8,7,6,5,4,3,2,1 });

//Constructor de copia
	std::vector<int>v4(v12); // del mismo tamaño que v12 y con los mismos elementos

//Constructor con num elementos
	std::vector<int>v9(5); // de longitud 5 inicializados en 0

//Constructor con num de elementos y valor inicial para todos los elementos
	std::vector<int>v10(5, 10); // de longitud 5 y inicializados en 10

//Constructor con iteradores
	std::vector<int>v7(v12.begin(), v12.end()); // Copia todo v12 usando iteradores
	// begin = devuelve el primer elemento
	//end = devuelve al siguiente del ultimo

//Constructor con iteradores
	std::vector<int>v7(v12.begin() + 1, v12.end() - 1); // copia todo menos el primero y el último

//Constructor con iteradores, desde arrays (Construir un vecotr apartir de una array que ya tengo)
	int myArray[]{ 16,2,77,29 };
	std::vector<int> v20(myArray, myArray + sizeof(myArray) / sizeof(int));

//Constructor con iteradores, desde arrays con punteros
	int *pv;
	pv = new int[4]{ 1,2,3,4 };
	std::vector<int> v21(pv, pv + 4);



	struct Personas 
	{
		std::string Nombre;
		std::string Fecha;
		std::string DNI;
	};

	Personas Man1;
	Man1.Nombre = "Edgar";
	Man1.Fecha = "15/06/1998";
	Man1.DNI = "48269849W";
	Personas Man2;
	Man2.Nombre = "Javi";
	Man2.Fecha = "26/10/1987";
	Man2.DNI = "726354829J";
	Personas Girl1;
	Girl1.Nombre = "Silbia";
	Girl1.Fecha = "67/223/22209";
	Girl1.DNI = "4565243435Ñ";


	std::vector<int> v1(5);

	std::vector<int> v2(10);

	std::vector<int> v3({ 10,9,8,7,6,5,4,3,2,1 });

	std::vector<std::string> v4({ "Gertrudiz","Pancracia","Anacleto","Hipolito","Eustaquio","Fulgencia" });

	std::vector<int>v5(v3);

	std::vector<Personas>v6({ Man1,Man2,Girl1 });

 
}


