#include <stdio.h>
/**
 * main - Prints single digit numbers with comma and space
 * Return: returns 0
 *Uses ASCII codes and putchar command
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
