#include "main.h"
/**
 * print_rev - the function that prints a string, in reverse,
 * followed by a new line
 * @s: the pointer of chracters of string
 * Return: void
 */
void print_rev(char *s)
{
	int length;

	length = -1;
	for (; *s != '\0'; s++)
	{
		length++;
	}
	for (; length >= 0; length--, s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
