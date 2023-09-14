#include "main.h"

/**
 * print_square - Entry point
 *
 * @siza: fafa
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{	int row, column;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < k; column++)
			_putchar('#');
		_putchar('\n');
	}
}
