#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - Prints anything based on format specifier
* @format: List of types of arguments passed to function
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, j;
char *str, *separator = "";
const char valid_types[] = "cifs";

va_start(args, format);
if (format)
{
while (format[i])
{
j = 0;
while (valid_types[j] && valid_types[j] != format[i])
j++;
if (valid_types[j])
{
printf("%s", separator);
separator = ", ";
if (format[i] == 'c')
printf("%c", va_arg(args, int));
if (format[i] == 'i')
printf("%d", va_arg(args, int));
if (format[i] == 'f')
printf("%f", va_arg(args, double));
if (format[i] == 's')
{
str = va_arg(args, char *);
str = str ? str : "(nil)";
printf("%s", str);
}
}
i++;
}
}
va_end(args);
printf("\n");
}
