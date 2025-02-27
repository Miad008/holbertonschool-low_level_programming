#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
int i = 0, sign = 1, result = 0, started = 0;
while (s[i])
{
if (s[i] == '-')
sign *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
started = 1;
}
else if (started)
break;
i++;
}
return (result *sign);
}
