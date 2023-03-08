#include "main.h"
/**
 * _puts_recursion - the function that prints a string, followed by a new line
 * @s: the pointer to string of characters
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s == '\0')
	{
		return ('\0');
	}
	_putchar(*s);
	s++;
	_puts_recursion(*s);
}

