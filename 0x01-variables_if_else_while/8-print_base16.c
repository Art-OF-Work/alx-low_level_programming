#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int C;

	for (C = 0; C < 16; C++) {
		if (C < 10)
			putchar('0' + C);
		else
			putchar('a' + C - 10);
	}

	putchar('\n'); /* Add a newline character after printing the numbers */

	return (0);
}
