#include "main.h"
/**
 * root_checker - the function finds the root of a number
 * @num: the required number
 * @root: the expected root
 * Return: 0
 */
int root_checker(int num, int root)
{
	if (root * root == num)
	{
		return (root);
	}
	if (root == num / 2)
	{
		return (-1);
	}
	return (root_checker(num, root + 1));
}
/**
 * _sqrt_recursion - the function that returns the
 * natural square root of a number.
 * @n: the required number whose root is to be find
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return ((root_checker(n, root)));
}
