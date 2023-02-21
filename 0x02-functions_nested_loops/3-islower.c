#include "main.h"
/**
 * _islower - the entry point
 * Description - the fucntion checks for lowercase
 * @c: the integer value it receives
 * Return: 1 or 0 as stated
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
