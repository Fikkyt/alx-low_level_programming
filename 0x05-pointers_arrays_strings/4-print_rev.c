#include "main.h"
/**
 * print_rev - the function that prints a string, in reverse, followed by a new line
 * @s: the pointer char variable
 * Return: void
 */
void print_rev(char *s)
{
	int i = -1;

	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
