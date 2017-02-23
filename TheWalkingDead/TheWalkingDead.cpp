#include <iostream>
#include <string>
#include <ctime>



enum class Weapon { FISTS, GUN, SHOTGUN, REVOLVER,SNIPER,MACHINE_GUN, MAX };
class Zombie;
class Player
{
private:
	//Atributos
	Weapon WeaponHand; // de FISITS A MACHINE_GUN
	float precition;   // de 0.f a 1.f
	int life;		   // de 0 a 100

public:
	Player(WeaponHand,precition,life);//constructor
	~Player();						  // Destructor
	//Metodos
	void attack(Zombie &);
	bool isAlive();
};

Player::Player(WeaponHand,precition,life)
{
	
}
void Player::attack(Zombie  &ZOMB1) 
{

}
bool Player::isAlive()
{

}
Player::~Player()
{
}


class Zombie
{
private:
	//Atributos
	int distanceToPlayer; // de 20 a 200
	float speed;          // de 0.f a 20.f
	float damange;		  // de 0.f a 20.f
	int life;			  // de 0 a 100

public:

};

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}


void main(void)
{
	Player PJ1;
	Zombie ZOMB1;
}