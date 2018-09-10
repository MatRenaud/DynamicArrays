#pragma once

class DynamicArray
{
public:
	DynamicArray();
	DynamicArray(int capacite);
	int getCapacite();
	int setCapacite();
	int getElement(int i);
	int setElement();
	
private:
	const int DEFAULT_CAPACITY = 100;
	int capacite = DEFAULT_CAPACITY;
	int* tabElements;
};


