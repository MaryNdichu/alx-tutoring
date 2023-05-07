#include <stdio.h>
#include <stdbool.h>

int main()

{
	bool Miya = true;

	printf("Is Miya fat? (1 is yes 0 is no)? %d\n", Miya);
	int input;

	scanf("%d", &input);
	Miya = (bool)input;

	printf("%d", Miya+11);

	return 0;
}
