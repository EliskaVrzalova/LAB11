// name: eliska vrzalova
// login: c00301768
// date: 07/02/2024
// program description: The function main has its local array of 5 doubles with values assigned in it. The size of the array is declared
// as a global variable. The function calAverage() accepts the array as an argument, calculates the average of it elements and returns it.
// any known bugs: no validation on user input

#include <iostream>

double calAverage(double t_averageArray[]);
const int ARRAY_SIZE = 5; // size of the array declared as global constant variable

int main4()
{
	double averageArray[ARRAY_SIZE] = { 8, 15, 9, 3, 17 };
	double average = 0.0;

	average = calAverage(averageArray); // function call
	std::cout << "The average of elements in the array: " << average << std::endl;

	system("pause");
	return 0;
}

double calAverage(double t_averageArray[])
// calculate the average of the elements of the double array that is passed as an argument to it. The function should return the average. 
{
	double average = 0.0;
	double sum = 0.0;
	for (int count = 0; count < ARRAY_SIZE; count++)
	{
		sum = sum + t_averageArray[count];
	} // end for
	average = sum / ARRAY_SIZE; // average calculation
	return average;
}
