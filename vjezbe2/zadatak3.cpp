#include <iostream>

using std::cout;

int suma1( int n ){

    if( n < 0 ){

        return 0;

    } else {

        return n + suma1( n - 1 );

    }

}

int main(){

    cout << suma1(5);

}