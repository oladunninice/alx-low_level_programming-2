#include "main.h"

/**
 * _abs(int) - absolute value of an integer
 * print_alphabet - ten times
 *
 *
 * Return: always 0:
 */
int _abs(int c)

{
        if (c < 0)
        {
                int abs_val;

                abs_val = c * -1;
                return (abs_val);
        }
        return (c);
}

