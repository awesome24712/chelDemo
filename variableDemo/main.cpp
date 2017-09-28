//VARIABLE DEMO
//In this case, stdio stands for standard input-output
#include <stdio.h>

//A string is a list of characters.
#include <string>

//This tells the compiler to let us use everything under the std namespace
//without specifying every time.
using namespace std;

//This is main - our program starts here
int main() {
	
	//format is
	//type varName = value;
	
	bool someCondition = false;
	int someNumber = 3;
	float somePreciseNumber = 3.1415937192084691283;
	char someCharacter = '5';
	string someText = "Hello World!";
	
	printf("%i \n", someCondition);
	printf("%i \n", someNumber);
	printf("%f \n", somePreciseNumber);
	printf("%c \n", someCharacter);
	printf("%s \n", someText.c_str());
}
