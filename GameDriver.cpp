#include "GameDriver.h"
#include "Ninja.h"

#include <iostream>



void GameDriver::Intro()
{
	std::cout << "Cool Intro" << std::endl;
}



int GameDriver::RandomRoll()
{
	int number;
	number = rand() % 100 + 1;
	return number;
}
