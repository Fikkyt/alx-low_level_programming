#include "main.h"
/**
 * _pow_recursion - the function that returns the
 * value of x raised to the power of y
 * @x: the base integer value
 * @y: the power integer value
 * Return: int _power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
