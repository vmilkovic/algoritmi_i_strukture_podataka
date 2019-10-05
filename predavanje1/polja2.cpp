#include <iostream>
using namespace std;
int main(void)
{
    int polje[4][3] = {
        { 1, 5, 6 },
        { 7, 3, 4 },
        { 8, 9, 3 },
        { 4, 9, 1 }
    };

    cout << polje[3][0];
    cin >> polje[2][2];
    cout << polje[2][2];
}