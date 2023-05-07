/* Create a program that takes two doubles as inputs */
/* Calculates the hypotenuse of a right triangle */
/* and outputs it */

#include <stdio.h>
#include <math.h> /* allows me to use squareroot */

int main()
{
	double a;
	double b;

	printf("This app will calculate the hypotenuse of a triangle\n");
	printf("Enter the first value: ");
	scanf("%lf", &a);

	while (a < 0)
	{
		printf("Please enter a positive value: ");
		scanf("%lf", &a);
	}

	printf("Now enter the second value: ");
	scanf("%lf", &b);

	while (b < 0)
	{
		printf("Please enter a positive value: ");
		scanf("%lf", &b);
	}

	double c = sqrt((a*a) + (b*b));

	printf("The hypotenuse is %f\n", c);
	return 0;
}

