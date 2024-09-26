#include <stdio.h>

// This function takes two pointers to doubles and swaps their values if the first one is greater than the second one.
void comparison(double *smaller, double *larger){
	
	// Define a variable to hold the value of the smaller number temporarily during the swap.
	double placeholdervalue;
	
	// If the first number is greater than the second number, swap their values.
	if (*smaller > *larger){
		placeholdervalue = *smaller;
		*smaller = *larger;
		*larger = placeholdervalue;
	}
	
}

int main() {
	
	// Define three variables to hold the user's input.
	double number1;
	double number2;
	double number3;
	
	// Prompt the user to enter three numbers.
	printf("Enter a number: ");
	scanf(" %lf", &number1);
	printf("Now enter the second number: ");
	scanf(" %lf", &number2);
	printf("Now the final number: ");
	scanf(" %lf", &number3);
	
	// Call the comparison function three times to sort the three numbers.
	comparison(&number1, &number2);
	comparison(&number1, &number3);
	comparison(&number2, &number3);
	
	// Print the sorted numbers.
	printf("The Smallest Number is: %.lf ", number1);
	printf("The Middle Number is: %.lf ", number2);
	printf("The Largest Number is: %.lf ", number3);
	
	// Return 0 to indicate successful completion of the program.
	return 0;
}
