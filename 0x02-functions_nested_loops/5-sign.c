#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: A C program that prints with printf function.
 *
 * Return: 1 Al -1  ways 0 (Success)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
