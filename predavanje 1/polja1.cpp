#include <iostream>
using std::cout;
using std::cin;
int main(void)
{
    int polje[3] = { 5, 6, 7 };
    cout << polje[1];
    cin >> polje[1];
    for (int i = 0; i < 3; i++)
    {
        cout << polje[i];
    }
}