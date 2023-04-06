#include "main.h"
/**
 * _puts_recursion - print a string on a new line
 * @s: the string to be printed
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
			_puts_recursion(s + 1);
	}

	_putchar('\n');
}
