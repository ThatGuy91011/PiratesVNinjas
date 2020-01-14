#include <iostream>
#include <string>
#include "Character.h"
#include "GameDriver.h"
#include "GameStructure.h"
#include "Ninja.h"
#include "Pirate.h"

int main()
{
	GameDriver game_driver;
	game_driver.Intro();

	//Create ninja
	Ninja black_clothes_ninja;
	//Give name
	black_clothes_ninja.Name = "Tom";
	//Set health
	black_clothes_ninja.SetHealth(-5);
	//Health check
	black_clothes_ninja.DisplayCharacterStats();
	
	return 0;
}