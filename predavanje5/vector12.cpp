#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(){
    vector <int> polje = {5,6,7};
    vector <int>::iterator it; // iterator it ćemo koristit za pristup pojedinim elementima

    it = polje.begin(); // nije istokao front()!
    cout << *it << endl;

    it = polje.end(); // nije istokao front()!
    cout << *it << endl;
}