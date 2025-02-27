#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string.
 */
void print_rev(char *s)
{
int len = 0;
while (s[len])
len++;
while (len--)
_putchar(s[len]);
_putchar('\n');
}
