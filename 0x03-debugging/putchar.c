#include<unistd.h>
/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Rwturn: On success 1.
 *
 * on error, -1 is rwturned, and errno is set appropriately 
 *
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
