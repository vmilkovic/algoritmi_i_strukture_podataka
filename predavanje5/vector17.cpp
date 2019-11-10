#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(){
    vector <int> polje = {5,6,7};

    auto poc = polje.begin();
    auto kraj = polje.end();

    for( auto it=poc; it != kraj; it++ ){
        cout << *it << endl; // 5,. 6, 7
    } // Erase invalidates iterators and references at or after the point of the erase
}