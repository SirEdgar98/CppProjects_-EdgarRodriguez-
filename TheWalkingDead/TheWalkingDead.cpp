#include <iostream>
#include <string>
#include <ctime>




enum class Weapon { FISTS, GUN, SHOTGUN, REVOLVER,SNIPER,MACHINE_GUN, MAX };
// Demasiado para nosotros XD, se queda comentado
/*std::ostream& operator<< (std::ostream &os, const Weapon &weapon)
{
	switch (Weapon)
	{
	case Weapon::GUN:			return os << "Gun";
	case Weapon::SHOTGUN:		return os << "Shotgun";
	case Weapon::REVOLVER:		return os << "Revlover";
	case Weapon::SNIPER:		return os << "Sniper";
	case Weapon::MACHINE_GUN:	return os << "Machine Gun";
	default:					return os << "Fists";
	}
}*/
//FORWARD DECLARATION, ya que el codigo se mira del forma secuencial.
class Zombie;

//CLASE DE PLAYER
class Player
{
public:
	//Atributos
	Weapon weapon;		 // de FISITS A MACHINE_GUN
	float precition;     // de 0.f a 1.f
	int life;		     // de 0 a 100

	Player();    // Constructor
	~Player();	 // Destructor

	//Metodos
	void attack(Zombie &zombie); 
	bool isAlive();
};

//CONSTRUCTOR DEL PLAYER
Player::Player():weapon(static_cast<Weapon>(rand()%static_cast<int>(Weapon::MAX))),precition((rand()% 10) / 10.0),life(rand() % 101)
{
}
//ATTAQUE DEL PLYER
void Player::attack(Zombie  &ZOMB) 
{
		ZOMB.life -= (static_cast<int>(weapon))*precition;
}
//COMPROBADOR DE VIDA DEL PLAYER
bool Player::isAlive()
{
	if (life <= 0)
	{
		return false;
	}
	else 
	{
		return true;
	}
}
//DESTRUCTOR DEL PLAYER
Player::~Player()
{
}


//CLASE ZOMBIE
class Zombie
{
public:
	//Atributos
	int distanceToPlayer; // de 20 a 200
	float speed;          // de 0.f a 20.f
	float damange;		  // de 0.f a 20.f
	int life;			  // de 0 a 100

	Zombie();  //Constructor
	~Zombie(); // Destructor
	//Metodos
	void attack(Player &player);
	bool isAlive();

};

//CONSTRUCTOR DEL ZOMBIE
Zombie::Zombie() :distanceToPlayer (rand() % 200), speed((rand() % 21) / 1.0), damange((rand() % 21) / 1.0), life(rand() % 101)
{
}

//DESTRUCTOR DEL ZOMBIE
Zombie::~Zombie()
{
}


//ATTAQUE DEL PLYER
void Player::attack(Zombie  &zombie) // sino quando llega aqui, sin la forward decalration, no detectaraia a la classe zombie
{
	zombie.life -= static_cast<int>(static_cast<int>(weapon) * precition);
}

//COMPROBADOR DE VIDA DEL PLAYER
bool Player::isAlive()
{
	return life > 0;
}

//ATAQUE DEL ZOMBIE
void Zombie::attack(Player &PJ1)
{
	if (distanceToPlayer <= 0)
	{
		PJ1.life -= static_cast<int>(damange);
	}
	else if (Zombie::distanceToPlayer > 0)
	{
		distanceToPlayer--;
	}
}

//COMPROBADOR DE VIDA DEL ZOMBIE
bool Zombie::isAlive()
{
	return life > 0;
}


void main(void)
{
	srand(static_cast<unsigned>(time(nullptr)));

	Player PJ1;
	std::cout << "LIFE: "<<PJ1.life <<"PRECITION: "<< PJ1.precition <<"WEAPON: " << static_cast<int>(PJ1.weapon) << std::endl;
	const int NUMBER_ZOMBIES{ 10 };
	Zombie Zombies[NUMBER_ZOMBIES];

	std::cout << "ZOMBIES ARE COMING!" << std::endl;

	bool ZombiesAreAlive;

	do
	{
		ZombiesAreAlive = false;
		std::cout << "LIFE OF PLAYER: " << PJ1.life << std::endl;
		for (int i{ 0 }; i < NUMBER_ZOMBIES; i++)
		{
			std::cout << "Zombie" << i << "LIFE: " << Zombies[i].life << "DISTANCE: " << Zombies[i].distanceToPlayer << "SPEED: " << Zombies[i].speed << "DAMANGE: " << Zombies[i].damange << std::endl;
			if (Zombies[i].isAlive)
			{
				PJ1.attack(Zombies[i]);
				Zombies[i].attack(PJ1);
	 			ZombiesAreAlive = true;
				std::cout << "LIFE: " << PJ1.life << "PRECITION: " << PJ1.precition << "WEAPON: " << static_cast<int>(PJ1.weapon) << std::endl;
				std::cout <<"DAMANGE: "<< Zombies[i].damange <<"DISTANCE: "<< Zombies[i].distanceToPlayer <<"SPEED: "<< Zombies[i].speed <<"LIFE: "<< Zombies[i].life << std::endl;
			}
		}

	} while (Player::isAlive && Zombie::isAlive);

	if (ZombiesAreAlive)
	{
		std::cout << "GAME OVER; ZOMBIES WIN!" << std::endl;
	}
	else
	{
		std::cout << "GAME OVER; PLAYER WINS!" << std::endl;
	}

}