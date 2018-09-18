#pragma once

class DynamicArray
{
public:
	DynamicArray();
	DynamicArray(unsigned int capacite);
	DynamicArray(const DynamicArray & dynamicArray);
	int getCapacite();
	void setCapacite(unsigned int newCapacite);
	int getElement(unsigned int index) const;
	void setElement(unsigned int index, int value);
	DynamicArray& operator=(const DynamicArray& dynamicArray);
	bool operator==(const DynamicArray & dynamicArray) const;
	~DynamicArray();
	DynamicArray& operator +=(const DynamicArray& dynamicArray);
	
private:
	const int DEFAULT_CAPACITY = 100;
	unsigned int capacite = DEFAULT_CAPACITY;
	int* tabElements;
};


