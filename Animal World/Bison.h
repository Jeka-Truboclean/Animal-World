#pragma once
#include "Herbivore.h"
class Bison : public Herbivore
{
public:
	Bison(int weight, bool life);
	void Set(int weight, bool life);
	void Eat_Grass();
	int Get_Weight();
	int Get_Life();
};

