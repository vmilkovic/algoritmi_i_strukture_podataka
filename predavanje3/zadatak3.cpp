// Traćenje elemenata u polju.
// Napišite rekurzivnu funkciju koja u polju od n cjelobrojnih elemenata traži
// element s vrijednošću x. Funkcija fraća indeks nađenog elementa, ili -1 ukoliko element nije pronađen u polju.
// Prototip funkcije: int trazi( int polje[], int x, int n, int i);

#include <iostream>

int trazi( int polje[], int x, int n, int i){
    if(i >= n) return -1;
    if(polje[i] == x) return i;
    return trazi(polje, x, n, i+1);
}

int main(){
    int polje[5] = {7,-2,8,9,12};
    std::cout << trazi(polje, -2, 5, 0);
}