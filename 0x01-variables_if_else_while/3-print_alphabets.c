#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int lowercase = 'a';
	int uppercase = 'A';

	while (lowercase <= 'a')
	{
	putchar(lowercase);
	lowercase += 1;
	}
	while (uppercase <= 'A')
	{
	putchar(uppercase);
	uppercase += 1;
	}
	putchar('\n');
	return (0);
}
