#include "main.h"
/**
 * _strlen_recursion - print a string in a reverse
 * @s: the length of string to be printed
 * Return: always 0
 */
int _strlen_recursion(char *s)
{
int n = 0;

if (*s)
{
n++;
n += _strlen_recursion(s + 1);
}
return (n);
}
