#include "main.h"

/**
 * main - check the code for _islower
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');  /* mayúscula */
    _putchar(r + '0');  /* imprime 0 */

    r = _islower('o');  /* minúscula */
    _putchar(r + '0');  /* imprime 1 */

    r = _islower(108);  /* ASCII de 'l' */
    _putchar(r + '0');  /* imprime 1 */

    _putchar('\n');     /* salto de línea */
    return (0);
}
