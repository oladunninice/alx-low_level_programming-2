#include "main.h"
/**
 * _chessboard - entry point
 * @a: input
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
int i;
int j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
-putcher(a[i][j]);
-putcher('\n');
}
