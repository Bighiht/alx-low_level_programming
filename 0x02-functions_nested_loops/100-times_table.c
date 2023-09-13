#include "main.h"

/**
 * print_times_table - Entry point
 *
 * @n: aad
 *
 * Return: Always 0 (Success)
*/

void print_times_table(int n)
{	int row, column, multi;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; ++row)
		{
			_putchar('0');
			for (column = 1; column <= n; ++column)
			{
				_putchar(',');
				_putchar(' ');
				multi = row * column;
				if (multi <= 9)
					_putchar(' ');
				if (multi <= 99)
					_putchar(' ');
				if (multi >= 100)
				{
					_putchar((multi / 100) + '0');
					_putchar((multi / 10) % 10 + '0');
				}
				else if (multi <= 99 && multi >= 10)
					_putchar((multi / 10) + '0');
				_putchar((multi % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
