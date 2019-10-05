#include <iostream>
using std::cout;
using std::endl;
int main()
{
    int a = 5;
    int *p = &a;

    cout << a << endl; // 5
    cout << p << endl; // memorijska lokacija pr. 0x7ffc774616cc
    cout << *p << endl; // 5
}