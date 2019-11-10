#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(){
    vector<int> polje = {5,6,7};
    polje[0] = 15;
    cout << polje[0] << endl;
}