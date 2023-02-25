#include <stdio.h>
/**
 * main - the entry point
 * Description: find the prime number 612852475143
 * Return: 0;
*/
int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long largest_prime = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
			largest_prime = divisor;
		}
		divisor++;
	}
	printf(" Largest prime factor: %ld\n", largest_prime);
	return (0);
}


