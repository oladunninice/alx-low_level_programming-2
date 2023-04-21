#include "main.h"

/**
 *  _strlen - check the length of the string
 *  @s: _string is to be changed
 *  Return: the length of the string
 */

int _strlen(char *s)2-strlen.c 
{
	int string_length = 0;

		while (s[string_length])
			string_length++;
	return (string_length);
}
