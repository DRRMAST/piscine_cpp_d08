#include "LittleHand.h"

LittleHand::LittleHand()
{}

LittleHand::~LittleHand()
{}

void LittleHand::sortFruitBox(FruitBox& unsorted, 
						FruitBox& lemons,
						FruitBox& bananas,
						FruitBox& limes)
{
	FruitBox t(unsorted.nbFruits());
	Fruit *re;

	while(unsorted.head() && unsorted.head()->node)
	{
		if(unsorted.head()->node->getName() == "banana")
		{
			re = unsorted.pickFruit();
			if(!(bananas.putFruit(re)))
			t.putFruit(re);
		}
		else if (unsorted.head()->node->getName() == "lemon")
		{
			re = unsorted.pickFruit();
			if(!(lemons.putFruit(re)))
			t.putFruit(re);
		}
		else if (unsorted.head()->node->getName() == "lime")
		{
			re = unsorted.pickFruit();
			if (!(limes.putFruit(re)))
			t.putFruit(re);
		}
		else
			t.putFruit(unsorted.pickFruit());;
		}
		while(t.head() && t.head()->node)
			unsorted.putFruit(t.pickFruit());
	}
