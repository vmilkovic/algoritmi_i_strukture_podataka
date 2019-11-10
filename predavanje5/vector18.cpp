#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(){
    vector <int> polje = {5,6,7};

    auto poc = polje.begin();
    auto kraj = polje.end();

    auto it = polje.begin();
    polje.erase(it);

    for(it = poc; it != kraj; it++){
        cout << *it << endl;
    }
}