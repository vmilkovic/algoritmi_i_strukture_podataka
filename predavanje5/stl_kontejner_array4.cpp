#include <iostream>
#include <array>

using std::array;
using std::cout;

int main(){
    array<int, 5> polje = {3,-2,9,7,-12};
    cout << polje[2]; // [index] operator -> Vraća (ili postavlja) vrijednost elemenata s odabranim indexom.
    polje[2] = 4;
    cout << polje[2];
}