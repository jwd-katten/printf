#include "main.h"
/**
 * _format - Parse the format and call appropriate print functions
 * @format: The format string
 * @args: Variable arguments
 * @counter: Pointer to the character count
 * Return: On succes s, 0 is returned. On error, -1 is returned.
 */
int _format(const char *format, va_list args, int *counter)
{
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			if (*(format + 1) == '%')
				_putchar('%', counter);
			else if (*(format + 1) == 'c')
				_putchar(va_arg(args, int), counter);
			else if (*(format + 1) == 's')
				print_str(va_arg(args, char *), counter);
			else if (*(format + 1) == 'd' || *(format + 1) == 'i')
				print_int(va_arg(args, int), counter);
			else if (*(format + 1) == 'u')
				print_u_int(va_arg(args, unsigned int), counter);
			else if (*(format + 1) == 'b')
				print_binary(va_arg(args, unsigned int), counter);
			else if (*(format + 1) == 'x')
				print_hexl(va_arg(args, unsigned int), counter);
			else if (*(format + 1) == 'X')
				print_hexu(va_arg(args, unsigned int), counter);
			else
				_unsupported(*(format + 1), counter);
			if (*counter == -1)  /* Check for error in printing _putchar */
				return (-1);
			format += 2;  /* Move to the next format specifier */
		}
		else
		{
			_putchar(*format, counter);
			if (*counter == -1)  /* Check for error in _putchar */
				return (-1);
			++format;  /* Move to the next character in the format */
		}
	}

	return (0);  /* Return 0 on success */
}

/**
 * _unsupported - Handle unsupported format specifier
 * @c: The unsupported format specifier
 * @counter: Pointer to the character count
 */
void _unsupported(char c, int *counter)
{
	_putchar('%', counter);
	_putchar(c, counter);
}


