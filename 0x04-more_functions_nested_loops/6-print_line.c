#include "main.h"
/**
 * print_line - the entry point
 * Description: the function that draws a straight line in the terminal
 * @n - the integer
 * Return: 0
*/
void print_line(int n)
{
	char _;
 
	if (n > 0)
	{
		for (_ = 0; _ <= n ; _++)
		{
			_putchar(_);
		}
	}
	else
	{
	}
	_putchar('\n');
}
