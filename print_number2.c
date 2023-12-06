#include "main.h"

/**
 * print_binary - Print an unsigned integer in binary format
 * @n: The unsigned integer to print
 * @counter: Pointer to the character count
 */
void print_binary(unsigned int n, int *counter)
{
	int i;
	int _zeros = 1; /* zeros */

	for (i = MAX_BYTE; i >= 0; i--)
	{
		if (((n >> i) & 1) || !_zeros)
		{
			_putchar(((n >> i) & 1) + '0', counter);
			_zeros = 0; /* no longer used */
		}
	}

	/* If the integer was 0, print a single 0 */
	if (_zeros)
	{
		_putchar('0', counter);
	}
}

/**
 * print_hexl - Print an unsigned integer in lowercase hexadecimal
 * @n: The unsigned integer to print
 * @counter: Pointer to the character count
 */
void print_hexl(unsigned int n, int *counter)
{
	int i;
	char hex_digits[] = "0123456789abcdef";
	int _zero = 0;

	for (i = MAX_BYTE; i >= 0; i--)
	{
		char hex_digit = hex_digits[(n >> (i * 4)) & 0xF];

		if (hex_digit != '0' || _zero)
		{
			_putchar(hex_digit, counter);
			_zero = 1; /*  flag once a non-zero digit is found */
		}
	}

	if (!_zero)
	{
		_putchar('0', counter);
	}
}

/**
 * print_hexu - Print an unsigned integer in uppercase hexadecimal format
 * @n: The unsigned integer to print
 * @counter: Pointer to the character count
 */
void print_hexu(unsigned int n, int *counter)
{
	int i;
	char hex_digits[] = "0123456789ABCDEF";
	int _zero = 0; /* Flag to track if a non-zero digit has been encountered */

	for (i = MAX_BYTE; i >= 0; i--)
	{
		if ((hex_digits[(n >> (i * 4)) & 0xF]) != '0' || _zero)
		{
			_putchar((hex_digits[(n >> (i * 4)) & 0xF]), counter);
			_zero = 1; /*  flag once a non-zero digit is found */
		}
	}

	/* If the integer was 0, print a single 0 */
	if (!_zero)
	{
		_putchar('0', counter);
	}
}

