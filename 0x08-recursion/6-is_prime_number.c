#include "main.h"
/**
 * check_prime - this function checks for prime numbers
 * @num: the integer number
 * @div: the divisor
 * Return: 0
 */
int check_prime(int num, int div)
{
	if (num % div == 0)
	{
		return (0);
	}
	if (div == num / 2)
	{
		return (1);
	}
	return (check_prime(num, div + 1));
}
/**
 * is_prime_number - the function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: the integer number
 * Return: 0
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (check_prime(n, div));
}
