#include "main.h"

/**
 * _isdigit - a function that checks numbers btn 0 and 9
 * @c: number
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

