#include "main.h"
/**
 * check_sqrt - the function checks gthe square root of a number n
 * @num: the integer number to be find its square root
 * @y: update the multiplier of y by increment
 * Return: the sqrt
 */
int check_sqrt(int num, int y)
{
	if (num == 0)
	{
		return (0);
	}
	if (num < 0)
	{
		return (-1);
	}
	return ((1 +  check_sqrt((num - 1) - (2 * (y + 1)))));
}
/**
 * _sqrt_recursion - the function that returns
 * the natural square root of a number
 * @n: the number to find its square root
 * Return: the check_sqrt
 */
int _sqrt_recursion(int n)
{
	int y = -1;

	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (check_sqrt(n, y));
}
