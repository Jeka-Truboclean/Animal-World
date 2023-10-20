#include "Bison.h"
#include <iostream>
using namespace std;

Bison::Bison(int weight, bool life)
{
	this->weight = weight;
	this->Life = life;
}

void Bison::Set(int weight, bool life)
{
	this->weight = weight;
	this->Life = life;
}

void Bison::Eat_Grass()
{
	weight += 10;
}

