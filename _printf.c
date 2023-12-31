#include "main.h"


/**
 * _printf - Custom printf function
 * @format: The format string
 *
 * Return: The number of characters printed (excluding the null byte),
 * or -1 on error
 */
int _printf(const char *format, ...)
{
	int counter = 0; /* Initialize the character counter */
	va_list args;       /* Declare the variable arguments */

	va_start(args, format); /* Start processing arguments */

	if (_format(format, args, &counter) == -1)
	{
	va_end(args); /* on error end */
		return (-1);
	}
	va_end(args); /* End processing */

	return (counter); /* Return the total number of characters printed */
}




