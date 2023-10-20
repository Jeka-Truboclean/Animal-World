#pragma once
#include "Continent.h"

class Herbivore 
{
protected:
	double weight;
	bool Life;
public:
	virtual void Eat_Grass() = 0;
	virtual void Set(int weight, bool life) = 0;

};

