#include "main.h"
/**
 * print_diagonal - the entry point
 * Description: thw function that draws a diagonal line on the terminal
 * @n: the integer
 * Return: void
*/
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				if (b == 0)
				{
					break;
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
		}
	}
	else
	{
	}
	_putchar('\n');
}
