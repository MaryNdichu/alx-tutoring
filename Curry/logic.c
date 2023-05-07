#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool cakeIsGood;
	int temp;

	if(cakeIsGood)
	{
		printf("Do you like cake? If yes type 1 if no type 0\n");
		scanf("%d", &temp);

		if(cakeIsGood)
		cakeIsGood = temp;

		if(temp < 0)
			{
				printf("Please enter 0 or 1: ");
				scanf("%d", &temp);
			}
		if(temp > 1)
			{
				printf("Please enter 0 or 1: ");
				scanf("%d", &temp);
			}
		if(temp == 0)
			{
				printf("Better luck next time\n");
			}

		else
			{
				printf("Welcome to the bakery's app\n");
			}

	return 0;
	}
}

