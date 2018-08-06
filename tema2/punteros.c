#include <stdio.h>
#include <stdlib.h>
int y = 1;

int main()
{
    int x = 4;
    int *address_of_x = &x;
    int value_stored = *address_of_x;
    *address_of_x = 99;
    printf("x is stored at %p\n", &x);
    printf("%i\n", value_stored);
    printf("%i\n", y);
    return 0;
}