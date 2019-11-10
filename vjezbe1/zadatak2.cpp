#include <iostream>
using std::cout;

int prikazi1( int n ){

    if (n > 0){
       prikazi1(n - 1);
       cout << n;
    }
}

int main(){

    prikazi1(5);

}