#include "main.h"
/**
* flip_bits - returns the number of bits to flip to convert n to m
* @n: the first number
* @m: the second number
*
* Return: the number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;
unsigned long int xor_result = n ^ m;

while (xor_result)
{
count += xor_result & 1;
xor_result >>= 1;
}

return (count);
}
