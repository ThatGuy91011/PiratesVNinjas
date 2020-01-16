#pragma once
#include "Character.h"
class Ninja :
	public Character
{
public:
	Ninja();
	void ThrowStars();
	int Attack() override;
	void Help() override;
};

