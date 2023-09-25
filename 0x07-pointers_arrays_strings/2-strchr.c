#include "main.h"
/**
 * _strchr - locates char in str
 * @c: char to locate
 * @s: string to compare
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
