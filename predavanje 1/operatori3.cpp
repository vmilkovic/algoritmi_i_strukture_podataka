#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    if (int b = 2; a > b) // javlja warning - init-statement in selection statements only available with -std=c++1z or -std=gnu++1z
    {
        cout << a << endl;
        cout << b << endl;
    }
    cout << a << endl;
}