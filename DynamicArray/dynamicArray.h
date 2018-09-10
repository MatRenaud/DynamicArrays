#pragma once

class DynamicArray
{
public:
	DynamicArray();
	DynamicArray(unsigned int capacite);
	int getCapacite();
	void setCapacite(unsigned int newCapacite);
	int getElement(unsigned int index);
	void setElement(unsigned int index, int value);
	
private:
	const int DEFAULT_CAPACITY = 100;
	unsigned int capacite = DEFAULT_CAPACITY;
	int* tabElements;
};


