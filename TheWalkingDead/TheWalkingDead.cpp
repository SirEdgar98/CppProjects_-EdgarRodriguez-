#include <iostream>
#include <string>
#include <ctime>



enum class Weapon { FISTS, GUN, SHOTGUN, REVOLVER,SNIPER,MACHINE_GUN, MAX };

class Player
{
private:
	//Atributos
	Weapon WeaponHand;
	float precition;
	int life;

public:
	Player(WeaponHand,precition,life);//constructor
	
	~Player(); // Destructor

};

Player::Player(WeaponHand,precition,life)
{
	WeaponHand
}

Player::~Player()
{
}