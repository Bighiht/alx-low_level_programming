#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @n: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
*/

int print_last_digit(int n)
{	int last;

	if (n < 0)
	{
		last = -1 * (n % 10);
	}
	else
	{
		last = n % 10;
	}
	_putchar(last + '0');
	return (last);
}
