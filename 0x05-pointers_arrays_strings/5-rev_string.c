#include "main.h"
/**
 * rev_string - the  function that reverses a string
 * @s: the pointer to string of characters
 * Return: void
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (; i >= 0; s--, i--)
	{
		if (*s != '\0')
		{
			s = s[i];
		}
	}
}
