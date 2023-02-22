#include "main.h"
/**
 * times_table - the entry point
 * Description: the function prints multiplication table 9
 * @void: placeholder
 * Return: void
 */
void times_table(void)
{
	int m, n, k;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			k = m * n;
			_putchar(k);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
