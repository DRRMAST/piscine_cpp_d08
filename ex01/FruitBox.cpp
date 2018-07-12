#include "FruitBox.h"

FruitBox::FruitBox(int const size) : _size(size), _list(NULL)
{
}

FruitBox::~FruitBox()
{
	FruitNode *del = NULL;
	while(_list)
	{
		del = _list;
		_list = _list->next;
		delete del;
	}
}		
int FruitBox::nbFruits() const
{
	FruitNode *t;
	t = _list;
	int re = 0;
	while(t && t->node != NULL)
	{
		re++;
		t = t->next;
	}
	return re;
}
bool FruitBox::putFruit(Fruit const* f)
{
	FruitNode *l = _list;
	FruitNode *t = new FruitNode;
	t->node = f;
	t->next = NULL;
	if(nbFruits() >= _size)
		return false;
	if(nbFruits() < _size && l == NULL)
	{
		_list = t;
		return true;
	}
	while(l->next)
	{
		if(l->node == f)
			return false;
		l = l->next;
	}
	if(l->node == f)
		return false;
	l->next = t;
	return true;
	
}
Fruit* FruitBox::pickFruit()
{
	FruitNode *t = _list;
	Fruit const * re;
	while(t)
	{
		if(t->node)
		{
			re = t->node;
			_list = _list->next;
			delete t;
			return const_cast<Fruit*>(re); 
		}
		t = t->next;
	}
	return NULL;
}
FruitNode* FruitBox::head() const
{
	return _list;
}
