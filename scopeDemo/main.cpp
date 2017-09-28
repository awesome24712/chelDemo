//SCOPE DEMO
#include <stdio.h>
#include <string>

using namespace std;

int g_iSomeGlobalInt = 5;

int main(int argc, char **argv) {
	{
		//Everything inside here cannot be seen from outside
		int someInt = 42;
	}
	printf("%i", someInt);
	printf("%i", g_iSomeGlobalInt);
	
	
	//Use scope intelligently - this better style helps you later on.
	bool bSomeCondition = false;
	if (bSomeCondition) {
		printf("First message!");
	} else {
		printf("Second message!");
	}
	
	
	//This is a better way
	string message;
	if (bSomeCondition) {
		message = "First message!";
	} else {
		message = "Second message!";
	}
	printf("%s\n", message.c_str());
}
