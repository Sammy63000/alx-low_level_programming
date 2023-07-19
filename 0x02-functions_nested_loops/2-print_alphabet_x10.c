#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times followed by
 *                      a new line
 *
 * Description: This function prints the alphabet in lowercase ten times, each
 *              on a separate line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
