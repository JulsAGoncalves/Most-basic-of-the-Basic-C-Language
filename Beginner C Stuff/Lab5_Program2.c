#include <stdio.h>

void Moon(double speed2, double* Minimum, double* Maximum){
	
	double perigee = 363104;
    double Apogee = 405696;
    
    double temp = perigee/speed2;
    *Minimum = temp;
    temp = Apogee/speed2;
    *Maximum = temp;
    		
}

void Mars(double speed2, double* Minimum, double* Maximum){
	
	double perigee = 54600000;
    double Apogee = 401000000;
    
    double temp = perigee/speed2;
    *Minimum = temp;
    temp = Apogee/speed2;
    *Maximum = temp;
    		
}

void Venus(double speed2, double* Minimum, double* Maximum){
	
	double perigee = 38000000;
    double Apogee = 261000000;
    
    double temp = perigee/speed2;
    *Minimum = temp;
    temp = Apogee/speed2;
    *Maximum = temp;
    		
}

int main(){
	
	double Minimum;
	double Maximum;
	
	int option;
	while (option != 4){
		printf("1. Traveling to the Moon\n");
		printf("2. Traveling to Mars\n");
		printf("3. Traveling to Venus\n");
		printf("4. Exit program.\n");
		scanf(" %d", &option);
		
		if (option == 1){
			printf("What's your traveling speed in km/h?: ");
		double speed;
		scanf(" %lf", &speed);
		Moon (speed, &Minimum, &Maximum);
		
		printf("It would take at least %.1lf hours and", Minimum);
		printf(" max %.1lf hours to get to the moon with", Maximum);
		printf(" that speed!\n\n");
		
		}
		if (option == 2){
			printf("What's your traveling speed in km/h?: ");
		double speed;
		scanf(" %lf", &speed);
		Mars (speed, &Minimum, &Maximum);
		
		printf("It would take at least %.1lf hours and", Minimum);
		printf(" max %.1lf hours to get to the moon with", Maximum);
		printf(" that speed!\n\n");
		
		}
		if (option == 3){
			printf("What's your traveling speed in km/h?: ");
		double speed;
		scanf(" %lf", &speed);
		Venus (speed, &Minimum, &Maximum);
		
		printf("It would take at least %.1lf hours and", Minimum);
		printf(" max %.1lf hours to get to the moon with", Maximum);
		printf(" that speed!\n\n");
		
		}
		if (option < 1 || option > 4){
			printf("Enter an appropriate option");
		}
		
		
	}
	
	return 0;
}
