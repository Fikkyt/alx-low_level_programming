#include "main.h"
/**
 * print_most_numbers - the entey point
 * Description - the function prints 0 to 9 and insert a new line
 * Return: void
*/
void print_most_numbers(void)
{
	char m = 0;

	for (; m <= 9; m++)
	{
		if (m == 2 || m == 4)
		{
			continue;
		}
		else
		{
			_putchar(m + '0');
		}
	}
	_putchar('\n');
}
