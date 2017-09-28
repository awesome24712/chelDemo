//OUTPUT DEMO
//Including something gives us access to things inside it
//In this case, stdio stands for standard input-output
#include <stdio.h>
#include <string>

using namespace std;

//This is main - our program starts here
int main() {
	
	//Printing integers
	int iMagicNumber = 2048;
	printf("%d \n", 	iMagicNumber);
	printf("%10d \n",	iMagicNumber);
	printf("%10d \n",	iMagicNumber * 128);
	
	//Printing floating-point numbers
	float flMagicNumber = iMagicNumber;
	printf("%f \n",			flMagicNumber);
	printf("%.2f \n",		flMagicNumber);
	printf("%10.2f \n",		flMagicNumber);
	printf("%10.3f \n",		flMagicNumber);
	
	//Print strings
	string greeting = "Hello";
	string world = "World";
	printf("%s %s!\n", greeting, world);
	
	/**
	 * Use a \ to get special characters
	 * 
	 * \t -> tab character
	 * \n -> new line character
	 * \' -> apostrophe
	 * \" -> quote character
	 * \\ -> actual forward slash character
	 */
	 printf("\\\\ \t\"%s\t\n %s!\"\n", greeting.c_str(), world.c_str());
}
