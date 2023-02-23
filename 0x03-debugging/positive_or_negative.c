#include "main.h"

/**
 * positive_or_negative - checks for positive or negative numbers
 * @i:the number to be checked
 * if the number is greater than 0: is positive, if the number is 0: is zero
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("%d is zero\n", i);
}
