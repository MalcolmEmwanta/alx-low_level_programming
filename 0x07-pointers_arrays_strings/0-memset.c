#include "main.h"
/**
 * _memset() - fill memory  with a constant byte
 * @b: byte to fill
 * @n: number of times to fill
 * @s: pointer to the address
 *
 * Return: return to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
