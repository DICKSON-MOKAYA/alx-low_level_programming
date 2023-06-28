#include "main.h"

/**
 * _isupper - a function to check for uppercase letters
 * @c: letter
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
