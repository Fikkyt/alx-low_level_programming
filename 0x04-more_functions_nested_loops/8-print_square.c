#include "main.h"
/**
 * print_square - the entry point
 * Description: the function prints a square, followed by a new line
 * @size: the integer
 * Return: void
*/
void print_square(int size)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			c = b;
			for (b = 0; b < a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
			for (c = 0; c < a; c++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}

