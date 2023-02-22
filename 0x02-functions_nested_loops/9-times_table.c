#include "main.h"
/**
 * times_table - the entry point
 * Description: the function prints multiplication table 9
 * @void: placeholder
 * Return: void
 */
void times_table(void)
{
	int m, n, k, tens, unit;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			k = m * n;
			tens = k / 10;
			unit = k % 10;
			if (n == 0)
			{
				_putchar('0');
			}
			else if (k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(unit + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(unit + '0');
			}
		}
		_putchar('\n');
	}
}
