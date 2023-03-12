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
		for (; s[index] != '\0'; index++)
		{
			_putchar(s[index]);
		}
	}
	else if (len % 2 != 0)
	{
		index = (len - 1) / 2;
		for (; s[index] != '\0'; index++)
		{
			_putchar(s[index]);
		}
	}
	_putchar('\0');
}
