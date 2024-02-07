// name: eliska vrzalova
// login: c00301768
// date: 07/02/2024
// program description: Function main accepts number input from user. Function makeNegative() takes address
// of one integer number and changes the number to a negative number.
// any known bugs: no validation on user input

#include <iostream>

void makeNegative(int& t_number);

int main2()
{
	int number = 0;
	// input
	std::cout << "Enter a number: " << std::endl;
	std::cin >> number;
	// display the value of number before function call
	std::cout << "The number value before function call:" << number << std::endl;

	makeNegative(number); // function call
	// display the value of number after function call
	std::cout << "The number value before function call:" << number << std::endl;

	system("pause");
	return 0;
}

void makeNegative(int& t_number)
// takes the address of one integer number and changes the number to a negative number. 
// If the number is already negative, your function does not need to change the number. 
{
	if (t_number > 0)
	{
		t_number = -t_number;
	}
}
