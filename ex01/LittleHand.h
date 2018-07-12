#ifndef LITTLEHAND_H
#define LITTLEHAND_H

#include "FruitBox.h"

class LittleHand
{
	public:
		LittleHand();
		~LittleHand();
		void sortFruitBox(FruitBox& unsorted,
						FruitBox& lemons,
						FruitBox& bananas,
						FruitBox& limes);
};

#endif
