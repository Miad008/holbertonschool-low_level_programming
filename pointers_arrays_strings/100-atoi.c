#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
int i = 0, sign = 1;
unsigned int result = 0;

while (s[i] && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign *= -1;
i++;
}

while (s[i] >= '0' && s[i] <= '9')
{
if (result > (unsigned int)INT_MAX / 10 ||
	(result == (unsigned int)INT_MAX / 10 &&
	(s[i] - '0') > (unsigned int)INT_MAX % 10))
{
return (sign == 1 ? INT_MAX : INT_MIN);
}

result = result * 10 + (s[i] - '0');
i++;
}

return (sign * (int)result);
}
