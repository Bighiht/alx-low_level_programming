#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{	int n, i, j;
	for (n = 0; n <= 7; n++)
	{
		for (i = n + 1; i <= 8; i++)
		{
			for (j = i + 1; j <= 9; j++)
			{
			putchar(n + '0');
			putchar(i + '0');
			putchar(j + '0');
			if (n != 7 || i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
