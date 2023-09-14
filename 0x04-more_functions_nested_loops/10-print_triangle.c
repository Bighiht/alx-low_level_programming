#include "main.h"

/**
 * print_triangle - Entry point
 *
 * @size: fwf
 *
 * Return: Always 0 (Success)
*/

void print_triangle(int size)
{	int row, column;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1 ; column <= size; column++)
			{
				if ((row + column) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
