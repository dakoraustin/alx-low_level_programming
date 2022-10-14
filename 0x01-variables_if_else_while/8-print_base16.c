#include <stdio.h>
/**
 * main - Prints hexadecimal digits in lowercase
 * Return: returns 0
 * Uses putchar with ASCII codes and FOR loops
 */

int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
