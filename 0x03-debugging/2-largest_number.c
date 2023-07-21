#include "main.h"

/**
 * largest_number - Returns the largest of 3 numbers
 * @a: First integer
 * @b: Second integer
 * @c: Third integer
 *
 * Return: Largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (b > c)
			largest = a;
		else if (a > c)
			largest = a;
		else
			largest = c;
	}
	else
	{
		if (b < c)
			largest = c;
		else
			largest = b;
	}

	return (largest);
}
