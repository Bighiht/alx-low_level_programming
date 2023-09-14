#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{	int x, y;

	for (x = 0; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
