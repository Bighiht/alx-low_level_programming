#include "main.h"

/**
 * print_rev - Entry point
 *
 * @s: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
*/

void print_rev(char *s)
{	int i;

	while (s[i])
		i++;
	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
