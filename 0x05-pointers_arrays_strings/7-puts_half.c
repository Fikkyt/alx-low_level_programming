#include "main.h"
/**
 * puts_half - the function that prints half of
 * a string, followed by a new line
 * @str: the pointer of characters of string
 * Return: void
 */
void puts_half(char *str)
{
	int len, index, half;

	for (len = 0; str[len] != '\0'; len++)
		;
	index = (len / 2);
	half = len / 2;
	while (half--)
	{
		str[index];
		index++;
	}
}
