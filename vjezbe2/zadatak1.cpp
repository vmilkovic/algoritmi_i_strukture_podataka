#include <iostream>
using std::cout;

int prikazi1( int n ){


    if (n > 0){
       cout << n;
       prikazi1(n - 1);
    }

}

int main(){

    prikazi1(5);

}