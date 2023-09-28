#include "main.h"
/**
 * put_recursion - prints a string
 *
 * Return: returns 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
