#include "main.h"

/**
 * _putchar - Print a character to standard output
 * @c: The character to print
 * @counter: Pointer to the character count
 */
void _putchar(int c, int *counter)
{
	if (write(1, &c, 1) == -1)
		return;

	(*counter)++;
}

/**
 * print_str - Print a string to standard output
 * @str: The string to print
 * @counter: Pointer to the character count
 */
void print_str(char *str, int *counter)
{
	if (str == NULL)
	{
		print_str("(null)", counter);
		return;
	}

	while (*str)
		_putchar(*str++, counter);
}
