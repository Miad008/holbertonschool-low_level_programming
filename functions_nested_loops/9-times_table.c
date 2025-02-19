#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Description: This function prints the 9 times table in a formatted manner.
 * Each row represents the multiplication of a number (0 to 9) by 0 through 9.
 * The output is formatted with commas and proper spacing.
 */
void times_table(void)
{
int row, column, product;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
product = row * column;

if (column == 0)
{
_putchar('0' + product);
}
else
{
_putchar(',');
_putchar(' ');

if (product < 10)
{
_putchar(' ');
_putchar('0' + product);
}
else
{
_putchar('0' + (product / 10));
_putchar('0' + (product % 10));
}
}
}
_putchar('\n');
}
}
