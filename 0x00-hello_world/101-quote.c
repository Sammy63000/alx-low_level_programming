#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1
 */
int main(void)
{
	const char *str =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const int len = 59;

	write(2, str, len);

	return (1);
}
