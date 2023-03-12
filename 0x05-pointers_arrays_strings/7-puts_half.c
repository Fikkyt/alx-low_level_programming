#include "main.h"
/**
 * puts_half - the function that prints half of
 * a string, followed by a new line
 * @str: the pointer of characters of string
 * Return: void
 */
void puts_half(char *str)
{
	int len, index;

	for (len = 0; str[len] != '\0'; len++)
		;
	if (len % 2 == 0)
	{
		index = len / 2;
		for (; str[index] != '\0'; index++)
		{
			_putchar(str[index]);
		}
		_putchar('\n');
	}
}
