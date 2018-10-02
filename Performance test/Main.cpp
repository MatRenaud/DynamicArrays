#include "../DynamicArray/dynamicArray.h"
#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
	const int arrayCapacity =1000;
	DynamicArray array(arrayCapacity);
	for (int i = 0; i < arrayCapacity; i++) {
		array.setElement(i, arrayCapacity - i);
	}
	int debut = GetTickCount();

	//--------------------------------------Iterative--------------------------------//

	//array.bubbleSort();

	//--------------------------------------Recursive--------------------------------//

	array.bubbleSort(arrayCapacity);

	int fin = GetTickCount();

	cout << "Debut : " << debut << endl;
	cout << "Fin : " << fin << endl;
	cout << "Duree : " << fin - debut << " ms" << endl;

	system("pause");
	return 0;
}

//Honnetement manque de temps avec la mi-session et j'ai déja mis beaucoup trop d'heure sur cet exercice
//Pt-le couper en deux???
