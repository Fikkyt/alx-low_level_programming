#include "main.h"
/**
 * _strlen - the function that returns the length of a string
 * @s: the pointer to characters of string
 * Return: void
 */
int _strlen(char *s)
{
	int len;
	char strn[];

	len = 0;
	s = &strn;
	while s
	{
		if (*s != '\0')
		{
			len++;
		}
		s++;
	}
	_putchar(len + '\0');
	return (0);
}
