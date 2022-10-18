#include "main.h"

/**
 * _islower - checks-for lowercase
 * @c: c is an ascii character
 * Return: returns 1 for lowercase and 0 for the rest
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
