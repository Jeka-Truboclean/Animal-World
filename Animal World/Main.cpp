#include <iostream>
#include <stdlib.h>
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
using namespace std;

int main()
{
	int ch1;
	cout << "\tChoose continent\n1 - Africa\n2 - North America\n>";
	cin >> ch1;

	int ch2;
	cout << "\tChoose herbivore animal\n1 - Wildebeest\n2 - Bison\n>";
	cin >> ch2;

	int ch3;
	cout << "\tChoose carnivore animal\n1 - Wolf\n2 - Lion\n>";
	cin >> ch3;

	Continent* ptr = nullptr;
	if (ch1 == 1 and ch2 == 1 and ch3 == 1)
	{
		ptr = new Africa();
		ptr->Set(new Wildebeest(110, 1), new Wolf(210));
	}
	else if (ch1 == 1 and ch2 == 1 and ch3 == 2)
	{
		ptr = new Africa();
		ptr->Set(new Wildebeest(110, 1), new Lion(240));
	}
	else if (ch1 == 1 and ch2 == 2 and ch3 == 1)
	{
		ptr = new Africa();
		ptr->Set(new Bison(120, 1), new Wolf(210));
	}
	else if (ch1 == 2 and ch2 == 1 and ch3 == 1)
	{
		ptr = new North_America();
		ptr->Set(new Wildebeest(110, 1), new Wolf(210));
	}
	else if (ch1 == 2 and ch2 == 1 and ch3 == 2)
	{
		ptr = new North_America();
		ptr->Set(new Wildebeest(110, 1), new Lion(240));
	}
	else if (ch1 == 2 and ch2 == 2 and ch3 == 1)
	{
		ptr = new North_America();
		ptr->Set(new Bison(120, 1), new Wolf(210));
	}
	else if (ch1 == 2 and ch2 == 2 and ch3 == 2)
	{
		ptr = new North_America();
		ptr->Set(new Bison(120, 1), new Lion(240));
	}
	else
	{
		cout << "ERROR" << endl;
	}

	short ch_fin;

	do
	{
		system("cls");
		ch_fin = 0;
		cout << "\tChoose action\n1 - Feed herbivore\n2 - Feed carnivore\n>";
		cin >> ch_fin;

		switch (ch_fin)
		{
		case 1:

		case 2:

		}

	} while (ch_fin == 0);

	return 0;
}