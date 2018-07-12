#ifndef LEMON_H
#define LEMON_H

#include "Fruit.h"
#include <iostream>

class Lemon : public Fruit
{
	public:
		Lemon();
		Lemon(std::string const& name, int vitamins);
		~Lemon();
		virtual std::string const& getName() const;
		
	
};

#endif
