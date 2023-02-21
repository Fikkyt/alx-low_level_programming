#include "main.h"
/**
* print_alphabet_x10 - entry point
* Description: a function that prints the alphebets ten times
* and also includes a new line
* Return: void
*/
void print_alphabet_x10(void)
{
	int m,  n;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
