#include <stdio.h>
int main(void)
{
    int polje[3] = { 5, 6, 7 };
    printf("%d", polje[1]);
    scanf("%d", &polje[1]);
    printf("%d", polje[1]);
}