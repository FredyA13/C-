//Write a simple calculator that adds two numbers together. Your program should allow the user to enter two numbers and then print out the answer of the addition to the console. 

#include <iostream>

int main() {
	int a, b;
	// TODO: Ask the user to enter two numbers
	std::cout << "Simple Calculator 2 numbers prompting" << std::endl;
	std::cout << "Give me the first number: ";
	std::cin >> a;
	std::cout << "Give me the second number: ";
	std::cin >> b;

	// TODO: Assign the input to a and b


	// TODO: Output the answer
	std::cout << "The summ of: " << a << " and " << b << " is: " << a+b << std::endl;
	return 0;
}