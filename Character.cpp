#include "Character.h"
#include <iostream>

int Character::GetHealth()
{
	return Health;
}

void Character::SetHealth(int health)
{
	//In the setter method check health before setting the value, if the new Health value will be less than zero
	//, then set the property Health to zero and display "Character has Expired..." to the screen
	if (health <= 0)
	{
		health = 0;
		std::cout << "\n" << Name << " has expired." << std::endl;
	}
	Health = health;
}
	

void Character::DisplayCharacterStats()
{
	std::cout << "\n" << Name << "'s health is " << GetHealth();
}

//Give one Talk method this method signature: voidTalk(string stuffToSay)
void Character::Talk(std::string dialog)
{
	std::cout << "\n" << "\nOur character says '" << dialog << "'" << std::endl;
}

//Give the other Talk this method signature:  void Talk(string name, string stuffToSay)
void Character::Talk(std::string dialog, std::string name)
{
	std::cout << "\n"  << name << " says '"<< dialog << "'" << std::endl;
}

//Returns 10 hit points
int Character::Attack()
{
	return 10;
}

//Displays NPC help
void Character::Help()
{
	std::cout << "\n" << "\nThis is NPC help. \n";
}
