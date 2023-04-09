#include "main.h"

/**
 * main - print the number of arguments passed in the program
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
(void) argv;/*ignore argv*/
printf("%d\n", argc - 1);

return (0);
