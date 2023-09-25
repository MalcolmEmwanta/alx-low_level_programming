#include "main.h"
/**
 * _memcpy - function to copy memory area
 * @n: number of times to copy
 * @src: source memory area
 * @dest: destination memory area
 * Return: returns the destination memory area
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
