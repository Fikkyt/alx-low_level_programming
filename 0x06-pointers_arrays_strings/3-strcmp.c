#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: the first string in the argument
 * @s2: the second string in the argument
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i, diff;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
		{
			diff = s1[i] - s2[i];
		}
		return (diff);
	}
}

