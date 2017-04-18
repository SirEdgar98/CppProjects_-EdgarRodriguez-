#include <unordered_map>
#include <iostream>

void main() 
{
	// DEclarar mapa no ordenado
	std::unordered_map <std::string, std::string> mymap;

	mymap = { {"Australia" , "Canberra"},{"Francia","Paris"}, {"U.S", "Whasington" } , {"Alemania","Berlin" } };
	mymap["Belgica"] = "Bruselas";
	mymap.insert(std::pair<std::string, std::string>("Italia", "Roma"));

	//Imprimir el unordered_Map con iteradores

	std::cout << "MyMap cointains:" << std::endl;
	for (auto it = mymap.begin(); it != mymap.end(); i++)
	{
		std::cout << "" << it->first << ":" << it->second << std::endl;

	}












}
