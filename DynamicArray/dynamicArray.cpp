#include "dynamicArray.h"
#include <stdexcept>

DynamicArray::DynamicArray(){
	tabElements = new int[capacite]();
	for (int i = 0; i < capacite; i++) {
		tabElements[i] = 0;
	}
}

DynamicArray::DynamicArray(unsigned int newCapacite)
{
	if (newCapacite < 1) {
		throw std::invalid_argument("...");
	}
	capacite = newCapacite;
	tabElements= new int[capacite]();
	for (int i = 0; i < capacite; i++) {
		tabElements[i] = 0;
	}
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

int DynamicArray::getElement(unsigned int index) const
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

bool DynamicArray::operator==(const DynamicArray & dynamicArray) const
{
	bool areEquals = true;
	if (this->capacite != dynamicArray.capacite) {
		areEquals = false;
	}
	for (int i = 0; i < capacite; i++) {
		if (this->tabElements[i] != dynamicArray.tabElements[i]) {
			areEquals = false;
		}
	}
	return areEquals;
}

DynamicArray & DynamicArray::operator+=(const DynamicArray & dynamicArray)
{
	int oldCapacity = this->capacite;
	this->setCapacite(this->capacite + dynamicArray.capacite);
	unsigned int j = 0;
	for (unsigned int i = oldCapacity; i < this->capacite; i++) {
		this->setElement(i, dynamicArray.getElement(j++));
	}
	return *this;
}

unsigned int DynamicArray::linearSearch(const int& intToFind)
{
	int i = 0;
	int intIndex = -1;
	bool intFound = false;
	while (i < this->capacite && !intFound) {
		if (this->getElement(i) == intToFind){
			intFound = true;
			intIndex = i;
		}
		i++;
	}
	return intIndex;
}

DynamicArray::~DynamicArray(){

}


