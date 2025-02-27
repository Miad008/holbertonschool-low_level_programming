#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
int len = 0, i;
while (str[len])
len++;
i = (len + 1) / 2;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
