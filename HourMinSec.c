//
//Liam Pang-Naylor
//CS50 Section 1240
//6/22/2020
//Assignment 3 example program printing a sentence
//
//Requires seconds as an integer input.
//Outputs print statement giving that value of seconds in terms of hours, minutes,
//and seconds.
//

#include <stdio.h>

int main() {
	
	//Declare needed variables.
	int h;
	int m;
	int s;
	
	//Request input for s.
	printf("Enter the number of seconds: ");
	scanf_s("%d",&s);

	//Arithmetic to determine hours, the minutes by getting total minutes and then 
	//subtracting the minutes included in hours. Repeat process for seconds but
	//include minutes and hours in the subtraction.
	h = s / 3600;
	m = s / 60 - h * 60;
	s = s - m * 60 - h * 3600;

	//Print result.
	printf("%d hour(s), %d minute(s), %d second(s).", h, m, s);
	return 0;

}