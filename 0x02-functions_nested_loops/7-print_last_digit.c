#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - last digit
 *
 * @n: The int to print
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
