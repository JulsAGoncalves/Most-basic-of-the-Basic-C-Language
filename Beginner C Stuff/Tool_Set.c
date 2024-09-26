#include <stdio.h>

int main(void){
	
	/* These are the printf and scanf Placeholders
	%c - for char
	%d - for int
	%f - for float
	%lf - "long float" for double
	for scanf use & to refer to the variable name
	to have it cut off at a certain decimal point you can do somethign like
	this: %.2lf for two decimal places
	
	example:
	int position = 1;
	int position2 = 2;
	double position3 = 7.6;
	printf("You are number %d\n", position);
	printf("You are number what?: ");
	scanf("%d", &position);
	printf("That's right! Number: %d, definitely not number: %d, or number: %lf which is: %.2lf in two decimal places", position, position2, position3, position3);
	*/
	
	int position = 1;
	int position2 = 2;
	double position3 = 7.6;
	printf("You are number %d\n", position);
	printf("You are number what?: ");
	scanf("%d", &position);
	printf("That's right! Number: %d, definitely not number: %d, or number: %lf which is: %.2lf in two decimal places", position, position2, position3, position3);
	
	return (0);
}
