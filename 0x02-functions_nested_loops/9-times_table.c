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
			if (k < 10)
			{
				_putchar(unit + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(tens + '0');
				_putchar(unit + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
