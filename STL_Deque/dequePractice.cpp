#include <deque>
#include <queue>
#include <vector>
#include <set>
#include <unordered_set>
#include <iostream>


// 3) Implementacion de funciones
// Recibe dos priority queue y devuelve una con el merge de las dos
std::priority_queue<int> superMergeP (std::priority_queue<int> &PQ1, std::priority_queue<int> &PQ2)
{
	std::priority_queue<int> Result;
	while (!PQ1.empty() || !PQ2.empty())
	{
		Result.push(PQ1.top());
		Result.push(PQ2.top());
		PQ1.pop();
		PQ2.pop();
	}
	return Result;
}

//Recibe dos queues de strings i devuelve una con las dos recibidas concatenadas
std::queue<std::string> concQueue(std::queue<std::string>QUE1, std::queue<std::string>QUE2)
{
	std::queue<std::string> Result;
	while (!QUE1.empty())
	{
		Result.push(QUE1.front());
		QUE1.pop();
	}
	while (!QUE2.empty())
	{
		Result.push(QUE2.front());
		QUE2.pop();
	}
	return Result;
}

//devuelve una queue de enteros con los valores de la anterior movidos una posicion a la derecha, entrando en lugar del primero un nuevo elemento random
/*std::queue<int> shiftRight(std::queue<int> &QUE1)
{

}
*/

//devuelve una queue de enteros rotada hacia la izquierda donde el ultimo entra en la primera posicion

/*std::queue <int> rotateLeft(std::queue<int> &QUE1)
{

}
*/
//Recibe una deque de enteros i un valor i elimia todos los elementos con ese valor
std::deque<int> eraseElements(std::deque<int>DQ1, int eraseNumber)
{
	for (unsigned i = 0; i != DQ1.size(); i++)
	{
		if (DQ1[i] == eraseNumber)
		{
			DQ1.erase(DQ1.begin() + i);
		}
	}
	return DQ1;
}

std::deque<int> ereaseRepeted(std::deque<int> DQ1)
{
	std::unordered_set <int> checkRepeted(DQ1.begin(), DQ1.end());
	
	return std::deque<int>(checkRepeted.begin(), checkRepeted.end());
}


void main()
{ 
	/////////////////////////////////////////////////////////////////
	//Usando deque
	/////////////////////////////////////////////////////////////////
	std::cout << "Usando deque" << std::endl;

	//crear deque de 10 valores inicializados en 10.5
	std::deque<float>prices(10, 10.5);

	//cambiar ultimo elemento por el valor 32.43
	prices.pop_back();
	prices.push_back(32.43);

	//borrar primer elemento
	prices.pop_front();

	//asignar la deque prices a otra deque
	std::deque<float>prices2(prices);
	
	//insteratr 5.62 i 20.31 en la seguna deque
	prices2.insert(prices2.begin(), 5.62);
	prices2.insert(prices2.begin(), 20.31);
	//insertar 10 en la seguna posicion de la seguna deque
	std::deque<float>::iterator it = prices2.insert(prices2.begin() + 1, 10);

	//imprimir la deque usando el backward iterator
	std::cout << "deque prices" << std::endl;
	for (auto i = prices.rbegin(); i != prices.rend(); ++i)
	{
		std::cout << *i << "-";
	}
	std::cout << "\n";

	//imprimir la seguna deque de otra forma
	std::cout << "deque prices2" << std::endl;
	for (auto i = 0; i != prices2.size(); i++)
	{
		std::cout << prices2[i] <<"-";
	}
	std::cout << "\n";

	//////////////////////////////////////////////////////////////////
	//Usando Vectores
	//////////////////////////////////////////////////////////////////
	
	std::cout << "Usando Vectores" << std::endl;
	
	//cerar vecotr de 10 foats inicializados en 10.5
	std::vector<float> pricesVector(10, 10.5);
	
	//cambiar el ultimo elemento por 32.43
	pricesVector.insert(pricesVector.end() - 1 ,32.43);

	//borrar primer elemento
	pricesVector.erase(pricesVector.begin());

	//asignar el primer vector a otro
	std::vector<float>pricesVector2(pricesVector);

	//insteratr 5.62 i 20.31 en el segundo vector
	pricesVector2.insert(pricesVector2.begin(), 5.62);
	pricesVector2.insert(pricesVector2.begin(), 20.31);

	//insertar 10 en la seguna posicion de la seguna deque
	pricesVector2.insert(pricesVector2.begin() + 1, 10);

	//imprimir el vector usando el backward iterator
	std::cout << "vector pricesVector" << std::endl;
	for (auto i = pricesVector.rbegin(); i != pricesVector.rend(); ++i)
	{
		std::cout << *i << "-";
	}
	std::cout << "\n";

	//imprimir el vector de otra froma
	std::cout << "vector pricesVector2" << std::endl;
	for (auto i = 0; i != pricesVector2.size(); i++)
	{
		std::cout << pricesVector2[i] << "-";
	}
	std::cout << "\n";
}


