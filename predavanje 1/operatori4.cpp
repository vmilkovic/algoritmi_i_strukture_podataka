#include <iostream>
using std::cout;
int main(void)
{
    int i = 2;
    switch (i)
    {
    case 1:
        cout << 1;
        break;
    case 2:
        cout << 2;
        break;
    default:
        cout << "Ostalo";
        break;
    }
}