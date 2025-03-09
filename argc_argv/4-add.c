#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - Checks if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if string is a valid number, 0 otherwise.
 */
int is_number(char *str)
{
while (*str)
{
if (!isdigit(*str))
return (0);
str++;
}
return (1);
}

/**
 * main - Adds positive numbers passed as arguments.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 if successful, 1 if an argument is not a valid number.
 */
int main(int argc, char *argv[])
{
int sum = 0, i;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (!is_number(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
