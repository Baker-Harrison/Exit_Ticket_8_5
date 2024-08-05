#include <iostream>
#include "include/EvenEater.h"
#include "include/OddFoodException.h"


int getNumber();
void eaterTester();
void exceptionTester();

int main() {


	exceptionTester();


	return 0;
}


int getNumber()
{
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;

	return num;
}

void eaterTester()
{
	EvenEater eater;
	int number;

	number = getNumber();
	std::cout << eater.eat(number) << std::endl;
}

void exceptionTester()
{
	try {
		eaterTester();
	}
	catch (OddFoodException &e) {
		std::cout << "Odd number. Try again!" << std::endl;
		exceptionTester();
	}

	return;
}
