//HEADER DEMO

#include <stdio.h>
#include <iostream>

//This will include the functions declared in math.h
#include "math.h"

using namespace std;

int main() {
	int chosenNum;
	printf("Choose your number...\n");
	cin >> chosenNum;
	
	printf("The square is \t%i\n", math::sqr(chosenNum));
	printf("The cube is \t%i\n", math::pow(chosenNum, 3));
	printf("The number is \t%s\n", math::isOdd(chosenNum) ? "odd" : "even");
}
