#include "Wolf.h"
#include <iostream>
using namespace std;

Wolf::Wolf(double power)
{
	this->power = power;
}

void Wolf::Eat(Herbivore* herbivore)
{
	if (power > herbivore->Get_Weight()) // прописать геттер
	{
		power += 10;
	}
	else
	{
		cout << "You cant, LOL\n";
	}
}

void Wolf::Set(double power)
{
	this->power = power;
}
