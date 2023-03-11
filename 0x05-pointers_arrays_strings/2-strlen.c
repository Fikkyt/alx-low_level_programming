#include "main.h"
/**
 * _strlen - the function that returns the length of a string
 * @s: the pointer to characters of string
 * Return: void
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] < '\0'; i++)
	{
		;
	}
	_putchar(i);
	return (0);
}
