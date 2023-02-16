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

	printf("The size of a char is %zu byte(s)\n", sizeof(c));
	printf("The size of an int is %zu byte(s)\n", sizeof(i));
	printf("The size of a long int is %zu byte(s)\n", sizeof(l));
	printf("The size of long long int is %zu byte(s)\n", sizeof(k));
	printf("The size of float is %zu byte(s)\n", sizeof(f));

	return (0);
}
