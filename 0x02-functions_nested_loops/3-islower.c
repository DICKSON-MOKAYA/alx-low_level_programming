#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: the character to be checked
 * return: returns 1 for lowercase charcater or 0 for anything else
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
}
