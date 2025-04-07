#include <stdio.h>

int main (void)
{
    int a = 10;
    int b = 10;

    printf("aの値は%dです\n", ++a + 50);
    printf("bの値は%dです\n", b++ + 50);
    return 0;
}