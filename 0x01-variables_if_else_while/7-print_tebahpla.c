#include <stdio.h>
/**
 * main - Prints lowercase alphabets in reverse
 * Return: returns 0
 * Using putchar and th corresponding ASCII codes
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
