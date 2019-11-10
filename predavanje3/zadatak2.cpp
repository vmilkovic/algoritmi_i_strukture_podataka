// Najveća zajednička mjera
// Jedan od najstarijih algoritama je Euklindov postupak za pronalaženje
// Najveće zajedničke mjere (nzm) dva negativna cijela broja:
/*
    ako je b = 0
        nzm = a
    inače
        nzm = najeveća zjednička mjera od b i ostatk djeljenja a sa b

    Primjer:
        nzm(9,6) = nzm(6,9%6) = nzm(6,3)
        nzm(6,3) = nzm(3,6%3) = nzm(3,0) => 3

    Prototip funkcije:
        int nzm(int, int);
*/

#include <iostream>

int nzm(int a, int b){
    if(b==0) return a;
    return nzm(b, a%b);
}

int main(){
    std::cout << nzm(9,6);
}