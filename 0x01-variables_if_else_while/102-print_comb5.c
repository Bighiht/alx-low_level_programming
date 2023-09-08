#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{	int n, i, j, k;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 8; i++)
		{
			for (j = 0; j <= 9; j++)
			{
				for (k = 1; k <= 9; k++)
				{
			putchar(n + '0');
			putchar(i + '0');
			putchar(' ');
			putchar(j + '0');
			putchar(k + '0');
			if (n != 9 || i != 8 || j != 9 || k != 9)
			{
				putchar(',');
				putchar(' ');
			}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
