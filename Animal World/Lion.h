#pragma once
#include "Carnivore.h"
#include "Herbivore.h"

class Lion : public Carnivore
{
public:
	Lion(double power);
	void Eat(Herbivore* herbivore);
	void Set(double power);
};

