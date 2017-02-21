#include<iostream>
#include<string>
#include<ctime>

enum class EnemyType { ZOMBIE, VAMPIRE,GHOST,WITCH,MAX }; // Max para saber el ultimo a la hora de hacer un random

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
	static const int MAX_LIFE{ 500 }; // Maxima vida que tendran los enemigos / const(C++) != #define (C)
	static const std::string NAMES[]{"STORMBIRD","ELDRICH", "JACINO", "ABICHUELO", "VISUALSTUDIO", "THNDERCLAW"}; // Lista de los posibles nombres de los enemigos

	return Enemy // devuelve un enemigo con valores random
	{
		// FORMA DE TONA // return Enemy {... , ... , ...} los atributos de el struct
		static_cast <EnemyType>(rand() % static_cast<int>(EnemyType:: MAX)),
		NAMES[rand() % (sizeof NAMES / sizeof std::string)], rand() % MAX_LIFE
		// la division de el sizeof de la array i de el size of de el strng da el numero total de strings (nombres) que hay en el array.
	};
	


}
void main(void)
{
	srand(static_cast<unsigned>(time(nullptr))); // el srand de C++ usando la libreria ctime / cast a unsigned por que time necesita un int sin signo
	const int MAX_ENEMIES{ 5 }; // numero maximo de enemigos quye tendra la array
	Enemy Enemies[MAX_ENEMIES]; // Inicializado de la array con  el numero maximo de enemigos

	// inicializacion de cada enemigo en la array
	{
		int i{ 0 };
		while (i < MAX_ENEMIES)
		{
			Enemies[i] = CreateRandomEnemy();
			int j{ i - 1 };
			while (j >= 0)
			{
				if (Enemies[i] == Enemies[j]) // compeuva cada enemigo creado con el anterior
											  // si encuentra uno igual vuelve hacia atras, haciendo desaparecer el enemigo repetido
				{
					--i;
					break;
				};
				j--;
			};
			i++;
		}
	}

	// Print the array of enemies
	// usando un nuevo for, el for each en otros lenguajes
	for (auto &Enemy : Enemies) // para cada Enemy de la coleciion Enemies actua
	{
		std::cout << Enemy.name << "is a " << Enemy.getEnemyTypeString() << " whose life is " << Enemy.Health << std::endl;
	}
}