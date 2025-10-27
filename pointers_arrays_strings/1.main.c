#include "main.h"
#include <stdio.h>

/**
 * main - check the _strncat function
 *
 * Return: Always 0
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);

    /* concat only 1 character */
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);

    /* concat all characters */
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s\n", ptr);

    return (0);
}
