#pragma once
#include "Herbivore.h"
#include "Carnivore.h"

class Continent
{
protected:
	Herbivore* herbivores = nullptr;
	Carnivore* carnivores = nullptr;
public:
	virtual void Set(Herbivore* herbivores, Carnivore* carnivores) = 0;
};

