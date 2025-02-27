 #include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
int i = 0;
char sep[] = " \t\n,;.!?\"(){}";
int j, capitalize = 1;

while (s[i])
{
if (capitalize && s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;

capitalize = 0;
for (j = 0; sep[j]; j++)
{
if (s[i] == sep[j])
{
capitalize = 1;
break;
}
}
i++;
}
return (s);
}

