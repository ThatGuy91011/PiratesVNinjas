#pragma once
#include "GameStructure.h"
#include <string>
//Create a class called Character which inherits from the GameStructure class
class Character :
	public GameStructure
{ 
public:
	//Create a public property in the Character class and call it Name
	std::string Name;
	
	//Create getter and setter public methods in the superclass to access and update this private Health property
	int GetHealth();
	void SetHealth(int health);
	
	//Add a method to the Character class called DisplayStats to display all the properties of all the characters
	void DisplayCharacterStats();
	
	//Create 2 methods named Talk using Overloading Polymorphism in the Character class
	void Talk(std::string dialog);
	void Talk(std::string dialog, std::string name);

	//Create a virtual attack method in the Character class
	virtual int Attack();
	
	//Override the Help method in the Character class
	void Help() override;
private:
	//Create one private property called Health in the Character superclass
	int Health;
};

