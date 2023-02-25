#include "main.h"
/**
 * print_triangle - the entry point
 * Description: a function that prints a triangle followed by a new line
 * @size: the integer
 * Return: void
*/
void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (c = 1; c < (size - a); c++)
			{
				_putchar(' ');
			}
			for (b = 0; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
