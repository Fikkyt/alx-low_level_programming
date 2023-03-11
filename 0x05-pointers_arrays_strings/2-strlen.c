#include "main.h"
/**
 * _strlen - the function that returns the length of a string
 * @s: the pointer to characters of string
 * Return: void
 */
int _strlen(char *s)
{
	int i, len;
	char str[];

	len = 0;
	s = str;
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
		s++;
	}
	_putchar(len);
	return (0);
}
