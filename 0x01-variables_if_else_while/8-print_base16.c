#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int C;

	for (C = 0; C < 16; C++)
		putchar('0' + C);

	putchar('\n'); /* Add a newline character after printing the numbers */

	return (0);
}
