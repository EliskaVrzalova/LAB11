// name: eliska vrzalova
// login: c00301768
// date: 07/02/2024
// program description: The main function takes 2 number inputs from user. Function triple_it() takes the addresses of two floats
// and triples the value of both floats. Values of both numbers are diplayed before and after function triple_it() is called.
// any known bugs: no validation on user input

#include<iostream>

void triple_it(int& t_num1, int& t_num2);

int main1()
{
	int num1 = 0;
	int num2 = 0;
	// input
	std::cout << "Enter the first number:" << std::endl;
	std::cin >> num1;
	std::cout << "Enter the second number:" << std::endl;
	std::cin >> num2;
	// display answer before function call
	std::cout << "First number value before function call: " << num1 << std::endl;
	std::cout << "Second number value before function call: " << num2 << std::endl;

	triple_it(num1, num2); // function call
	// display answer after function call
	std::cout << "First number value before function call: " << num1 << std::endl;
	std::cout << "Second number value before function call: " << num2 << std::endl;

	system("Pause");
	return 0;
}

void triple_it(int& t_num1, int& t_num2)
// takes the addresses of two floats and triples the value of both floats. 
{
	t_num1 = t_num1 * 3;
	t_num2 = t_num2 * 3;
}
