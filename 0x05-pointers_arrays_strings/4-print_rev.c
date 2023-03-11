#include "main.h"
/**
 * print_rev - the function that prints a string, in reverse,
 * followed by a new line
 * @s: the pointer of chracters of string
 * Return: void
 */
void print_rev(char *s)
{
	const char MAX = '\0';
	char *ptr;

	ptr = &(MAX - 1);
	for (; ptr >= s; ptr--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
