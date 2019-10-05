#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++ )
    {
        for (int j = 1; j <= n; j++ )
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
    }
}