#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: destination of new string
 * @src: source string
 * @n: amount of times to append
 *
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);

}
