#include "main.h"

/**
 * sqrt_helper - helper to find sqrt recursively
 * @n: number
 * @i: possible root
 *
 * Return: sqrt or -1 if none
 */
int sqrt_helper(int n, int i)
{
    if (i * i > n)
        return (-1);
    if (i * i == n)
        return (i);
    return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 *
 * Return: sqrt or -1 if no natural sqrt
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqrt_helper(n, 0));
}
