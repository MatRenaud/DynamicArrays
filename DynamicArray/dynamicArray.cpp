#include "dynamicArray.h"
#include <stdexcept>

DynamicArray::DynamicArray(){
	tabElements = new int[capacite]();
}

DynamicArray::DynamicArray(unsigned int newCapacite)
{
	if (newCapacite < 1) {
		throw std::invalid_argument("...");
	}
	capacite = newCapacite;
	tabElements= new int[capacite]();
}
DynamicArray::DynamicArray(const DynamicArray& dynamicArray) {
	this->capacite = dynamicArray.capacite;
	this->tabElements = new int[capacite];
	for (int i = 0; i < capacite; i++) {
		this->tabElements[i] = dynamicArray.tabElements[i];
	}
}


int DynamicArray::getCapacite()
{
	return capacite;
}

void DynamicArray::setCapacite(unsigned int newCapacite)
{
	if (newCapacite < 1) { throw std::invalid_argument("...");}
	int maxIndex = capacite;
	if (this->capacite > newCapacite) {
		maxIndex = newCapacite;
	}
	int* tempTab = new int[newCapacite]();
	for (int i = 0; i < maxIndex; i++) {
		tempTab[i] = tabElements[i];
	}
	delete tabElements;
	tabElements = tempTab;
	this->capacite = newCapacite;	
}

int DynamicArray::getElement(unsigned int index)
{
	if (index > capacite) {
		throw std::out_of_range("...");
	}
	return tabElements[index];
}

void DynamicArray::setElement(unsigned int index, int value)
{
	if (index > capacite) {
		this->setCapacite(index+1);
	}
	tabElements[index] = value;
}

DynamicArray & DynamicArray::operator=(const DynamicArray& dynamicArray)
{
	this->capacite = dynamicArray.capacite;
	this->tabElements = new int[capacite];
	for (int i = 0; i < capacite; i++) {
		this->tabElements[i] = dynamicArray.tabElements[i];
	}
	return *this;
}


