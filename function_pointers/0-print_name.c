#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to print.
 * @f: A pointer to the function that prints the name.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
