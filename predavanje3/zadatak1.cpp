// Napisati rekurzivnu funkciju koja prima dvije cjelobrojne vrijednosti (a i b) i izračunava a na b.
// Prototip funkcije: int potencija(int, int);

#include <iostream>

int potencija(int a, int b){
    if(b==1) return a;
    return a * potencija(a, b-1);
}

int main(){
    std::cout << potencija(2,3);
}