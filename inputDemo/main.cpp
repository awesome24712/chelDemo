//INPUT DEMO

//Including something gives us access to things inside it
//In this case, stdio stands for standard input-output
#include <stdio.h>

//Input and output are "streams" of information that we have to include.
//cin is one of those input streams
#include <iostream>

using namespace std;

//This is main - our program starts here
int main() {
	//Get user's name
	printf("What is your name?\n");
	string name;
	getline(cin, name); //The getline(cin, someString) combo is used to get string input
						//The program waits here until the user presses enter
	
	printf("Hello %s ! What is your credit card number?\n", name.c_str());
	int creditCardNumber;
	cin >> creditCardNumber; 	//Program waits here until user enters number
								//which is then put into creditCardNumber.
								//the >> operator used here is for number input.
	
	printf("Thanks for your contribution!");
}
