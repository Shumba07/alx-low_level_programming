#include "main.h"

/**
 * get_endianness - checks if the machine is little or is  big endian
 * Return: 0 for big, 1 if little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

