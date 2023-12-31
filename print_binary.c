#include "main.h"
/**
 * print_binary - Print an unsigned integer in binary representation.
 * @num: The unsigned integer to print.
 * Return: The number of characters printed.
 */
int print_binary(unsigned int num)
{
	int count = 0, bits[32];
	int index = 0, i;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		bits[index++] = num % 2;
		num /= 2;
	}
	for (i = index - 1; i >= 0; i--)
	{
		_putchar(bits[i] + '0');
		count++;
	}
	return (count);
}
