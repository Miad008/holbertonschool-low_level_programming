#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: The string to encode.
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
char *p = s;
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; alpha[j] != '\0'; j++)
{
if (s[i] == alpha[j])
{
s[i] = rot13[j];
break;
}
}
}
return (p);
}
