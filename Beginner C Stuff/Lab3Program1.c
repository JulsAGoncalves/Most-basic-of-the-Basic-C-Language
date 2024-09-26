#include <stdio.h>
#include <math.h>

// This function calculates the maximum heart rate based on age and gender.
double MaximumHeartRate(double age2, char gender2){
	double M_HR;
	if (gender2 == 'm' || gender2 == 'M'){
		M_HR = 203.7/(1+(exp(0.033*(age2-104.3))));
	}
	if (gender2 == 'f' || gender2 == 'F'){
		M_HR = 190.2/(1+(exp(0.0453*(age2-107.5))));
	}
	return M_HR;
}

int main() {

  // Prompt the user to input their age.
  printf("Please enter your age as a number: ");
  double age;
  scanf(" %lf", &age);

  // Prompt the user to input their gender and validate the input.
  printf("Please enter your gender in one letter: ");
  char gender = ' ';
  scanf(" %c", &gender);
  while (gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f') {
    printf("Enter a valid gender: ");
    scanf(" %c", &gender);
  }
  
  // Prompt the user to input their resting heart rate.
  printf("Please enter your resting heart rate: ");
  double RHR;
  scanf(" %lf", &RHR);
  
  // Prompt the user to input their fitness level and validate the input.
  printf("Please enter your fitness level in one letter; low 'L', medium 'M', and high 'H': ");
  char fitness;
  scanf(" %c", &fitness);
  while (fitness != 'l' && fitness != 'L' && fitness != 'm' && fitness != 'M' && fitness != 'h' && fitness != 'H'){
	  printf("Enter a valid fitness level: ");
	  scanf(" %c", &fitness);
  }
  
  // Assign a fitness level multiplier based on the user's input.
  double fitnessLevel;
  switch (fitness){
	  case 'l':
	  fitnessLevel = 0.55;
	  break;
	  case 'L':
	  fitnessLevel = 0.55;
	  break;
	  case 'm':
	  fitnessLevel = 0.65;
	  break;
	  case 'M':
	  fitnessLevel = 0.65;
	  break;
	  case 'h':
	  fitnessLevel = 0.8;
	  break;
	  case 'H':
	  fitnessLevel = 0.8;
	  break;
  }
  
  // Calculate the maximum heart rate based on age and gender.
  double MHR = MaximumHeartRate (age, gender);
  
  // Calculate and output the training heart rate.
  double THR = (MHR-RHR)*fitnessLevel+RHR;
  printf("The Training Heart Rate is: %.0lf", THR);
  
  return 0;
}
