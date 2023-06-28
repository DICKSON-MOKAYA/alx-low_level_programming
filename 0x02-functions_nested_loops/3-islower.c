#include "main.h"
/**
 * islower - shows 1 if  the input is a lowercase character
 * Another cases, shows 
 * 0
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
