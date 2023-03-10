#include "main.h"
/**
 * _strpbrk - the function that searches a string for any of a set of bytes
 * @s: the destination string
 * @accept: the source string
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return ('\0');
}
