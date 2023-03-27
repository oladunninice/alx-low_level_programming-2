#include "main.h"

/**
 * void swap - take in two variable integers and swaps them
 * @oladunni igbokwe
 * @: swaps and stores address of b
 * @: swaps and stores address of a
 * Return: 0
 */

void swap_int(int *a, int *b)

{
	int change;

	change = *b;
	*b = *a;
	*a = change;

}
