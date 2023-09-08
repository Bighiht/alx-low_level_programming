#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{	char low_alp = 'a';
	char upper_alp = 'A';

	while (low_alp <= 'z')
	{	putchar(low_alp);
		low_alp++;
	}
	while (upper_alp <= 'Z')
	{
		putchar(upper_alp);
		upper_alp++;
	}
	putchar('\n');
	return (0);
}
