#include "Ninja.h"
#include <iostream>

void Ninja::ThrowStars()
{
	std::cout << "I am throwing stars!" << std::endl;
}

Ninja::Ninja()
{
	std::cout << "This ninja was just indoctrinated from the constructor" << std::endl;
}