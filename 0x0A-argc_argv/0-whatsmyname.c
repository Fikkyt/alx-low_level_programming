#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - the main program prints the name of the program
 * @argc: argument counts that counts the number of arguments passed from the
 * command line
 * @argv: a vector arguemnt that contains a string of argument passed
 * Return: 0 or exit(EXIT_SUCCESSS)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	printf("The name of the programme is: %s", argv[i]);
	return (0);
}
