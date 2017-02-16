#include<iostream>
#include<string>
#include<ctime>

enum class EnemyType { ZOMBIE, VAMPIRE,GHOST,WITCH};

struct Enemy 
{
	EnemyType Type;
	std:: string name;
	int Health;
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