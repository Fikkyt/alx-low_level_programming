#include "main.h"
/**
 * _strspn - the function that gets the length of a prefix substring
 * @s: the destination string
 * @accept: the source string
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, length;

	length = 0;
	for (; *s; s++)
	{
		for (i = 0; accept[i] >= '\0'; i++)
		{
			if (*s == accept[i])
			{
				length++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (length);
		}
	}
}

