#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
