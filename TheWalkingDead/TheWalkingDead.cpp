#include <iostream>
#include <string>
#include <ctime>



enum class Weapon { FISTS, GUN, SHOTGUN, REVOLVER,SNIPER,MACHINE_GUN, MAX };
//FORWA
class Zombie;
//CLASE DE PLAYER
class Player
{
private:
	//Atributos
	Weapon weapon; // de FISITS A MACHINE_GUN
	float precition;   // de 0.f a 1.f
	int life;		   // de 0 a 100

public:
	Player();    //constructor
	~Player();	 // Destructor
	//Metodos
	void attack(Zombie &); 
	bool isAlive();
};
//CONSTRUCTOR DEL PLAYER
Player::Player():weapon(static_cast<Weapon>(rand()%static_cast<int>(Weapon::MAX))),precition((rand()% 11) / 10.0),life(rand() % 101)
{
}
//ATTAQUE DEL PLYER
void Player::attack(Zombie  &ZOMB) 
{
	
}
//COMPROBADOR DE VIDA DEL PLAYER
bool Player::isAlive()
{

}
//DESTRUCTOR DEL PLAYER
Player::~Player()
{
}

//CLASE ZOMBIE
class Zombie
{
private:
	//Atributos
	int distanceToPlayer; // de 20 a 200
	float speed;          // de 0.f a 20.f
	float damange;		  // de 0.f a 20.f
	int life;			  // de 0 a 100

public:
	Zombie();  //Constructor
	~Zombie(); // Destructor
	//Metodos
	void attack(Player &);
	bool isAlive();

};
//CONSTRUCTOR DEL ZOMBIE
Zombie::Zombie()
{
}
//ATAQUE DEL ZOMBIE
void Zombie::attack(Player &PJ1)
{

}
//COMPROBADOR DE VIDA DEL ZOMBIE
bool Zombie::isAlive()
{

}
//DESTRUCTOR DEL ZOMBIE
Zombie::~Zombie()
{
}


void main(void)
{
	Player PJ1;
	Zombie ZOMB1;
}