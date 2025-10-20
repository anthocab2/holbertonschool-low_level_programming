#include "main.h"

int main(void)
{
    int r;

    r = _isalpha('H');  /* mayúscula */
    _putchar(r + '0');  /* imprime 1 */

    r = _isalpha('o');  /* minúscula */
    _putchar(r + '0');  /* imprime 1 */

    r = _isalpha(108);  /* 'l' */
    _putchar(r + '0');  /* imprime 1 */

    r = _isalpha(';');  /* no letra */
    _putchar(r + '0');  /* imprime 0 */

    _putchar('\n');
    return (0);
}
