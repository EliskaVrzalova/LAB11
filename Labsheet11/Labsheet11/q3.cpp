// name: eliska vrzalova
// login: c00301768
// date: 07/02/2024
// program description: Function main passes its local array and its size as an argument to the function findLowest
// This function should return the lowest element. 

#include <iostream>

int findLowest(int t_array[], int t_MAX_ITEMS);

int main3()
{
	const int MAX_ITEMS = 6;
	int array[MAX_ITEMS] = { 9, 3, 4, 8, 5, 12 };
	
	int lowestElement = 0;

	lowestElement = findLowest(array, MAX_ITEMS); // function call
	std::cout << "The lowest element in the array is: " << lowestElement<< std::endl; // answer

	system("pause");
	return 0;
}

int findLowest(int t_array[], int t_MAX_ITEMS)
// finds the lowest element in the integer array that is passed as an argument to it. 
{
	int count = 1;
	int lowestElement = t_array[0];
	for (; count < t_MAX_ITEMS; count++)
	{
		if (t_array[count] < lowestElement)
		{
			lowestElement = t_array[count];
		} // end if
	}
	return lowestElement;
}
