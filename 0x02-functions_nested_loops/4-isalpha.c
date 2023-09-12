#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
*/

int _isalpha(int c)
{
	if (c >= 67 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
