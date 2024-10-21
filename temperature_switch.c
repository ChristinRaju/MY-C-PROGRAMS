//Write a C program that converts temperatures between Celsius and Fahrenheit using switch statement.

#include<stdio.h>
int main()
{
	
	double c, f, result;
	
	int choice;
	printf("Select your choice: \n");
	printf("1. Celcius to Fahrenheit\n");
	printf("2. Fahrenheit to Celcius\n");
	
	printf("Enter your choice: ");
	scanf("%d", &choice);

    /* 
     * By using .0, you ensure that the division is calculated 
     * correctly for temperature conversions.
     */ 

	switch(choice)
	{
		case 1:
			printf("Enter the temperature in Celcius: ");
			scanf("%lf", &c);                                           
			result = (9.0 / 5.0) * c + 32; //to calcualte Fahrenheit     
            printf("The temperature in Fahrenheit is: %lf\n", result);    
			break;
		case 2:
			printf("Enter the temperature in Fahrenheit: ");
			scanf("%lf", &f);
			result = (5.0 / 9.0) * (f - 32); //to calcualte Celcius.     
            printf("The temperature in Celsius is: %lf\n", result);
            break;

		
		default: 
			printf("Invalid case!\n"); // If the user inputs anything other than 1 or 2
	}

	return 0;
}