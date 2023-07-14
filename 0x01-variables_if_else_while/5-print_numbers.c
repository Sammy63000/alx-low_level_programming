#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Prints numbers of base 10'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}