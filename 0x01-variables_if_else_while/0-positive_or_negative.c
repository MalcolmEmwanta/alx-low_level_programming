#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 *
 * main - Entry point
 *
 * Return; always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* if n<=o
	 * { printf (%d negative\n
	 * }
	 * else, if n==0
	 * { printf (%d 0\n
	 * )
	 * else
	 * {printf (%d positive\n)
	 *
	 * } */
	return (0);
}
