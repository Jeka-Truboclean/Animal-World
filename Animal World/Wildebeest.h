#pragma once
#include "Herbivore.h"
class Wildebeest : public Herbivore
{
public:
	Wildebeest(int weight, bool life);
	void Eat_Grass();
	void Set(int weight, bool life);
};

