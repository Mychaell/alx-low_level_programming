#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed to the program.
 *
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /* Ignoring argv to avoid a warning for unused variable */
	printf("%d\n", argc - 1)
	return (0);
}
