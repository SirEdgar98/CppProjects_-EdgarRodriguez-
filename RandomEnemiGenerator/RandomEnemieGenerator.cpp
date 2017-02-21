#include<iostream>
#include<string>
#include<ctime>

enum class EnemyType { ZOMBIE, VAMPIRE,GHOST,WITCH,MAX }; // MAX para saber el ultimo a la hora de hacer un random

struct Enemy 
{
	EnemyType Type;
	std:: string name;
	int Health;

	std::string getEnemyTypeString() //FUNCION PARA CONVERTIR EL TIPO A SU NOMBRE
	{
		switch (Type)
		{
		case EnemyType::ZOMBIE: return "Zombie";
		case EnemyType::VAMPIRE: return "Vampire";
		case EnemyType::WITCH: return "Witch";
		case EnemyType::GHOST: return "Ghost";
		default: return "";
		}
	}
};
bool operator == (Enemy Malo1, Enemy Malo2)
{
	bool IDEM = false;

	if ((Malo1.Type == Malo2.Type) && (Malo1.name == Malo2.name))
	{
		IDEM = true;
		return IDEM;
	}
}

Enemy CreateRandomEnemy()
{

}
void main()
{

}