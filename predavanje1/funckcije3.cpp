#include <iostream>
using std::cout;
using std::endl;
int zbroj(int a, int b)
{
   a++;
   return a + b;
}
int main(void)
{
    int a, b;
    a = 3;
    b = 4;
    cout << zbroj(a, b) << endl;
    cout << a;
}