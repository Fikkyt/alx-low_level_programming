#include "main.h"
/**
 * rev_string - the  function that reverses a string
 * @s: the pointer to string of characters
 * Return: void
 */
void rev_string(char *s)
{
	int index, len, half;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
		;
	index = 0;
	half = len / 2;
	while (half--)
	{
		temp = s[len - index - 1];
		s[len - index - 1] = s[index];
		s[index] = temp;
	}
}
