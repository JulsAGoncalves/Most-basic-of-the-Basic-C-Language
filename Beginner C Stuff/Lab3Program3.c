#include <stdio.h>

int main(){
	// ask user to input quiz grades
	printf("Enter the grade for Quiz 1: ");
	double Quiz1;
	scanf(" %lf", &Quiz1);

	// repeat for Quiz 2 to Quiz 10
	printf("Enter the grade for Quiz 2: ");
	double Quiz2;
	scanf(" %lf", &Quiz2);
	printf("Enter the grade for Quiz 3: ");
	double Quiz3;
	scanf(" %lf", &Quiz3);
	printf("Enter the grade for Quiz 4: ");
	double Quiz4;
	scanf(" %lf", &Quiz4);
	printf("Enter the grade for Quiz 5: ");
	double Quiz5;
	scanf(" %lf", &Quiz5);
	printf("Enter the grade for Quiz 6: ");
	double Quiz6;
	scanf(" %lf", &Quiz6);
	printf("Enter the grade for Quiz 7: ");
	double Quiz7;
	scanf(" %lf", &Quiz7);
	printf("Enter the grade for Quiz 8: ");
	double Quiz8;
	scanf(" %lf", &Quiz8);
	printf("Enter the grade for Quiz 9: ");
	double Quiz9;
	scanf(" %lf", &Quiz9);
	printf("Enter the grade for Quiz 10: ");
	double Quiz10;
	scanf(" %lf", &Quiz10);
	
	// remove highest and lowest quiz grades
	if (Quiz1 <= Quiz10){
		Quiz1 = 0;
	}else if (Quiz10 <= Quiz1){
		Quiz10 = 0;
	}
	
	// calculate the average quiz grade and its weight
	double QuizAverage = (Quiz1 + Quiz2 + Quiz3 + Quiz4 + Quiz5 + Quiz6 + Quiz7 + Quiz8 + Quiz9 + Quiz10)/10;
	double QuizPercent = QuizAverage*0.25;
	
	// ask user to input midterm grade
	printf("Now Enter your Midterm result: ");
	double MidTerm;
	scanf(" %lf", &MidTerm);
	
	// ask user to input final exam grade
	printf("Now Enter your Final Exam result: ");
	double Exam;
	scanf(" %lf", &Exam);
	
	// calculate midterm and final exam grades' weights
	double MidtermPercent, ExamPercent;
	if (MidTerm >= Exam){
		MidtermPercent = MidTerm*0.35;
		ExamPercent = Exam*0.4;
	}else if (MidTerm < Exam){
		MidtermPercent = MidTerm*0.25;
		ExamPercent = Exam*0.5;
	}
	
	// calculate total mark and print it
	double total = QuizPercent+MidtermPercent+ExamPercent;
	printf("Your Total Mark is: %.2lf", total);
	
	return 0;
}
