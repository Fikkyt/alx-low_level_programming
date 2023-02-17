#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - entry point
 * The programme gives random out and print out the result using if statement
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10;
	if (l > 5)
	{
		printf("The Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("The Last digit of %d is 0\n", n);
	}
	else if (l < 6 && l != 0)
	{
		printf("The last digit of %d is less than 6 and not 0\n", n);
	}
	return (0);
}
