#include "main.h"

/**
 * print_square - Entry point
 *
 * @size: fafa
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{	int row, column;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
