#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char C;

	for (C = 'a'; C <= 'z'; C++)
	{
		putchar(C);
	}

	putchar('\n'); /* Add a newline character after printing the alphabets */

  	for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}

	putchar('\n'); /* Add a newline character after printing the alphabets */

	return (0);
}
