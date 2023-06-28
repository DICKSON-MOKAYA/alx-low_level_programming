#include "main.h"
/**
 * _islower - checks if the input is lower character shows 1
 * Another cases, shows 0
 * @c: the charcter in ASCII code
 * return: 1 for lowercase charcater. 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n')
}
