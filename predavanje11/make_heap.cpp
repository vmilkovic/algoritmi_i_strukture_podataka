#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::vector;
using std::make_heap;

int main(){

    vector<int> v = { 33, 11, 22, 88, 77, 55, 44, 33, 22, 66 };
    make_heap(v.begin(), v.end());

    for(unsigned i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}