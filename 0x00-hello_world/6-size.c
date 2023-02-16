#include <stdio.h>
/**
 * main - the entry point
 * The program that prints the size of various types.
 * Return: 0
 */
int main(void)
{
	int i;
	float f;
	long int l;
	long long int k;
	char c;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(l));
	printf("Size of long long int: %zu byte(s)\n", sizeof(k));
	printf("Size of float: %zu byte(s)\n", sizeof(f));

	return (0);
}
