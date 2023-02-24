#include "main.h"
/**
 * print_numbers - the entey point
 * Description - the function prints 0 to 9 and insert a new line
 * Return: void
*/
void print_numbers(void);
{
	int m;

	for (m = 48;  m <= 57; m++)
	{
		_putchar(m + '0');
	}
	_putchar('\n');
}
