#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - Allocates memory using malloc
* @b: The size of memory to allocate
*
* Return: Pointer to the allocated memory, exits with status 98 on failure
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
