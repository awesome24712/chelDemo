//WHILE DEMO
#include <stdio.h>

int main()
{
	//a while loop will do its contents over and over
	//until the condition is false
	int i = 0;
	while (i < 10) {
		printf("%i\n", i*i);
		i++;
	}
	
	//complex nested loops
	i = 0;
	int j = 0;
	while (i < 10) {
		j = i;
		while (j < 10) {
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}
