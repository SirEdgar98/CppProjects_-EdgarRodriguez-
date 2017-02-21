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
		case EnemyType::ZOMBIE:		return "Zombie"; // el uso del :: para evitar ambiguedades, decalara a que pertenece el ENUM
		case EnemyType::VAMPIRE:	return "Vampire";
		case EnemyType::WITCH:		return "Witch";
		case EnemyType::GHOST:		return "Ghost";
		default: return "";
		}
	}
};

bool operator == (const Enemy &Malo1, const Enemy &Malo2) // Sobrecarga delm operador == para comprobar el tipo y nombre de dos enemigos
											  // Se puede poner el conts, el uso del & para estar seguros de que lo pasa por referencia
{
	// MI FORMA (MAS LARGA, QUIZAS MENOS EFICIENTE )
	/*bool IDEM = false;

	if ((Malo1.Type == Malo2.Type) && (Malo1.name == Malo2.name))
	{
		IDEM = true;
		return IDEM;
	}*/

	return Malo1.name == Malo2.name && Malo1.Type == Malo2.Type;
	
}

Enemy CreateRandomEnemy() // Retorna un enemigo random
{
	static const int MAX_LIFE{ 500 }; // Maxima vida que tendran los enemigos
	static const std::string NAMES[]{"PACO","ELDRICH", "JACINO", "ABICHUELO", "VISUALSTUDIO", "THNDERCLAW"}; // Lista de los posibles nombres de los enemigos


}
void main()
{

}