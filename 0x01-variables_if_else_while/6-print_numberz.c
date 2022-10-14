#include <stdio.h>
/**
 * main - Prints single digit denary numbers with putchar
 * Return: returns 0
 * ASCII numbers representing the digts were used
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
