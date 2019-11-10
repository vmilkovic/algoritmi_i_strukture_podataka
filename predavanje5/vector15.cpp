#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(){
    vector <int> polje = {5,6,7};

    auto it = polje.begin();
    polje.insert(it, 4, 50);

    for (int i=0; i < polje.size(); i++ ){
        cout << polje[i] << endl;
    }
}