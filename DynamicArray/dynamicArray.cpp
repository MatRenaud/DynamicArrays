#include "dynamicArray.h"

DynamicArray::DynamicArray(){}

DynamicArray::DynamicArray(int newCapacite)
{
	capacite = newCapacite;
	tabElements= new int[capacite];
	for (int i = 0; i < capacite; i++) {
		tabElements[i] = 0;
	}
}

int DynamicArray::getCapacite()
{
	return capacite;
}

int DynamicArray::setCapacite()
{
	return 0;
}

int DynamicArray::getElement(int i)
{
	return tabElements[i];
}

int DynamicArray::setElement()
{
	return 0;
}


