#include <stdio.h>

int main()
{
	printf("How many cats do you have: ");
	double cats;

	scanf("%lf", &cats);

	printf("%f\n%e\n%g\n", cats, cats, cats);

	return 0;
}

