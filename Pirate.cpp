#include "Pirate.h"
#include <iostream>

void Pirate::UseSword()
{
	std::cout << "\nI am Swooshing my Sword!" << std::endl;
}

//Set their attack return values at 25 hit points
int Pirate::Attack()
{
	return 25;
}

//Displays pirate help
void Pirate::Help()
{
	std::cout << "\nThis is pirate help. Try using your sword. \n";
}

//Tells the console that a character was created
Pirate::Pirate()
{
	std::cout << "\nThis pirate was just created from the constructor" << std::endl;
}