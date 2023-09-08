#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{	int n, i;
	for (n = 0; n <= 8; n++)
	{
		for (i = n + 1; i <= 9; i++)
		{
			putchar(n + '0');
			putchar(i + '0');
			if (n != 8 || i != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
