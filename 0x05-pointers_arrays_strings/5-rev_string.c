#include "main.h"
/**
 * rev_string - the fucntion that reverses a string
 * @s: the pointer of characters of string
 * Return: void
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++, s++)
	{
		;
	}
	for (; i >= 0; i--, s--)
	{
		s[i];
	}
	return (s[i]);
}
