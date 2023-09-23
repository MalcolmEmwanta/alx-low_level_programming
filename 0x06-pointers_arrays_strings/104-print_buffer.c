#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer to be printed
 * @size: size of bytes of the buffer
 * Return: 10 bytes per line
 */

void print_buffer(char *b, int size)
{
	for (int i = 0; i < size; i += 10)
	{
		printf("Line %2zu: ", (i / 10) + 1);

		int lineSize = (size - i >= 10) ? 10 : (size - i);

		for (int j = 0; j < lineSize; j++)
		{
			printf("%02X ", (unsigned char)buffer[i + j]);
		}
		printf("\n");
	}
}
