#pragma once
#include "Character.h"
class Pirate :
	public Character
{
public:
	Pirate();
	void UseSword();
	int Attack() override;
	void Help() override;
};

