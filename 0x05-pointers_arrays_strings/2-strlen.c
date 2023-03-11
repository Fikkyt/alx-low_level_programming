#include "main.h"
/**
 * _strlen - the function that returns the length of a string
 * @s: the pointer to characters of string
 * Return: void
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	for (; *s != '\0'; s++)
	{
		len++;
	}
	_putchar(len);
	return (0);
}
