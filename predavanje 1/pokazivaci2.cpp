#include <iostream>
using std::cout;
using std::endl;
int main()
{
    int a = 5;
    int *p = &a;

    cout << a << endl; // 5
    *p = *p + 1;
    cout << a << endl; // 6
}