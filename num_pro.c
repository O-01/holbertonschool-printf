#include "main.h"

/**
 * number_pro - helper function to print # input using _putchar
 * @dude: input number
 * Return: void
 */

void number_pro(int dude)
{
        mint x = dude;

        if (x / 10)
                number_pro(x / 10);

        _putchar(x % 10 + '0');
}
