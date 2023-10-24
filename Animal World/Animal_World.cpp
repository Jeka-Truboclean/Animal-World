#include "Africa.h"
#include "Animal_World.h"
#include "Carnivore.h"
#include "Continent.h"
#include "Herbivore.h"
#include "North_America.h"
#include "Bison.h"
#include "Wildebeest.h"
#include "Lion.h"
#include "Wolf.h"
#include <iostream>
using namespace std;

void Animal_World::Meals_Herbibores(Herbivore* herbivore)
{
	herbivore->Eat_Grass();
}
void Animal_World::Nutririon_Carnivores(Carnivore* carnivore, Herbivore* herbivore)
{
	carnivore->Eat(herbivore);
}
