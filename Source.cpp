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
	int currentHealth = 100;
	
	//Create ninja
	Ninja black_clothes_ninja;
	//Give name
	black_clothes_ninja.Name = "Tom";
	//Set health
	black_clothes_ninja.SetHealth(currentHealth);
	//Health check
	black_clothes_ninja.DisplayCharacterStats();
	//Test ninja fight
	std::cout << "\n\n" << black_clothes_ninja.Name << " has been shot." << std::endl;
	currentHealth -= 30;
	//Set health
	black_clothes_ninja.SetHealth(currentHealth);
	//Health check
	black_clothes_ninja.DisplayCharacterStats();
	//Talking
	black_clothes_ninja.Talk("Don't come any closer");
	black_clothes_ninja.Talk("Don't come any closer", black_clothes_ninja.Name);
	return 0;
}