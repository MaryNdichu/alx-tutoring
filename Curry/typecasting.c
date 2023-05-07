#include <stdio.h>

int main()
{
	/** implicit type conversions */
	/* parameters- var storing values passed to the functions */
	/* float can fit inside a double */
	/* float is a smaller data type than double */
	

	float x = 46.7;

	printf("%f", x);
	/* x is promoted; value of x is stored as double */

	int cakes = 9;
	int people = 4;
	printf("%d", cakes / (double) people); /* typecasting does not affect original var */
