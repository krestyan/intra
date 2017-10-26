#include <stdio.h>
void    char_to_bit(unsigned char octet, char *bit);

unsigned char bit_to_char(char *bit);

unsigned char	swap_bits(unsigned char octet)
{
    char bit[8] = "00000000";
    char half_bit_temp[4];

    char_to_bit(octet, bit);
    printf("%s\n", bit);

    int i = 0;
    while (i < 4)
    {
        half_bit_temp[i] = bit[i];
        i++;
    }
    i = 0;
    while (i < 4)
    {
        bit[i] = bit[i + 4];
        i++;
    }
    i = 4;
    while (i < 8)
    {
        bit[i] = half_bit_temp[i - 4];
        i++;
    }
    printf("%s\n", bit);
    return (bit_to_char(bit));
}