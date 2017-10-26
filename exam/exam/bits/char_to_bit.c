#include <stdio.h>

void    char_to_bit(unsigned char octet, char *bit)
{
    int i = 7;
    while (octet)
    {
        bit[i] = octet % 2 + '0';
        octet /= 2;
        i--;
    }
}