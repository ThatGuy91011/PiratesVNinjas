#include "Ninja.h"
#include <iostream>

void Ninja::ThrowStars()
{
	std::cout << "\nI am throwing stars!" << std::endl;
}
//Set their attack return values at 25 hit points
int Ninja::Attack()
{
	return 25;
}

//Display the ninja help
void Ninja::Help()
{
	std::cout << "\nThis is ninja help. Try throwing a star. \n";
}

//Tells the console that a character was created
Ninja::Ninja()
{
	std::cout << "\nThis ninja was just created from the constructor" << std::endl;
}