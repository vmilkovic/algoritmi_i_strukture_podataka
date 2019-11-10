#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(){
    vector<int> polje = {5,6,7};
    polje.front() = 19;
    cout << polje.at(0) << endl;
}