#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: the first string in the argument
 * @s2: the second string in the argument
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, sum_s1, sum_s2, diff;

	for (i = 0; s1[i] != '\0'; i++)
	{
		sum_s1 += (int) (s1[i]);
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		sum_s2 += (int)(s2[j]);
	}
	diff = sum_s1 - sum_s2;
	return (diff);
}
