#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for the program 101-crackme.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
int sum = 0, rand_num;
char password[100];
int i = 0;

srand(time(NULL));

while (sum < 2772 - 122)
{
rand_num = (rand() % 94) + 33;
password[i++] = rand_num;
sum += rand_num;
}

password[i++] = 2772 - sum;
password[i] = '\0';

printf("%s", password);
return (0);
}
