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
    int x, y;
    x = 3;
    y = 4;
    cout << zbroj(x, y) << endl;
    //cout << a; // ne možemo staviti a kao u slajdu jer varijabla nije definirana u main funkciji već je scopana na zbroj funkciju
}