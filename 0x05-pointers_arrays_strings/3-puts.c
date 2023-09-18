#include "main.h"

/**
 * _puts - Entry point
 *
 * @str: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
