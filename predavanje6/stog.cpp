#include <iostream>
#include <stack>

using std::stack;
using std::cout;
using std::endl;

int main() {
    stack<int> stog;

    stog.push(2);
    stog.push(3);

    cout << stog.top();

    auto& var = stog.top(); // top() vraća referencu na element na vrhu
    var = 4;
    cout << stog.top();

    stog.pop();
    stog.pop();

    cout << stog.top(); // ne vrati ništa jer top vraća referencu na element na vrhu

}