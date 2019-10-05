#include <iostream>
using std::cout;
using std::endl;

int zbroji(int *a, int *b)
{
    *a = *a + 1;
    return *a + *b;
}
int main()
{
    int a, b;
    a = 3;
    b = 4;
    cout << zbroji(&a, &b) << endl; // 8
    cout << a; // 4
}