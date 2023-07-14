#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig_1, dig_2, dig_3;

	for (dig_1 = 0; dig_1 <= 7; dig_1++)
	{
		for (dig_2 = dig_1 + 1; dig_2 <= 8; dig_2++)
		{
			for (dig_3 = dig_2 + 1; dig_3 <= 9; dig_3++)
			{
				putchar(dig_1 + '0');
				putchar(dig_2 + '0');
				putchar(dig_3 + '0');

				if (dig_1 != 7 || dig_2 != 8 || dig_3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
