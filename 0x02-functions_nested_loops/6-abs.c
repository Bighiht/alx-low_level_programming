#include "main.h"
/**
 * _abs - Entry point
 *
 * @n: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
