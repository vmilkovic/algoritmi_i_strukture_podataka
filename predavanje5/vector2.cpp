#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main(){
    vector<int> polje1;
    vector<int> polje2 = {1,2,3};

    cout << polje1[0] << endl; // problem!
    polje1[0] = 2; // problem!

    cout << polje2[0] << endl; // ok
    polje2[0] = 2; // ok
}