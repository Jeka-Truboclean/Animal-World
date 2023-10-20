#pragma once
#include "Carnivore.h"
#include "Herbivore.h"

class Wolf : public Carnivore
{
public:
	Wolf(double power);
	void Eat(Herbivore* herbivore);
	void Set(double power);
};

