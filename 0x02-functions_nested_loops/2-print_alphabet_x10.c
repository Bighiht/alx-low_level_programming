#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{	int i, alp;

	for (i = 0; i < 10; i++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
