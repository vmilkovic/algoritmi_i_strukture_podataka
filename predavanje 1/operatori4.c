#include <stdio.h>
int main(void)
{
    int i = 2;
    switch (i)
    {
    case 1:
        printf("Broj je 1");
        break;
    case 2:
        printf("Broj je 2");
        break;
    default:
        printf("Ostalo");
        break;
    }
    return 0;
}