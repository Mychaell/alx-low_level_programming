#include "main.h"

/**
 * get_endianness - program checks the endianness
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
