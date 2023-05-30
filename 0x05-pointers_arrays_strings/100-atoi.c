#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 *
 * Return: integer
 */
int _atoi(char *s)
{
    int i, sign, num;

    // initialize variables
    i = 0;
    sign = 1;
    num = 0;

    // loop through string
    while (s[i] != '\0')
    {
        // check for sign
        if (s[i] == '-')
            sign *= -1;

        // check for digits
        if (s[i] >= '0' && s[i] <= '9')
        {
            // multiply num by 10 to shift digits left
            num *= 10;
            // subtract '0' to convert ASCII to integer
            num += (s[i] - '0');
        }

        // check for end of number
        if (num > 0 && (s[i + 1] < '0' || s[i + 1] > '9'))
            break;

        // increment counter
        i++;
    }

    // return number with sign
    return (num * sign);
}
