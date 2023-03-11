#include "main.h"
/**
 * _strlen - the function that returns the length of a string
 * @s: the pointer to characters of string
 * Return: void
 */
int _strlen(char *s)
{
	int length;

	for (; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
