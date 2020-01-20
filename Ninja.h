#pragma once
//Create a Ninja class which inherits from the Character class
#include "Character.h"
class Ninja :
	public Character
{
public:
	//Create a constructor on the ninja class to initialize all public and private properties in the Character class and subclasses
	Ninja();
	
	//Create a method called ThrowStars in the Ninja class 
	void ThrowStars();
	
	//Create an override attack method in ninja subclass using Overriding Polymorphism
	int Attack() override;

	//Override the Help method in Ninja class
	void Help() override;
};

