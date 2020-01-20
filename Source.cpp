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
	int ninjaHealth = 100;
	int pirateHealth = 100;
	int atkChoice;

	//Create ninja
	Ninja first_ninja;
	
	//Name ninja
	first_ninja.Name = "Greg";

	//Create pirate
	Pirate first_pirate;

	//Name pirate
	first_pirate.Name = "Redbeard";

	//As long as the battle goes on, this loop will run
	do
	{
		//Initializes the Ninja's health
		first_ninja.SetHealth(ninjaHealth);
		first_ninja.DisplayCharacterStats();

		//Initializes the pirate's health
		first_pirate.SetHealth(pirateHealth);
		first_pirate.DisplayCharacterStats();

		//Sets the choice for who gets to attack
		atkChoice = game_driver.RandomRoll();

		//If the ninja attacks...
		if ((atkChoice % 2) == 0)
		{
			//Deal damage
			first_ninja.ThrowStars();
			pirateHealth -= first_ninja.Attack();
		}
		//If the pirate attacks...
		else
		{
			//Deal damage
			first_pirate.UseSword();
			ninjaHealth -= first_pirate.Attack();
		}

	} while (ninjaHealth != 0 && pirateHealth != 0);

	//Sets the final healths
	first_ninja.SetHealth(ninjaHealth);
	first_ninja.DisplayCharacterStats();


	first_pirate.SetHealth(pirateHealth);
	first_pirate.DisplayCharacterStats();

	//If the pirate wins...
	if (pirateHealth > 0)
		std::cout << "\nPirate wins!";
	//If the ninja wins...
	else
		std::cout << "\nNinja wins!";
	return 0;
}