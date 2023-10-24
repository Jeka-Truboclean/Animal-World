#include "Lion.h"
#include <iostream>
using namespace std;

Lion::Lion(double power)
{
	this->power = power;
}

void Lion::Eat(Herbivore* herbivore)
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

void Lion::Set(double power)
{
	this->power = power;
}
