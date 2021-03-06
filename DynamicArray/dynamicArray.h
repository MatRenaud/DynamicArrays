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
	int * getTabElements() const;
	void setElement(unsigned int index, int value);
	DynamicArray& operator=(const DynamicArray& dynamicArray);
	bool operator==(const DynamicArray & dynamicArray) const;
	DynamicArray& operator +=(const DynamicArray& dynamicArray);
	int linearSearch(const int& intToFind);
	int dichotomicSearch(const int& intTofind);
	//void bubbleSort();
	void bubbleSort(int length);
	void quickSort(const int & first, const int & last);
	int partitionate(int * tabElements, const int & first, const int & last);
	~DynamicArray();
	
private:
	const int DEFAULT_CAPACITY = 100;
	unsigned int capacite = DEFAULT_CAPACITY;
	int* tabElements;
};


