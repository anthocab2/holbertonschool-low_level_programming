#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - test cp program
* @ac: argument count
* @av: argument vector
*
* Return: 0
*/
int main(int ac, char **av)
{
if (ac != 3)
{
dprintf(2, "Usage: %s file_from file_to\n", av[0]);
exit(97);
}

return (0);
}
