#include <stdlib.h>

/**
* _calloc - Allocates memory for an array and initializes it to zero
* @nmemb: Number of elements
* @size: Size of each element in bytes
*
* Return: Pointer to allocated memory, or NULL if failed
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);
if (!ptr)
return (NULL);

for (i = 0; i < (nmemb * size); i++)
ptr[i] = 0;

return (ptr);
}
