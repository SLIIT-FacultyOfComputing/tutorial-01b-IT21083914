/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

//function prototypes
int minimum(int num1 , int num2);
int maximum(int num1 , int num2);
int multiply(int num1 , int num2);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
int minimum(int num1 , int num2)
{
	int min; //declaring variable.
	
	if(num1 < num2) //check whether the number1 less than number2.
	{
		min = num1;
	}
	else
	{
		min = num2;
	}//end if
	
	return min;
}
int maximum(int num1 , int num2)
{
	int max; //declaring variable.
	
	if(num1 > num2) //check whether the number1 grather than number2.
	{
		max = num1;
	}
	else
	{
		max = num2;
	}//end if
	
	return max;
}
int multiply(int num1 , int num2)
{
	return num1 * num2;
}