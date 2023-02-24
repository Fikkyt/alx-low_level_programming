#include "main.h"
/**
 * print_numbers - the entey point
 * Description - the function prints 0 to 9 and insert a new line
 * Return: void
*/
void print_numbers(void);
{
	char m;

	for (m = 0;  m <= 9; m++)
	{
		_putchar(m + '0');
	}
	_putchar('\n');
}
