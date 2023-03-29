#include "main.h"

/**
 * main - entry point
 * _isalpha - if c is lowercase
 *
 *
 * Return: 1 for lowercase character or for anything else always
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
