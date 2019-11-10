#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(){
    vector<int> polje = {5,6,7};
    polje.at(0) = 12;
    cout << polje.at(0) << endl;
}