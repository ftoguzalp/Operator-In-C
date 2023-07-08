#include <iostream>
#include <string>

int main() {

	int x = 2;
	int y = 5;
	char calculation = ' + ';
	std::cout << "Write first number." << std::endl;
	std::cin >> x;
	std::cout << "Write second number." << std::endl;
	std::cin >> y;
	std::cout << "Write a operator." << std::endl;
	std::cin >> calculation;

	if (calculation == '+') {
		std::cout << x + y;


	}
	else if (calculation == '-') {
		std::cout << x - y;



	}
	else if (calculation == '*') {
		std::cout << x * y;



	}
	else if (calculation == '/') {
		std::cout << x / y;



	}
	else if (calculation=='%')
	{
		std::cout << x % y;



	}
	else{
		std::cout << "Incorrect calculation.";

	}

}