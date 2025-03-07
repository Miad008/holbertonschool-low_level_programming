#include "main.h"

/**
 * _strncat - Concatenates two strings using at most `n` bytes from `src`.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to use from `src`.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (dest[i])
i++;

while (src[j] && j < n)
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';

return (dest);
}
