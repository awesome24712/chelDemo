//TABBING DEMO

#include <stdio.h>

//Input and output are "streams" of information that we have include.
#include <iostream>

			#include <string>
;;;;;
using 	namespace std;
;;;;
;;;;;;;;;;;;;
int 
main
				()	{ //get the player's age and remember it in a variable
	int playerAge; printf("How old are you? ");
				cin >> playerAge;
	
	//this is the message we'll print out later
	string message;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	if (playerAge < 5) {
	message = "You're very young.";
			} else if (playerAge < 10) { message = "Do kids your age still learn cursive?"; } else if (playerAge < 15) {
					message = "You are almost fully-grown!";		} else if (playerAge < 19) {
		message = "Are you ready for college or trade school?";
		} else if (playerAge < 60) 
	{
				message = "Are you saving for retirement?"; } else {
		message = "It's time to be adventurous!";
}
	
							//Finaly we print out the message
	;;;;;;;;;;;;;;;;;;; printf("%s\n", message.c_str());
		}
