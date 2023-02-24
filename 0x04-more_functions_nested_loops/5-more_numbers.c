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
	char a, m;

	c = 0;
	for (; c <= 9; c++)
	{
		for (a = 0; a <= 14; a++)
		{
			m = a;
			if (a > 9)
			{
				_putchar('1');
				m = a % 10;
			}
			_putchar('0' + m);
		}
		_putchar('\n');
	}
}
