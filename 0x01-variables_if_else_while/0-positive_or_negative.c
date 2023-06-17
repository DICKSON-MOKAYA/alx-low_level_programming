#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a umber is positive, negative or zero.
 *
 * Return: 0 on main success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	eles if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else
	{
		 printf("%d is %s\n", n, "zero");
	}
	return (0);
}
