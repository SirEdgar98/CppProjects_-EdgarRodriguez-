#include<map>
#include<vector>
#include<iostream>
#include<string>

	
int points;
std::string name;
std::map<std::string, int> Ranking;

void main(void) 
{
	Ranking["Edgar"] = 10000;
	Ranking["Javi"] = 12000;
	Ranking["Miquel"] = 11000;
	Ranking["Manel"] = 9000;

	std::cout << "Name:";
	std::cin >> name;
	std::cout << "Points:";
	std::cin >> points;

	if (Ranking.find(name) != Ranking.end())
	{
		std::cout << "Este nombre esta cojido" << std::endl;
	}

	// Tambien se pude usar make_pair   Ranking.insert std:: make_pair(name, points));
	Ranking.insert(std::pair<std::string, int>(name, points));


	std::cout << "Ranking de Jugadores" << std::endl;
	for (auto it = Ranking.begin(); it != Ranking.end(); ++it)
	{
		std::cout << "Name: " << it->first << " // Points: " << it->second << std::endl;

	}
}
