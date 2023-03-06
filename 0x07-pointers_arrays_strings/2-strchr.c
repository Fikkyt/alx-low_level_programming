#include "main.h"
/**
 * _strchr - the function that locates a character in a string
 * @s: the pointer s which contains the
 * address of the string
 * @c: the character to find
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
