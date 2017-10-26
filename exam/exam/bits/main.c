#include <stdio.h>

unsigned char	swap_bits(unsigned char octet);

int main()
{
    unsigned char octet = 10;
    octet = swap_bits(octet);
    printf("%d\n", octet);
}