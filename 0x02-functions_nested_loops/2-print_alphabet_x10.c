#include "main.h"
/**
* print_alphabets_x10 - prints the alphebets 10 times and include a new line
* Return: void
*/
void print_alphabet_x10(void);
{
	char m;
	int n;

	for (n = '0'; n <= 9; n++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
	}
	_putchar('\n');
}
