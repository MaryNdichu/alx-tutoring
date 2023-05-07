#include <stdio.h>

int main()
{
	printf("Please enter a character: ");

	char ASCII;
	scanf("%c", &ASCII);
	printf("%i\n", ASCII);

	int Integer;
	printf("Please enter an integer between 0 and 127: ");
	scanf("%i", &Integer);

	printf("%c", Integer);

/**
  * math with ASCII
  */
	char maths = 'A' + '\t';
	printf("A(65)+ \\t(11) = %d\n", maths);
	
	return 0;
}

