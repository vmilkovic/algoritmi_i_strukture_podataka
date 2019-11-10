#include <iostream>
#include <array>

using std::array;
using std::cout;

int main(){
    array<int, 5> polje = {3,-2,9,7,-12};
    cout << polje.at(2); // Vraća vrijednost elementa s indexom index
}