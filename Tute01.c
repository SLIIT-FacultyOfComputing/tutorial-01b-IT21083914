/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  //declaring variables
  float mark1 , mark2;
	float avg;
	
  //user inputs
	printf("Enter mark1 : ");
	scanf("%f" , &mark1);
	
	printf("Enter mark2 : ");
	scanf("%f" , &mark2);
	
  //calclation
	avg = (mark1 + mark2) / 2;
	
  //print outputs
	printf("The average of the marks : %.2f\n" , avg);
	
  return 0;
}

