#include "Character.h"
#include <iostream>

int Character::GetHealth()
{
	return Health;
}

void Character::SetHealth(int health)
{
	if (health <= 0)
	{
		health = 0;
		std::cout << Name << " has expired." << std::endl;
	}
	Health = health;
}
	

void Character::DisplayCharacterStats()
{
	std::cout << Name << "'s health is " << GetHealth();
}

void Character::Talk(std::string dialog)
{
	std::cout << "\nOur character says '" << dialog << "'" << std::endl;
}

void Character::Talk(std::string dialog, std::string name)
{
	std::cout << "\n"  << name << " says '"<< dialog << "'" << std::endl;
}

int Character::Attack()
{
	return 10;
}

void Character::Help()
{
	std::cout << "\nThis is NPC help. \n";
}
