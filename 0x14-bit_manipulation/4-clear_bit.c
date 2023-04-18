#include "main.h"

/**
 * clear_bit - sets the value of the given bit to 0 output
 * @n: pointer to numb to change
 * @index: index of bit to clear on final
 *
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

