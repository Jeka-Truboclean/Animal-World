#pragma once

class Carnivore
{
protected:
	double power;
public:
	virtual void Eat(Herbivore* herbivore) = 0;
	virtual void Set(double power) = 0;
};

