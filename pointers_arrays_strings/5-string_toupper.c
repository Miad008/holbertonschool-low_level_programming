#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @s: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *s)
{
int i = 0;

while (s[i])
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
i++;
}

return (s);
}
