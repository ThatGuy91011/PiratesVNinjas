#include "Pirate.h"
#include <iostream>

void Pirate::UseSword()
{
	std::cout << "I am Swooshing my Sword!" << std::endl;
}

int Pirate::Attack()
{
	return 25;
}

void Pirate::Help()
{
	std::cout << "\nThis is pirate help. Try using your sword. \n";
}

Pirate::Pirate()
{
	std::cout << "This pirate was just created from the constructor" << std::endl;
}