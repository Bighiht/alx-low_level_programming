#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{	int hex = 48;

	while (hex <= 102)
	{
		puchar(hex);
		if (hex == 57)
			hex += 39;
		hex++;
	}
	putchar('\n');
	return (0);
}
