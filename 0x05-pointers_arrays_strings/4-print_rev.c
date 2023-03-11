#include "main.h"
/**
 * print_rev - the function that prints a string, in reverse,
 * followed by a new line
 * @s: the pointer of chracters of string
 * Return: void
 */
void print_rev(char *s)
{
	if (*s == '\0')
	{
		for (; s; s--)
		{
			_putchar(*(s - 1));
		}
		_putchar('\n');
	}
}
