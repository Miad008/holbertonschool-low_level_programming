#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: The minimum integer value (inclusive)
 * @max: The maximum integer value (inclusive)
 *
 * Return: Pointer to the newly created array, or NULL if failed
 */
int *array_range(int min, int max)
{
int *arr, i, size;

if (min > max)
return (NULL);

size = max - min + 1;
arr = malloc(sizeof(int) * size);
if (!arr)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = min + i;

return (arr);
}
