#pragma once
//Create a Pirate class which inherits from the Character class
#include "Character.h"
class Pirate :
	public Character
{
public:
	//Create a constructor on the pirate class to initialize all public and private properties in the Character class and subclasses
	Pirate();
	
	//Create a method called UseSword in the Pirate class
	void UseSword();
	
	//Create an override attack method in pirate subclass using Overriding Polymorphism 
	int Attack() override;

	//Override the Help method in Ninja class
	void Help() override;
};

