#include "main.h"
/**
 * _print_rev_recursion - the function that prints a string in reverse
 * @s: the string of character pointer
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
}
