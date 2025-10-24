#include <unistd.h>

/**
 * _putchar - escribe el caracter c en stdout
 * @c: el caracter a escribir
 *
 * Return: 1 si OK, -1 en error
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
