#include "main.h"

/**
 *    _put - function that print a string
 *    @str: pointre to the string
 *    Return: string and new line
 */

void _puts(char *str);
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
