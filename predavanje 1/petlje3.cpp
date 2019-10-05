#include <iostream>
using std::cout;
int main(void)
{
    for (int i = 0; i < 10;)
    {
        cout << i;
    }

    int i = 0;
    for (;;)
    {
        cout << i;
    }
}
// i jedan i drugi for loop rade infinite loop