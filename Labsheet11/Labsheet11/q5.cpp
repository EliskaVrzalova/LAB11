// name: eliska vrzalova
// login: c00301768
// date: 12/02/2024
// program description: a double Array is initialized in the main function and passed as an argument to the switchArray() function. 
// This function then physically reverses the contents of the double array. Both original and reversed array is displayed
// any known bugs: none

void switchArray(double t_toReverse);
const int ARRAY_SIZE = 7;
#include <iostream>

int main()
{
	double toReverse[ARRAY_SIZE] = { 5, 15, 65.9, 12.5, 8.65, 3, 9.8 };
	// array displayed beforen its reversed
	for (int count = 0; count < ARRAY_SIZE; count++)
	{
		std::cout << toReverse[count] << " ";
	}

	switchArray(toReverse);

	system("Pause");
	return 0;
}

void switchArray(double t_toReverse[])
{
	int count = 0; // temporary array counter
	int index = 0; // reversed array counter
	// temporary array
	double temporary[ARRAY_SIZE];

	for (count = ARRAY_SIZE - 1; count >= 0; count--)
	{
		temporary[count] = t_toReverse[index];
		index++;
	}

	for (index = 0; index < ARRAY_SIZE; index++)
	{
		t_toReverse[index] = temporary[count];
		std::cout<< t_toReverse[index]<<" ";
		count++;
	}

}
