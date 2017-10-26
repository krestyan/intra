unsigned char bit_to_char(char *bit)
{
    unsigned char out;
    int     i;

    i = 7;
    out = 0;
    while (*bit != 0)
    {
        if (!out)
        {
            if (*bit == '1')
                out += 1;
        }
        else
        {
            out = out * 2 + (*bit - '0');
        }
        bit++;
    }
    return (out);
}