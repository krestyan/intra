#include <stdio.h>

void swapstr(char **s1, char **s2)
{
  char *temp;
  temp = *s1;
  *s1 = *s2;
  *s2 = temp;
}

int main()
{
    char *s1 = "1234";
    char *s2 = "asdf";
    printf("String 1 is: %s\nString 2 is: %s\n", s1, s2);
    printf("Swapping...\n");
    swapstr(&s1, &s2);
    printf("String 1 is: %s\nString 2 is: %s\n", s1, s2);
}