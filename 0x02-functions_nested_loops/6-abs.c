#include "main.h"
/**
 * _abs - the entry point
 * Description: the function prints absolute values
 * @int: data type integer as input
 * @n: the placeholder
 * Return: 0
 */
int _abs(int n)
{
	if (n > 0)
	{
		_putchar(n);
	}
	else if (n == 0)
	{
		_putchar(n);
	}
	else
	{
		_putchar(-n);
	}
	return (0);
}
