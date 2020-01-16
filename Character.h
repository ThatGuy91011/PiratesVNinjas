#pragma once
#include "GameStructure.h"
#include <string>
class Character :
	public GameStructure
{ 
public:
	std::string Name;
	int GetHealth();
	void SetHealth(int health);
	void DisplayCharacterStats();
	//Overloading Polymorphism
	void Talk(std::string dialog);
	void Talk(std::string dialog, std::string name);
	virtual int Attack();
	void Help() override;
private:
	int Health;
};

