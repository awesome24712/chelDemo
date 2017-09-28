//FUNCTION DEMO

//Includes
#include <stdio.h>
#include <iostream>
//


//Here is a small little namespace
//to contain our own math functions
namespace math {
	//Returns the square of the given input
	int sqr(int num) {
		return num*num;
	}
	
	//Performs a power operation
	//There are more efficient ways to do this, but this way is the easiest to understand.
	int pow(int base, int pow) {
		int result = base;
		while (pow > 1) {
			result *= base;
			pow--;
		}
		//for (; pow-- > 1;) result *= base;
		return result;
	}
	
	//Checks if the given number is odd
	bool isOdd(int num) {
		return num & 1;
		//return num % 2 != 0;
	}
}

using namespace std;

//Main - our program starts here
int main() {
	//Get input from user
	int chosenNum;
	printf("Choose your number...\n");
	cin >> chosenNum;
	
	//Output an analysis of the number using our math functions
	// The :: scope operator lets us access members of namespaces, classes, etc.
	printf("The square is \t%i\n", math::sqr(chosenNum));
	printf("The cube is \t%i\n", math::pow(chosenNum, 3));
	printf("The number is \t%s\n", math::isOdd(chosenNum) ? "odd" : "even");
}
