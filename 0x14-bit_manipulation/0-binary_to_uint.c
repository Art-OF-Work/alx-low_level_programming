#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
    int i;
    unsigned int bin = 1;
    unsigned int uint = 0;
    int len;

    if (b == NULL)
        return (0);

    len = strlen(b);

    for (i = len - 1; i >= 0; i--)
    {
        if (b[i] == '1')
            uint += bin;
        bin *= 2;

        if (b[i] != '1' && b[i] != '0')
            return (0);
    }

    return (uint);
}
