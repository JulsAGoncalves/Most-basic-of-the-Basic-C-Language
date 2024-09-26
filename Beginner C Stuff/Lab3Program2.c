#include <stdio.h>

int main(){
	
	// prompt user to enter weight in kg
	printf("Please enter your weight in kilograms: ");
	double weight;
	// read in weight and store it in the variable "weight"
	scanf(" %lf", &weight);
	
	// prompt user to enter height in metres
	printf("Now, Please enter your height in metres: ");
	double height;
	// read in height and store it in the variable "height"
	scanf(" %lf", &height);
	
	// calculate the BMI using the weight and height
	double BMI = weight/(height*height);
	
	// classify the BMI into one of four categories
	char class;
	if (BMI < 18.5){
		class = 'A'; // underweight
	}
	if (BMI >= 18.5 || BMI <= 24.9){
		class = 'B'; // normal weight
	}
	if (BMI >= 25 || BMI <= 29.9){
		class = 'C'; // overweight
	}
	if (BMI > 30){
		class = 'D'; // obese
	}
	
	// print the BMI category along with the calculated BMI
	switch (class){
		case 'A':
		printf("Your BMI value is %.1lf, which classifies you as Underweight", BMI);
		break;
		case 'B':
		printf("Your BMI value is %.1lf, which classifies you as Normal", BMI);
		break;
		case 'C':
		printf("Your BMI value is %.1lf, which classifies you as Overweight", BMI);
		break;
		case 'D':
		printf("Your BMI value is %.1lf, which classifies you as Obese", BMI);
		break;
	}
	
	return 0;
}
