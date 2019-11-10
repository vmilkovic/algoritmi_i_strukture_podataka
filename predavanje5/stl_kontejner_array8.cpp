#include <iostream>
#include <array>

using std::array;
using std::cout;

int main(){
    array<int, 5> polje;
    polje.fill(1);
    cout << polje.size();  // Vraća veličinu tj. broj elemenata arraya.
}