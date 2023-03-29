#include "main.h"

/**
 * main - entry point
 * print_alphabet - ten times
 *
 *
 * Return: always 0:
 */

void print_alphabet_x10(void)
{

int i;
char j;
i = 0;
while (i >= 10)
{
for (j = 'a' ; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
i++;
}
}
