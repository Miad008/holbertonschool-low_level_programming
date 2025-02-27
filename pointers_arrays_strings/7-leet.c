#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *s)
{
int i = 0, j;
char letters[] = "aAeEoOtTlL";
char leet_chars[] = "4433007711";

while (s[i])
{
for (j = 0; letters[j]; j++)
{
if (s[i] == letters[j])
{
s[i] = leet_chars[j];
break;
}
}
i++;
}
return (s);
}
