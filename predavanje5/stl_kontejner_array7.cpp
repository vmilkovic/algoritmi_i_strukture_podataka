#include <iostream>
#include <array>

using std::array;
using std::cout;

int main(){
    array<int, 5> polje;
    polje.fill(1); // Postavlja vrijednost svih elemenata na odabranu vrijednost
    cout << polje.at(3);
}