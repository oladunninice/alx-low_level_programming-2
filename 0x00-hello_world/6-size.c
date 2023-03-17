#include <stdio.h>
/**
 * main: C program that prints the size of various types on the computer it is compiled and run on
 *
 * Return: 0 (Success)
 */
int main(void)
{
	
char a;
int b;
long long int d;
float f;

printf("Size of a cchar: %lu byte(s)\n", (unsinged long)sizeof(a));
printf("Size of a int: %lu byte(s)\n", (unsinged long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsinged long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsinged long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsinged long)sizeof(f));
return (0);
}
