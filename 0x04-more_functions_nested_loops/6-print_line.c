#include "main.h"
/**
 * print_line - draw straight line
 *
 * @n: integer to print line
 */

void print_line(int n)
{
	int i;

	for (i = '0'; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
