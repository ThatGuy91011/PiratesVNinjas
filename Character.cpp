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
		Health = 0;
	}
	else
	{
		Health = health;
	}
}
	

void Character::DisplayCharacterStats()
{
	if (Health == 0)
	{
		std::cout << "Character has expired." << std::endl;
	}
	else
	{
		std::cout << Name << "'s Health is " << GetHealth();
	}
	
}