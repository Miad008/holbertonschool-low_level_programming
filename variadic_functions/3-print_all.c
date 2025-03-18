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
while (format && format[i])
{
j = 0;
while (valid_types[j])
{
if (format[i] == valid_types[j])
{
printf("%s", separator);
separator = ", ";
break;
}
j++;
}
if (format[i] == 'c')
printf("%c", va_arg(args, int));
else if (format[i] == 'i')
printf("%d", va_arg(args, int));
else if (format[i] == 'f')
printf("%f", va_arg(args, double));
else if (format[i] == 's')
{
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s", str);
}
i++;
}
va_end(args);
printf("\n");
}
