#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
	if (n != 9)
		{
		putchar(',');
		putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
