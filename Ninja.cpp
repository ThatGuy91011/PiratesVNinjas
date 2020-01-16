#include "Ninja.h"
#include <iostream>

void Ninja::ThrowStars()
{
	std::cout << "I am throwing stars!" << std::endl;
}

int Ninja::Attack()
{
	return 25;
}

void Ninja::Help()
{
	std::cout << "\nThis is ninja help. Try throwing a star. \n";
}

Ninja::Ninja()
{
	std::cout << "This ninja was just created from the constructor" << std::endl;
}