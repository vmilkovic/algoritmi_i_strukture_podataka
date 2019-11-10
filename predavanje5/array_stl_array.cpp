// Obično polje
#include <iostream>
#include <array>

using std::cout;
using std::array;

/* int main(){
    int polje[3] = {5,6,7};
    polje[0] = 9;
    cout << polje[2];
} */

int main(){
    array<int, 3> polje = {5,6,7};
    polje[0] = 9;
    cout << polje[2]; // 7
    cout << polje.at(2); // 7
    cout << polje.front(); // 9
    cout << polje.back(); // 7
    cout << polje.size(); // 3
}