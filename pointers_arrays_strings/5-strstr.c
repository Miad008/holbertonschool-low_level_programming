#include "main.h"
#include <stddef.h> /* لحل مشكلة NULL */

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The main string to search in.
 * @needle: The substring to find.
 *
 * Return: Pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
char *h, *n;

if (*needle == '\0')
return (haystack);

while (*haystack)
{
h = haystack;
n = needle;

while (*n && *h == *n)
{
h++;
n++;
}

if (*n == '\0')
return (haystack);

haystack++;
}

return (NULL);
}
