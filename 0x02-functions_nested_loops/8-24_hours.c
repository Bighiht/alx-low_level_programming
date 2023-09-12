#include "main.h"

/**
 * jack_bauer - Entry point
 * Return: Always 0 (Success)
*/

void jack_bauer(void)
{	int hours, minuts;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minuts = 0; minuts <= 59; minuts++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minuts / 10) + '0');
			_putchar((minuts % 10) + '0');
			_putchar('\n');
		}
	}
}
