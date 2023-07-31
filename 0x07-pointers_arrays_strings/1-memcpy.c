#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Memory where data is copied to
 * @src: Memory where data is copied from
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
