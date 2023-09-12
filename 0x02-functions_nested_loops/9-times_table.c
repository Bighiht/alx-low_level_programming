#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
*/

void times_table(void)
{	int row, column, multi;
	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		for (column = 1; column <= 9; column++)
		{
			_putchar(',');
			_putchar(' ');
			multi = row * column;
			if (multi <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((multi / 10) + '0');
			}
			_putchar((multi % 10) + '0');
		}
		_putchar('\n');
	}
}
