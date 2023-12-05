#include "main.h"
/**
 * print_int_recursive - Helper function to print integer recursively
 * @n: The integer to print
 * @counter: Pointer to the character count
 */
void print_int_recursive(unsigned int n, int *counter)
{
	char digit;

	if (n == 0)
		return;

	print_int_recursive(n / 10, counter);
	digit = '0' + n % 10;
	_putchar(digit, counter);
}

/**
 * print_int - Print a non-negative integer to standard output
 * @n: The integer to print
 * @counter: Pointer to the character count
 */
void print_int(int n, int *counter)
{
	if (n < 0)
	{
		_putchar('-', counter);
		print_int_recursive((unsigned int)(-n), counter);
	}
	else
	{
		print_u_int((unsigned int)n, counter);
	}
}


/**
 * print_u_int - Print a non-negative integer to standard output
 * @n: The integer to print
 * @counter: Pointer to the character count
 */
void print_u_int(unsigned int n, int *counter)
{
	if (n == 0)
	{
		_putchar('0', counter);
	}
	else
		print_int_recursive(n, counter);
}

