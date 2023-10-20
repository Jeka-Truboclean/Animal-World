#include "Wildebeest.h"
#include <iostream>
using namespace std;

Wildebeest::Wildebeest(int weight, bool life)
{
	this->weight = weight;
	this->Life = life;
}

void Wildebeest::Eat_Grass()
{
	weight += 10;
}

void Wildebeest::Set(int weight, bool life)
{
	this->weight = weight;
	this->Life = life;
}

