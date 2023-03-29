#include "main.h"

/**
 * main - entry point
 * _islower - if c is lowercase
 *
 *
 * Return: 1 for lowercase character or for anything else always
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);

}
