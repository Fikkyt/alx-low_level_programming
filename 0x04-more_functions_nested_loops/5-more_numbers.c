#include "main.h"
/**
 * more_numbers - the entry point
 * Description: the function that prints 10 the numbers from 0 to 14
 *followed by a new line.
 * Return: void
*/
void more_numbers(void)
{
	char c, product;

	c = 0;
	for (; c <= 14; c++)
	{
		product = c * 10;
		_putchar(product + '0');
	}
	_putchar('\n')
}
