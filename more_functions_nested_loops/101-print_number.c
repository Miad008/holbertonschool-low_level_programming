#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to print.
 */
void print_number(int n)
{
if (n == -2147483648)
{
_putchar('-');
_putchar('2');
_putchar('1');
_putchar('4');
_putchar('7');
_putchar('4');
_putchar('8');
_putchar('3');
_putchar('6');
_putchar('4');
_putchar('8');
return;
}

if (n < 0)
{
_putchar('-');
n = -n;
}

if (n / 10)
print_number(n / 10);

_putchar((n % 10) + '0');
}
