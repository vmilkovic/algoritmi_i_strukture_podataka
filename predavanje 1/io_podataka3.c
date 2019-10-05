#include <stdio.h>
int main(void)
{
    char tekst[20];
    printf("Unesite tekst:");
    scanf("%s", tekst);
    printf("%s", tekst);
}

// Ako stavim tekst dulji od 20 tj. 19 znakova compiler javi error - *** stack smashing detected ***: <unknown> terminated ()
// unkown jer mi output file nije definiran već je samo ime fajla