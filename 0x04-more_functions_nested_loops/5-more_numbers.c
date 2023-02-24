#include "main.h"
/**
 * more_numbers - the entry point
 * Description: the function that prints 10 the numbers from 0 to 14
 *followed by a new line.
 * Return: void
*/
void more_numbers(void)
{
	int c;
	char a;

	c = 0;
	for (; c <= 10; c++)
	{
		for (a = 0; a <= 14; a++)
		{
		_putchar(a + '0');
		}
	_putchar('\n');
	}
	_putchar('\n')
}
