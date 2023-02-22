#include "main.h"
/**
 * print_sign - the entry point
 * Description: the function prints positive, zero or negative
 * @n: the integer that the function receives
 * Return: 1, 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == -1)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
