#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Description: This function takes two integer pointers as parameters.
 * It swaps the values stored at the memory addresses they point to.
 * Example: if a = 98 and b = 42 → after swap_int(&a, &b), a = 42 and b = 98.
 */
void swap_int(int *a, int *b)
{
    int temp;

temp = *a;   /* Store the value of *a in temp */
*a = *b;     /* Assign the value of *b to *a */
*b = temp;   /* Assign the value of temp (original *a) to *b */
}
