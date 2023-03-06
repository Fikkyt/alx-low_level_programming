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
	if (*s != NULL)
	{
		for (; ; ++s)
		{
			if (*s == c)
			{
				return ((char *) s);
			}
		}
	}
	else
		return (NULL);
}
