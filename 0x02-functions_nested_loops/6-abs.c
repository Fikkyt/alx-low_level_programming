#include "main.h"
/**
 * _abs - the entry point
 * Description: the function prints absolute values
 * @n: the placeholder
 * Return: 0
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n <  0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}
