#include "GameDriver.h"
#include <iostream>



void GameDriver::Intro()
{
	std::cout << "Cool Intro" << std::endl;
}

void GameDriver::DisplayCharacterStats()
{
	std::cout << "Test Display Character Stats" << std::endl;
}

int GameDriver::RandomRoll()
{
	int number;
	number = rand() % 100 + 1;
	return number;
}
