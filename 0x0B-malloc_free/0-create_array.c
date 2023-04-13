#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - initializes to a char.
 * @size: unsigned int size
 * @c: initializes char
 * Description: create array of size size and assign char c
 * Return:  a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int i;

	A = malloc(sizeof(char) * size);
	if (size == 0 || A == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		A[i] = c;
	return (A);
}
