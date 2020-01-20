#include "GameDriver.h"
#include "Ninja.h"
#include <ctime>
#include <iostream>


//Displays the intro
void GameDriver::Intro()
{
	std::cout << "Cool Intro" << "\n" << std::endl;
}

//Returns a random number for use in events
int GameDriver::RandomRoll()
{
	srand(time(NULL));
	int number;
	number = rand() % 100 + 1;
	return number;
}
