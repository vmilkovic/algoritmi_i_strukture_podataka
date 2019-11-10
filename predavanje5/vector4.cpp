#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(){
    vector<int> polje = {5,6,7};

   /*  int v = polje.at(0);
    v = 12; */

    int &v = polje.at(0);
    v = 12;
    cout << v << endl;
    cout << polje.at(0) << endl; // Dalje prikaže da je 5 jer ne promjeni direktno 0 index već je samo kopij zato trebamo napravit sa referencom

}